/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x14011E010
 * Callers:
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x14011DF60 (InvalidateWEFCOMPOSITEDDCEs.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x14011D54C (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     UnionRect @ 0x14011F574 (UnionRect.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x14011F6B8 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  bool v10; // al
  struct tagWND *v11; // rcx
  struct tagRECT v12; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v12 = 0LL;
  result = GreGetBounds(v2, &v12, 4LL);
  if ( (_DWORD)result )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    Prop = GetProp(*(_QWORD *)(a1 + 96), *(unsigned __int16 *)(UserSessionState + 41398), 1u);
    v8 = *(_QWORD *)(a1 + 96);
    v9 = *(_QWORD *)(v8 + 40);
    if ( (*(_BYTE *)(v9 + 27) & 0x10) != 0 )
    {
      return UnionRect(Prop + 16, Prop + 16, &v12);
    }
    else
    {
      v10 = IS_USERCRIT_OWNED_EXCLUSIVE(v8, v9);
      v11 = *(struct tagWND **)(a1 + 96);
      if ( v10 )
        return InvalidateWEFCOMPOSITEDWindow(v11, (__m128i *)&v12);
      else
        return PostCOMPOSITEDInvalidateAPC(v11, &v12);
    }
  }
  return result;
}
