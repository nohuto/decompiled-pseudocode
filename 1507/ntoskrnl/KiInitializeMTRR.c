/*
 * XREFs of KiInitializeMTRR @ 0x1407D292C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     KiReadFixedMtrr @ 0x1403F64EC (KiReadFixedMtrr.c)
 *     KiMaskToLength @ 0x1403F8DC0 (KiMaskToLength.c)
 *     KeRestoreMtrrBroadcast @ 0x1403FA0DC (KeRestoreMtrrBroadcast.c)
 *     MmLockPagableSectionByHandle @ 0x1404251E8 (MmLockPagableSectionByHandle.c)
 */

void __fastcall KiInitializeMTRR(char a1)
{
  char v1; // di
  char v2; // r14
  struct _KPRCB *CurrentPrcb; // r8
  PVOID PoolWithTag; // rax
  unsigned int v5; // ebx
  PVOID v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // ebp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  ULONGLONG v14; // r12
  __int64 v15; // r13
  __int64 v17; // [rsp+78h] [rbp+10h]

  v1 = a1;
  v2 = 1;
  if ( !KeGetPcr()->Prcb.Number )
  {
    qword_140332AE8 = __readmsr(0xFEu);
    KiMtrrInfo = __readmsr(0x2FFu);
    CurrentPrcb = KeGetCurrentPrcb();
    byte_140332AF1 = 0;
    if ( CurrentPrcb->CpuVendor == 1 )
      byte_140332AF1 = (__readmsr(0xC0010010) & 0x40000) != 0;
    if ( (((unsigned __int64)KiMtrrInfo >> 11) & 1) != 0 && (_BYTE)qword_140332AE8 )
    {
      if ( (qword_140332AE8 & 0x400) != 0 && (KeFeatureBits & 0x40) == 0 )
        qword_140332AE8 &= ~0x400uLL;
      PoolWithTag = qword_140332AF8;
      v5 = 16 * (unsigned __int8)qword_140332AE8;
      byte_140332AF2 = 0;
      if ( qword_140332AF8
        || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x2020654Bu), (qword_140332AF8 = PoolWithTag) != 0LL) )
      {
        memset(PoolWithTag, 0, v5);
      }
      if ( qword_140332B00 || (qword_140332B00 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x2020654Bu)) != 0LL )
        memset(qword_140332B00, 0, 0x58uLL);
    }
    else
    {
      if ( (KeFeatureBits & 0x40) != 0
        && (qword_140332AE8 & 0x1FF) != 0
        && (((unsigned __int64)KiMtrrInfo >> 11) & 1) == 0
        && (CurrentPrcb->CpuVendor != 1 || (_BYTE)KiMtrrInfo != 6)
        && (_BYTE)KdDebuggerEnabled )
      {
        DbgPrintEx(0x65u, 0, "Caching is disabled by incorrect MTRR settings.\n");
        __debugbreak();
      }
      v2 = 0;
    }
  }
  v6 = qword_140332AF8;
  if ( qword_140332AF8 && qword_140332B00 )
  {
    v7 = __readmsr(0xFEu);
    v8 = v7;
    if ( (v7 & 0x400) != 0 && (KeFeatureBits & 0x40) == 0 )
      v8 = v7 & 0xFFFFFFFFFFFFFBFFuLL;
    if ( v8 != qword_140332AE8 )
      KeBugCheckEx(0x3Eu, 0x40uLL, 0LL, 0LL, 0LL);
    if ( __readmsr(0x2FFu) != KiMtrrInfo )
    {
      DbgPrintEx(0x65u, 0, "KiInitializeMTRR: MTRR_MSR_DEFAULT is not consistent between processors.\n");
      v6 = qword_140332AF8;
    }
  }
  else
  {
    v2 = 0;
    LOBYTE(v8) = 0;
  }
  if ( v2 )
  {
    if ( !KeGetPcr()->Prcb.Number )
    {
      if ( qword_140332B00 )
        KiReadFixedMtrr(qword_140332B00);
      v9 = (unsigned __int8)v8;
      v10 = 0;
      if ( (_BYTE)v8 )
      {
        v11 = 513;
        do
        {
          v12 = __readmsr(v11 - 1);
          v13 = __readmsr(v11);
          v14 = v13 & KiMtrrMaskMask;
          v17 = v12 & KiMtrrMaskBase;
          if ( (v13 & 0x800) != 0 )
          {
            v15 = KiMaskToLength(v14);
            if ( ((v14 + v15) & ~(1LL << KiMtrrMaxRangeShift)) != 0 )
            {
              DbgPrintEx(0x65u, 0, "KiInitializeMTRR: Found non-contiguous MTRR mask!\n");
              v2 = 0;
            }
            if ( (unsigned __int64)(v15 + v17) > 0x100000 || (KiMtrrInfo & 0x400) == 0 )
            {
              *((_QWORD *)qword_140332AF8 + 2 * (unsigned __int8)byte_140332AF2) = v12;
              *((_QWORD *)qword_140332AF8 + 2 * (unsigned __int8)byte_140332AF2++ + 1) = v13;
            }
          }
          ++v10;
          v11 += 2;
        }
        while ( v10 < v9 );
        v1 = a1;
      }
    }
    if ( v2 )
    {
      if ( v1 )
      {
        byte_140332AF0 = 1;
        if ( KeGetCurrentIrql() < 2u )
        {
          MmLockPagableSectionByHandle(ExPageLockHandle);
          KeRestoreMtrrBroadcast();
          MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
        }
      }
      return;
    }
    v6 = qword_140332AF8;
  }
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    qword_140332AF8 = 0LL;
  }
  if ( qword_140332B00 )
  {
    ExFreePoolWithTag(qword_140332B00, 0);
    qword_140332B00 = 0LL;
  }
}
