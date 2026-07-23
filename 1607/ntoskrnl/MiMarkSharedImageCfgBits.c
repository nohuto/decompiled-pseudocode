/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x1400E7910
 * Callers:
 *     MiMarkProcessCfgBits @ 0x1404288E4 (MiMarkProcessCfgBits.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiGetControlAreaCfg @ 0x1400BE21C (MiGetControlAreaCfg.c)
 *     MiIsCfgBitMapPageShared @ 0x1400E7C60 (MiIsCfgBitMapPageShared.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 *     MiUnlockNestedVad @ 0x14050B010 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x14050B040 (MiLockNestedVad.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(__int64 a1, int a2, __int64 a3)
{
  _KPROCESS *Process; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r10
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdi
  __int64 v11; // rbp
  LONG *SharedVm; // rbx
  KIRQL v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbx
  int IsCfgBitMapPageShared; // eax
  int v17; // edi
  unsigned int v18; // esi
  unsigned int v19; // edi
  LONG *v20; // rax
  int v21; // esi
  LONG *v22; // rdi
  volatile LONG *v23; // rcx
  unsigned __int64 v24; // rdi
  LONG *v25; // rax
  unsigned __int64 v26; // [rsp+50h] [rbp-78h]
  __int64 v27[5]; // [rsp+60h] [rbp-68h] BYREF
  int v28; // [rsp+D0h] [rbp+8h] BYREF
  int v29; // [rsp+D8h] [rbp+10h]
  int v30; // [rsp+E0h] [rbp+18h] BYREF
  _KPROCESS *v31; // [rsp+E8h] [rbp+20h]

  v29 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = **(_QWORD **)(a3 + 72);
  v31 = Process;
  MiGetControlAreaCfg(v4);
  v7 = v6[2];
  v8 = *v6
     + ((2
       * (((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 8) & 0xFFFFFFFFFFFFFFFLL)) >> 3);
  v9 = (2
      * (((((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) + 1) << 12)
        - ((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12)) >> 4)) >> 3;
  MiLockNestedVad(v7);
  if ( (*(_DWORD *)(v7 + 48) & 0x80000) != 0 )
  {
    MiUnlockNestedVad(v7);
    return 3221225738LL;
  }
  v11 = (__int64)&Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v13 = ExAcquireSpinLockShared(SharedVm);
  if ( SharedVm[1] )
    _InterlockedExchange(SharedVm + 1, 0);
  v26 = v8 + v9;
  v14 = (v8 + v9) | 0xFFF;
  memset(v27, 0, 24);
  v15 = v8 & 0xFFFFFFFFFFFFF000uLL;
  if ( (v8 & 0xFFFFFFFFFFFFF000uLL) <= v14 )
  {
    while ( 1 )
    {
      IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v15, v7, v13);
      v17 = IsCfgBitMapPageShared;
      if ( IsCfgBitMapPageShared != 1 )
        break;
LABEL_30:
      v15 += 4096LL;
      if ( v15 > v14 )
        goto LABEL_31;
    }
    if ( (unsigned int)(IsCfgBitMapPageShared - 2) <= 1 )
    {
      v23 = &dword_140327CC0;
      if ( (*(_BYTE *)(v11 + 184) & 7) != 2 )
        v23 = (volatile LONG *)(v11 + 192);
      ExReleaseSpinLockSharedFromDpcLevel(v23);
      __writecr8(v13);
      if ( v17 == 3 )
      {
        v24 = v15 | 0x1FFFFF;
        if ( (v15 | 0x1FFFFF) > v14 )
          v24 = v14;
      }
      else
      {
        v24 = v15 | 0xFFF;
      }
      v21 = MiSetProtectionOnSection((__int64)Process, v7, v15, v24, 2u, 0, &v30, &v28);
      if ( v21 < 0 )
        goto LABEL_32;
      v15 = v24 - 4095;
      v22 = &dword_140327CC0;
      if ( (*(_BYTE *)(v11 + 184) & 7) != 2 )
        v22 = (LONG *)(v11 + 192);
      v13 = ExAcquireSpinLockShared(v22);
      if ( !v22[1] )
        goto LABEL_29;
    }
    else
    {
      if ( v15 >= v8 )
        v18 = 0;
      else
        v18 = v8 - v15;
      if ( v15 + 4096 <= v26 )
      {
        v19 = 4096 - v18;
      }
      else
      {
        v19 = v26 - v15 - v18;
        if ( (_DWORD)v26 - (_DWORD)v15 == v18 )
          goto LABEL_31;
      }
      v20 = MiGetSharedVm(v11);
      ExReleaseSpinLockShared(v20, v13);
      v21 = MiCopyToCfgBitMap((void *)(v15 + v18), (v18 + (_DWORD)v15 - (_DWORD)v8) >> 1 << 7, (__int64)v27, v19, 0);
      if ( v21 < 0 )
        goto LABEL_32;
      v22 = MiGetSharedVm(v11);
      v13 = ExAcquireSpinLockShared(v22);
      if ( !v22[1] )
        goto LABEL_29;
    }
    _InterlockedExchange(v22 + 1, 0);
LABEL_29:
    Process = v31;
    goto LABEL_30;
  }
LABEL_31:
  v25 = MiGetSharedVm(v11);
  ExReleaseSpinLockShared(v25, v13);
  v21 = 0;
LABEL_32:
  MiUnlockNestedVad(v7);
  return (unsigned int)v21;
}
