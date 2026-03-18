/*
 * XREFs of PhkFirstGlobalValid @ 0x1401BE578
 * Callers:
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1401BE41C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     PhkNextValid @ 0x14003926C (PhkNextValid.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall PhkFirstGlobalValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx

  v2 = (int)a2;
  v4 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42336);
  if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v7) != 2
    && (!IS_USERCRIT_OWNED_AT_ALL(v9, v8)
     || ExIsResourceAcquiredExclusiveLite(v4) != 1 && !ExIsResourceAcquiredSharedLite(v4)) )
  {
    __int2c();
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8 * v2 + 48);
  if ( v10 && (*(_DWORD *)(v10 + 64) & 0x80u) != 0 )
    return PhkNextValid(v10, v10);
  return v10;
}
