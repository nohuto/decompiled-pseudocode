/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x140036380
 * Callers:
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiIsCfgBitMapPageShared @ 0x140036650 (MiIsCfgBitMapPageShared.c)
 *     MiGetControlAreaCfg @ 0x1400367AC (MiGetControlAreaCfg.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiUnlockNestedVad @ 0x1403F4C18 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x1403F4C48 (MiLockNestedVad.c)
 *     MiCopyToCfgBitMap @ 0x1404163B0 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(__int64 a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // r13
  __int64 ControlAreaCfg; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r9
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  volatile signed __int32 *v13; // rsi
  KIRQL v14; // bp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  int IsCfgBitMapPageShared; // eax
  int v18; // edi
  __int64 v19; // rdi
  int v20; // ebp
  KIRQL v21; // al
  unsigned int v23; // r12d
  unsigned int v24; // edi
  unsigned __int64 v25; // [rsp+40h] [rbp-78h]
  unsigned __int64 v26; // [rsp+48h] [rbp-70h]
  _BYTE v27[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v28; // [rsp+58h] [rbp-60h]
  _BYTE v29[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v30; // [rsp+68h] [rbp-50h] BYREF
  int v31; // [rsp+70h] [rbp-48h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaCfg = MiGetControlAreaCfg(**(_QWORD **)(a2 + 72), a2, a3, a1);
  v7 = v6[2];
  v8 = *(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32);
  v9 = *(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32);
  v28 = ControlAreaCfg;
  v9 <<= 12;
  v10 = 2 * ((((v8 + 1) << 12) - v9) >> 4);
  v11 = *v6 + ((2 * (v9 >> 4)) >> 3);
  v25 = v11;
  v12 = v10 >> 3;
  MiLockNestedVad(v7);
  if ( (unsigned int)MiVadDeleted(v7) )
  {
    ((void (*)(void))MiUnlockNestedVad)();
    return 3221225738LL;
  }
  else
  {
    v13 = (volatile signed __int32 *)&Process[1].IdealNode[12];
    v14 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
    v26 = v11 + v12;
    v15 = (v11 + v12) | 0xFFF;
    v30 = 0LL;
    v16 = v11 & 0xFFFFFFFFFFFFF000uLL;
    v31 = 0;
    if ( (v11 & 0xFFFFFFFFFFFFF000uLL) <= (v26 | 0xFFF) )
    {
      do
      {
        IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v16, v7, v14);
        v18 = IsCfgBitMapPageShared;
        if ( IsCfgBitMapPageShared != 1 )
        {
          if ( (unsigned int)(IsCfgBitMapPageShared - 2) > 1 )
          {
            if ( v16 < v11 )
              v23 = v11 - v16;
            else
              v23 = 0;
            if ( v16 + 4096 <= v26 )
            {
              v24 = 4096 - v23;
            }
            else
            {
              v24 = v26 - v16 - v23;
              if ( (_DWORD)v26 - (_DWORD)v16 == v23 )
                break;
            }
            ExReleaseSpinLockShared((PEX_SPIN_LOCK)&Process[1].IdealNode[12], v14);
            v20 = MiCopyToCfgBitMap(v16 + v23, (__int64)&v30, v24, 0);
            if ( v20 < 0 )
              goto LABEL_14;
            v21 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
            v11 = v25;
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&Process[1].IdealNode[12], retaddr);
            }
            else
            {
              _InterlockedAnd(v13, 0xBFFFFFFF);
              _InterlockedDecrement(v13);
            }
            __writecr8(v14);
            if ( v18 == 3 )
            {
              v19 = v16 | 0x1FFFFF;
              if ( (v16 | 0x1FFFFF) > v15 )
                v19 = v15;
            }
            else
            {
              v19 = v16 | 0xFFF;
            }
            v20 = MiSetProtectionOnSection(Process, v7, v16, v19, 2, 0, v27, v29);
            if ( v20 < 0 )
              goto LABEL_14;
            v16 = v19 - 4095;
            v21 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
          }
          v14 = v21;
        }
        v16 += 4096LL;
      }
      while ( v16 <= v15 );
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)&Process[1].IdealNode[12], v14);
    v20 = 0;
LABEL_14:
    MiUnlockNestedVad(v7);
    return (unsigned int)v20;
  }
}
