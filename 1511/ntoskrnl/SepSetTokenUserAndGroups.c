/*
 * XREFs of SepSetTokenUserAndGroups @ 0x140653D98
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepDuplicateSid @ 0x140479564 (SepDuplicateSid.c)
 *     SepCompareSidValuesBlocks @ 0x140653924 (SepCompareSidValuesBlocks.c)
 *     SepCreateSidValuesBlock @ 0x1406539C4 (SepCreateSidValuesBlock.c)
 *     SepDereferenceSidValuesBlock @ 0x140653BDC (SepDereferenceSidValuesBlock.c)
 *     SepLogTokenSidManagement @ 0x1406557E8 (SepLogTokenSidManagement.c)
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
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  int v19; // ecx
  PVOID v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rsi
  char v23; // al
  __int64 v24; // r10
  __int64 v25; // r10
  unsigned int v26; // r8d
  unsigned __int8 **v27; // r11
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 **v32; // [rsp+88h] [rbp+10h]

  v32 = a2;
  v5 = *(_DWORD *)(a1 + 208);
  v6 = -1;
  P = 0LL;
  v30[0] = 0LL;
  v11 = 0;
  if ( v5 != -1 )
  {
    v6 = v5 - 1;
    result = SepDuplicateSid(*(unsigned __int8 **)(a4 + 16LL * (unsigned int)(v5 - 1)), v30);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = v30[0];
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
    v16 = KeAbPreAcquire((ULONG_PTR)v15, 0LL, 0LL);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      ExfAcquirePushLockExclusiveEx(v15, v16, (ULONG_PTR)v15);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v11 )
    {
LABEL_18:
      v20 = P;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
      v23 = SepCompareSidValuesBlocks((__int64)P, v22);
      LODWORD(v21) = v22;
      if ( v23 )
      {
        SepLogTokenSidManagement(2, (_DWORD)v20, v22, a1, 0LL);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
        SepDereferenceSidValuesBlock((volatile signed __int64 *)P, a1, 0LL);
        goto LABEL_24;
      }
      v19 = 1;
    }
    else
    {
      v19 = 0;
      v20 = P;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
    }
    SepLogTokenSidManagement(v19, (_DWORD)v20, v21, a1, 0LL);
    *(_QWORD *)(a1 + 1128) = v20;
LABEL_24:
    v24 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1152;
    v25 = v24 + 24;
    v26 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      v27 = v32;
      do
      {
        v28 = 16LL * v26;
        if ( v26 == *(_DWORD *)(a1 + 208) )
        {
          *(_QWORD *)(v28 + *(_QWORD *)(a1 + 152)) = *(_QWORD *)(a1 + 1120);
        }
        else
        {
          *(_QWORD *)(v28 + *(_QWORD *)(a1 + 152)) = v25;
          v25 += (4 * *(unsigned __int8 *)(v25 + 1) + 11) & 0xFFFFFFFC;
        }
        v29 = *(_QWORD *)(a1 + 152);
        if ( v26 )
          *(_DWORD *)(v29 + v28 + 8) = *(_DWORD *)(a4 + 16LL * (v26 - 1) + 8);
        else
          *(_DWORD *)(v29 + 8) = *((_DWORD *)v27 + 2);
        ++v26;
      }
      while ( v26 < *(_DWORD *)(a1 + 124) );
    }
    return v13;
  }
  return result;
}
