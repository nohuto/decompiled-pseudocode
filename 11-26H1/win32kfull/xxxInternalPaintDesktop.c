/*
 * XREFs of xxxInternalPaintDesktop @ 0x14024A2B0
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x1401277E8 (xxxDWP_EraseBkgnd.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRealizeDesktop @ 0x1402A52A0 (xxxRealizeDesktop.c)
 *     NtUserPaintDesktop @ 0x1402B8C90 (NtUserPaintDesktop.c)
 * Callees:
 *     GreOffsetClipRgn @ 0x14024A414 (GreOffsetClipRgn.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInternalPaintDesktop(__int64 a1, HDC a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v13 = 0LL;
    v18 = 0LL;
    if ( (unsigned int)GreGetDCOrgEx(a2, &v13, &v18) )
    {
      v16 = DWORD2(v18) - v18;
      v17 = HIDWORD(v18) - DWORD1(v18);
      v15 = 0LL;
      GreLockVisRgn((unsigned int)-(int)v18, (unsigned int)-DWORD1(v18), v6);
      GreSetDCOrg(a2, (unsigned int)v15, HIDWORD(v15), &v15);
      GreOffsetClipRgn(a2);
      GreUnlockVisRgn(v7);
      v14[0] = a1;
      v14[1] = a2;
      v3 = xxxEnumDisplayMonitors(a2, 0LL, &xxxDesktopPaintCallback, v14, 1);
      GreLockVisRgn(v9, v8, v10);
      GreOffsetClipRgn(a2);
      GreSetDCOrg(a2, (unsigned int)v18, DWORD1(v18), &v18);
      GreUnlockVisRgn(v11);
    }
  }
  return v3;
}
