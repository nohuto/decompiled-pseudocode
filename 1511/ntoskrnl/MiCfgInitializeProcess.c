/*
 * XREFs of MiCfgInitializeProcess @ 0x14046372C
 * Callers:
 *     MiMapProcessExecutable @ 0x1404635E8 (MiMapProcessExecutable.c)
 * Callees:
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     MiMapCfgBitMapSection @ 0x1404624A4 (MiMapCfgBitMapSection.c)
 *     MiReferenceCfgVad @ 0x140462520 (MiReferenceCfgVad.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  int v4; // r14d
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h]
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF

  if ( (*(_DWORD *)(a1 + 772) & 0x10) == 0 )
    return 0LL;
  v12 = 0LL;
  v10 = 0LL;
  v11 = 0x20000000000LL;
  if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
  {
    if ( !*(_QWORD *)(a1 + 1064) )
      return 3221225595LL;
    v10 = qword_1402FE680 - 0x20000000000LL;
  }
  result = MiMapCfgBitMapSection(a1, *(__int64 *)&qword_1402FE4D0, (__int64)&v12, (int)&v10);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    MiReferenceCfgVad((__int64)CurrentThread, v10, 0);
    if ( *(_QWORD *)(a1 + 1064) )
    {
      v12 = 0LL;
      v10 = 0LL;
      v11 = 0x4000000LL;
      result = MiMapCfgBitMapSection(a1, *(__int64 *)&qword_1402FE4C0, (__int64)&v12, (int)&v10);
      if ( (int)result < 0 )
        return result;
      MiReferenceCfgVad((__int64)CurrentThread, v10, 1);
    }
    v4 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v5 = *(_QWORD **)(a1 + 1552);
    v6 = 0LL;
    while ( v5 )
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
    }
    while ( v6 )
    {
      if ( (v6[6] & 7) == 2 )
      {
        MiReferenceVad((__int64)v6);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)v6);
        v4 = MiCommitVadCfgBits((__int64)v6, 0LL, 0LL);
        MiUnlockAndDereferenceVad(v6);
        if ( v4 < 0 )
          return (unsigned int)v4;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      }
      v8 = (_QWORD *)v6[1];
      v9 = v6;
      if ( v8 )
      {
        v7 = (_QWORD *)*v8;
        v6 = (_QWORD *)v6[1];
        while ( v7 )
        {
          v6 = v7;
          v7 = (_QWORD *)*v7;
        }
      }
      else
      {
        while ( 1 )
        {
          v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v6 || (_QWORD *)*v6 == v9 )
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
