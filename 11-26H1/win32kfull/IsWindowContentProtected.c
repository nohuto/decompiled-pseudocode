/*
 * XREFs of IsWindowContentProtected @ 0x14001475C
 * Callers:
 *     UpdateSprite @ 0x140015F78 (UpdateSprite.c)
 *     CreateSprite @ 0x14014D24C (CreateSprite.c)
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 *     ProtectedContentAccessCheck @ 0x1401F6B6C (ProtectedContentAccessCheck.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edi
  tagObjLock **v15; // rbx
  char Prop; // bl
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  char v19; // [rsp+40h] [rbp-10h]
  char v20; // [rsp+48h] [rbp-8h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(a1 + 144);
  v5 = *(unsigned __int16 *)(UserSessionState + 41400);
  v19 = 0;
  W32GetUserSessionState(v7, v6);
  v18 = 0LL;
  v20 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v9, v8) == 1 )
  {
    v20 = 1;
    v12 = W32GetUserSessionState(v11, v10);
    v13 = 0LL;
    if ( v4 != v12 + 42480 )
      v13 = v4;
    *(_QWORD *)&v18 = v13;
    v14 = 0;
    v15 = (tagObjLock **)&v18;
    do
    {
      if ( *v15 )
        tagObjLock::LockExclusive(*v15);
      ++v14;
      ++v15;
    }
    while ( !v14 );
    v19 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v5, 1LL);
  if ( v19 && v20 && (_QWORD)v18 )
    tagObjLock::UnLockExclusive((tagObjLock *)v18);
  return Prop & 1;
}
