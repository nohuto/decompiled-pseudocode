/*
 * XREFs of MiCfgInitializeProcess @ 0x14046BDEC
 * Callers:
 *     MiMapProcessExecutable @ 0x14046BCB8 (MiMapProcessExecutable.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     MiCommitVadCfgBits @ 0x140428720 (MiCommitVadCfgBits.c)
 *     MiMapCfgBitMapSection @ 0x1404C16AC (MiMapCfgBitMapSection.c)
 *     MiReferenceCfgVad @ 0x1404C1728 (MiReferenceCfgVad.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  int v4; // r14d
  _QWORD *v5; // rax
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp+38h] BYREF
  __int64 v13; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 772) & 0x10) == 0 )
    return 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v12 = 0x20000000000LL;
  if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
  {
    if ( !*(_QWORD *)(a1 + 1064) )
      return 3221225595LL;
    v11 = qword_1403269A0 - 0x20000000000LL;
  }
  result = MiMapCfgBitMapSection(a1, qword_1403267D8, (unsigned int)&v13, (unsigned int)&v11, (__int64)&v12);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad(CurrentThread, v11, 0LL);
    if ( *(_QWORD *)(a1 + 1064) )
    {
      v10 = *(_QWORD *)(a1 + 1152);
      v13 = 0LL;
      v11 = 0LL;
      v12 = (2 * (v10 >> 4)) >> 3;
      result = MiMapCfgBitMapSection(a1, qword_1403267C8, (unsigned int)&v13, (unsigned int)&v11, (__int64)&v12);
      if ( (int)result < 0 )
        return result;
      MiReferenceCfgVad(CurrentThread, v11, 1LL);
    }
    v4 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v5 = *(_QWORD **)(a1 + 1568);
    v6 = 0LL;
    while ( v5 )
    {
      v6 = (unsigned __int64)v5;
      v5 = (_QWORD *)*v5;
    }
    while ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 48) & 7) == 2 )
      {
        MiReferenceVad(v6);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, v6);
        v4 = MiCommitVadCfgBits(v6, 0LL, 0LL);
        MiUnlockAndDereferenceVad((char *)v6);
        if ( v4 < 0 )
          return (unsigned int)v4;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      }
      v8 = *(_QWORD **)(v6 + 8);
      v9 = v6;
      if ( v8 )
      {
        v7 = (_QWORD *)*v8;
        v6 = *(_QWORD *)(v6 + 8);
        while ( v7 )
        {
          v6 = (unsigned __int64)v7;
          v7 = (_QWORD *)*v7;
        }
      }
      else
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(_QWORD *)v6 == v9 )
            break;
          v9 = v6;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    return (unsigned int)v4;
  }
  return result;
}
