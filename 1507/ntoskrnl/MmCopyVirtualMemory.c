/*
 * XREFs of MmCopyVirtualMemory @ 0x1404BD870
 * Callers:
 *     PsQueryProcessCommandLine @ 0x14012F404 (PsQueryProcessCommandLine.c)
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x1404BD6B0 (MiReadWriteVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     AlpcpCopyRequestData @ 0x14069EDA8 (AlpcpCopyRequestData.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        _KPROCESS *a1,
        char *a2,
        _KPROCESS *a3,
        char *a4,
        SIZE_T Length,
        KPROCESSOR_MODE a6,
        _QWORD *a7)
{
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  SIZE_T v10; // r15
  SIZE_T v11; // r12
  unsigned __int8 v12; // si
  int v13; // esi
  const void *v14; // rdx
  _BYTE *P; // [rsp+38h] [rbp-3D0h]
  char *Src; // [rsp+48h] [rbp-3C0h]
  char *v18; // [rsp+50h] [rbp-3B8h]
  PVOID v19; // [rsp+88h] [rbp-380h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-370h]
  _BYTE v24[56]; // [rsp+D8h] [rbp-330h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+110h] [rbp-2F8h] BYREF
  _BYTE v26[512]; // [rsp+1C0h] [rbp-248h] BYREF

  if ( Length )
  {
    *a7 = 0LL;
    v8 = 0;
    if ( (BYTE2(MiFlags) & 3u) <= 1 && !a1[1].Affinity.Bitmap[12] )
      v8 = 2;
    v9 = (unsigned __int64)a2;
    Src = a2;
    v18 = a4;
    v10 = Length;
    CurrentThread = KeGetCurrentThread();
    P = 0LL;
LABEL_6:
    if ( Length >= 0x200 && (v8 & 2) != 0 )
    {
      v11 = 57344LL;
      if ( Length <= 0xE000 )
        v11 = Length;
    }
    else
    {
      v8 &= ~2u;
      v11 = 0x10000LL;
      if ( Length <= 0x10000 )
        v11 = Length;
      if ( Length <= 0x200 )
      {
        P = v26;
        goto LABEL_11;
      }
      do
      {
        P = ExAllocatePoolWithTag(PagedPool, v11, 0x77526D4Du);
        if ( P )
        {
          v8 |= 1u;
          goto LABEL_11;
        }
        v11 >>= 1;
      }
      while ( v11 > 0x200 );
      P = v26;
    }
LABEL_11:
    while ( v10 )
    {
      if ( v10 < v11 )
        v11 = v10;
      KiStackAttachProcess(a1, 0, (__int64)v24);
      v19 = 0LL;
      if ( a6 && (char *)v9 == a2 && ((unsigned __int64)&a2[Length] > MmUserProbeAddress || &a2[Length] < a2) )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( ((v8 >> 1) & 1) != 0 )
      {
        MemoryDescriptorList.Next = 0LL;
        MemoryDescriptorList.Size = 8 * (((v11 + (v9 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList.MdlFlags = 0;
        MemoryDescriptorList.StartVa = (PVOID)(v9 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList.ByteOffset = v9 & 0xFFF;
        MemoryDescriptorList.ByteCount = v11;
      }
      v12 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
      if ( ((v8 >> 1) & 1) != 0 )
        MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
      else
        memmove(P, Src, v11);
      if ( !v12 )
        CurrentThread->MiscFlags &= ~0x20u;
      v13 = (v8 >> 1) & 1;
      if ( v13 )
      {
        v19 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
        if ( !v19 )
        {
          MmUnlockPages(&MemoryDescriptorList);
          v8 &= ~2u;
          KiUnstackDetachProcess((struct _KTHREAD *)v24, 0);
          v9 = (unsigned __int64)Src;
          goto LABEL_6;
        }
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v24, 0);
      KiStackAttachProcess(a3, 0, (__int64)v24);
      if ( a6 && Src == a2 )
        ProbeForWrite(a4, Length, 1u);
      if ( v13 )
        v14 = v19;
      else
        v14 = P;
      memmove(v18, v14, v11);
      KiUnstackDetachProcess((struct _KTHREAD *)v24, 0);
      if ( v13 )
        MmUnlockPages(&MemoryDescriptorList);
      v10 -= v11;
      v9 = (unsigned __int64)&Src[v11];
      Src += v11;
      v18 += v11;
    }
    if ( (v8 & 1) != 0 )
      ExFreePoolWithTag(P, 0);
    *a7 = Length;
  }
  return 0LL;
}
