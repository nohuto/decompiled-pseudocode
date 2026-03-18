/*
 * XREFs of GetRedirectionBitmap @ 0x1400429A0
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x140012004 (_SetLayeredWindowAttributes.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004289C (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     UpdateRedirectedDCE @ 0x14012EAA0 (UpdateRedirectedDCE.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     ChangeWindowBitmapOwner @ 0x1402A4358 (ChangeWindowBitmapOwner.c)
 *     UserRecreateRedirectionBitmap @ 0x1402A4470 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall GetRedirectionBitmap(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // esi
  tagObjLock **v15; // rdi
  __int64 Prop; // rdi
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  char v19; // [rsp+40h] [rbp-10h]
  char v20; // [rsp+48h] [rbp-8h]

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(unsigned __int16 *)(UserSessionState + 41398);
  v19 = 0;
  W32GetUserSessionState(v8, v7);
  v18 = 0LL;
  v20 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v9) == 1 )
  {
    v20 = 1;
    v12 = W32GetUserSessionState(v11, v10);
    v13 = 0LL;
    if ( v5 != v12 + 42480 )
      v13 = v5;
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
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v6, 1LL);
  if ( v19 && v20 )
  {
    if ( (_QWORD)v18 )
      tagObjLock::UnLockExclusive((tagObjLock *)v18);
    v19 = 0;
  }
  if ( Prop )
    return *(_QWORD *)Prop;
  return v3;
}
