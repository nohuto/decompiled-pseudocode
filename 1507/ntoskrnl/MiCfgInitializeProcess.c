/*
 * XREFs of MiCfgInitializeProcess @ 0x14046549C
 * Callers:
 *     MiMapProcessExecutable @ 0x1404651F4 (MiMapProcessExecutable.c)
 * Callees:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiReferenceVad @ 0x1400896D4 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiMapCfgBitMapSection @ 0x140463740 (MiMapCfgBitMapSection.c)
 *     MiReferenceCfgVad @ 0x1404637C0 (MiReferenceCfgVad.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r14d
  _QWORD *v7; // rax
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 772) & 0x10) == 0 )
    return 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0x20000000000LL;
  if ( *(_QWORD *)(a1 + 1144) <= 0x100000000uLL )
  {
    if ( !*(_QWORD *)(a1 + 1064) )
      return 3221225595LL;
    v16 = qword_14034EB30 - 0x20000000000LL;
  }
  result = MiMapCfgBitMapSection(a1, qword_14034E998, (__int64)&v18, (int)&v16, (__int64)&v17);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad((__int64)CurrentThread, v16, 0);
    if ( *(_QWORD *)(a1 + 1064) )
    {
      v18 = 0LL;
      v16 = 0LL;
      v17 = 0x4000000LL;
      result = MiMapCfgBitMapSection(a1, qword_14034E988, (__int64)&v18, (int)&v16, (__int64)&v17);
      if ( (int)result < 0 )
        return result;
      MiReferenceCfgVad((__int64)CurrentThread, v16, 1);
    }
    v6 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v4, v5);
    v7 = *(_QWORD **)(a1 + 1544);
    v8 = 0LL;
    while ( v7 )
    {
      v8 = (unsigned __int64)v7;
      v7 = (_QWORD *)*v7;
    }
    while ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 48) & 7) == 2 )
      {
        MiReferenceVad(v8);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, v8, v10, v11);
        v6 = MiCommitVadCfgBits(v8, 0LL, 0LL);
        MiUnlockAndDereferenceVad((char *)v8);
        if ( v6 < 0 )
          return (unsigned int)v6;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v12, v13);
      }
      v14 = *(_QWORD **)(v8 + 8);
      v15 = v8;
      if ( v14 )
      {
        v9 = (_QWORD *)*v14;
        v8 = *(_QWORD *)(v8 + 8);
        while ( v9 )
        {
          v8 = (unsigned __int64)v9;
          v9 = (_QWORD *)*v9;
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v8 || *(_QWORD *)v8 == v15 )
            break;
          v15 = v8;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    return (unsigned int)v6;
  }
  return result;
}
