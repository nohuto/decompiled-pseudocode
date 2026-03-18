/*
 * XREFs of SepSetTokenUserAndGroups @ 0x1406D5C44
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SepDuplicateSid @ 0x1405448BC (SepDuplicateSid.c)
 *     SepCompareSidValuesBlocks @ 0x1406D57D0 (SepCompareSidValuesBlocks.c)
 *     SepCreateSidValuesBlock @ 0x1406D5870 (SepCreateSidValuesBlock.c)
 *     SepDereferenceSidValuesBlock @ 0x1406D5A88 (SepDereferenceSidValuesBlock.c)
 *     SepLogTokenSidManagement @ 0x1406D7694 (SepLogTokenSidManagement.c)
 */

__int64 __fastcall SepSetTokenUserAndGroups(__int64 a1, unsigned __int8 **a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  char v11; // r15
  __int64 result; // rax
  __int64 v13; // r9
  unsigned int v14; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rsi
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  int v23; // ecx
  PVOID v24; // rbx
  __int64 v25; // r8
  __int64 v26; // rsi
  char v27; // al
  __int64 v28; // r10
  __int64 v29; // r10
  unsigned int v30; // r8d
  unsigned __int8 **v31; // r11
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 **v36; // [rsp+88h] [rbp+10h]

  v36 = a2;
  v5 = *(_DWORD *)(a1 + 208);
  v6 = -1;
  P = 0LL;
  v34[0] = 0LL;
  v11 = 0;
  if ( v5 != -1 )
  {
    v6 = v5 - 1;
    result = SepDuplicateSid(*(unsigned __int8 **)(a4 + 16LL * (unsigned int)(v5 - 1)), v34);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = v34[0];
  }
  result = SepCreateSidValuesBlock(&P, a2, a3, a4, a5, v6);
  v14 = result;
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
      goto LABEL_22;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 104LL);
    v17 = KeAbPreAcquire((ULONG_PTR)v16, 0LL, 0LL, v13);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
      ExfAcquirePushLockExclusiveEx(v16, v17, (ULONG_PTR)v16, v18);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)P + 1) <= 1 )
        __fastfail(0xEu);
      v11 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) = P;
    }
    v20 = *(_QWORD *)(a1 + 216);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 104));
    KeAbPostRelease(v20 + 104);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v11 )
    {
LABEL_22:
      v24 = P;
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
      v27 = SepCompareSidValuesBlocks((__int64)P, v26);
      LODWORD(v25) = v26;
      if ( v27 )
      {
        SepLogTokenSidManagement(2, (_DWORD)v24, v26, a1, 0LL);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
        SepDereferenceSidValuesBlock((volatile signed __int64 *)P, a1, 0LL);
        goto LABEL_28;
      }
      v23 = 1;
    }
    else
    {
      v23 = 0;
      v24 = P;
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
    }
    SepLogTokenSidManagement(v23, (_DWORD)v24, v25, a1, 0LL);
    *(_QWORD *)(a1 + 1128) = v24;
LABEL_28:
    v28 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1144;
    v29 = v28 + 24;
    v30 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      v31 = v36;
      do
      {
        v32 = 16LL * v30;
        if ( v30 == *(_DWORD *)(a1 + 208) )
        {
          *(_QWORD *)(v32 + *(_QWORD *)(a1 + 152)) = *(_QWORD *)(a1 + 1120);
        }
        else
        {
          *(_QWORD *)(v32 + *(_QWORD *)(a1 + 152)) = v29;
          v29 += (4 * *(unsigned __int8 *)(v29 + 1) + 11) & 0xFFFFFFFC;
        }
        v33 = *(_QWORD *)(a1 + 152);
        if ( v30 )
          *(_DWORD *)(v32 + v33 + 8) = *(_DWORD *)(a4 + 16LL * (v30 - 1) + 8);
        else
          *(_DWORD *)(v33 + 8) = *((_DWORD *)v31 + 2);
        ++v30;
      }
      while ( v30 < *(_DWORD *)(a1 + 124) );
    }
    return v14;
  }
  return result;
}
