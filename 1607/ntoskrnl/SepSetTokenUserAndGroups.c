/*
 * XREFs of SepSetTokenUserAndGroups @ 0x140693200
 * Callers:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SepDuplicateSid @ 0x1404B4434 (SepDuplicateSid.c)
 *     SepCompareSidValuesBlocks @ 0x140692D8C (SepCompareSidValuesBlocks.c)
 *     SepCreateSidValuesBlock @ 0x140692E2C (SepCreateSidValuesBlock.c)
 *     SepDereferenceSidValuesBlock @ 0x140693044 (SepDereferenceSidValuesBlock.c)
 *     SepLogTokenSidManagement @ 0x140695010 (SepLogTokenSidManagement.c)
 */

__int64 __fastcall SepSetTokenUserAndGroups(__int64 a1, unsigned __int8 **a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  char v11; // r15
  __int64 result; // rax
  unsigned int v13; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v15; // rbp
  _BYTE *v16; // rax
  _BYTE *v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  PVOID v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rsi
  char v26; // al
  __int64 v27; // r10
  __int64 v28; // r10
  unsigned int v29; // r8d
  unsigned __int8 **v30; // r11
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 **v35; // [rsp+88h] [rbp+10h]

  v35 = a2;
  v5 = *(_DWORD *)(a1 + 208);
  v6 = -1;
  P = 0LL;
  v33[0] = 0LL;
  v11 = 0;
  if ( v5 != -1 )
  {
    v6 = v5 - 1;
    result = SepDuplicateSid(*(unsigned __int8 **)(a4 + 16LL * (unsigned int)(v5 - 1)), v33);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = v33[0];
  }
  result = SepCreateSidValuesBlock(&P, a2, a3, a4, a5, v6);
  v13 = result;
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
      goto LABEL_18;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 104LL);
    v16 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v15, 0LL, 0);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      ExfAcquirePushLockExclusiveEx(v15, v16, (ULONG_PTR)v15);
    if ( v17 )
      v17[26] |= 1u;
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)P + 1) <= 1 )
        __fastfail(0xEu);
      v11 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) = P;
    }
    v18 = *(_QWORD *)(a1 + 216);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v18 + 104));
    KeAbPostRelease(v18 + 104);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
    if ( !v11 )
    {
LABEL_18:
      v23 = P;
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
      v26 = SepCompareSidValuesBlocks((__int64)P, v25);
      LODWORD(v24) = v25;
      if ( v26 )
      {
        SepLogTokenSidManagement(2, (_DWORD)v23, v25, a1, 0LL);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
        SepDereferenceSidValuesBlock((volatile signed __int64 *)P, a1, 0LL);
        goto LABEL_24;
      }
      v22 = 1;
    }
    else
    {
      v22 = 0;
      v23 = P;
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
    }
    SepLogTokenSidManagement(v22, (_DWORD)v23, v24, a1, 0LL);
    *(_QWORD *)(a1 + 1128) = v23;
LABEL_24:
    v27 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1160;
    v28 = v27 + 24;
    v29 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      v30 = v35;
      do
      {
        v31 = 16LL * v29;
        if ( v29 == *(_DWORD *)(a1 + 208) )
        {
          *(_QWORD *)(v31 + *(_QWORD *)(a1 + 152)) = *(_QWORD *)(a1 + 1120);
        }
        else
        {
          *(_QWORD *)(v31 + *(_QWORD *)(a1 + 152)) = v28;
          v28 += (4 * *(unsigned __int8 *)(v28 + 1) + 11) & 0xFFFFFFFC;
        }
        v32 = *(_QWORD *)(a1 + 152);
        if ( v29 )
          *(_DWORD *)(v32 + v31 + 8) = *(_DWORD *)(a4 + 16LL * (v29 - 1) + 8);
        else
          *(_DWORD *)(v32 + 8) = *((_DWORD *)v30 + 2);
        ++v29;
      }
      while ( v29 < *(_DWORD *)(a1 + 124) );
    }
    return v13;
  }
  return result;
}
