/*
 * XREFs of UpdateDpiMetricsCacheDPISERVERINFO @ 0x14021B858
 * Callers:
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1400CC0D4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 * Callees:
 *     ?ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1402A62E0 (-ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     GetDpiServerInfoForDpi @ 0x1403025B0 (GetDpiServerInfoForDpi.c)
 */

void __fastcall UpdateDpiMetricsCacheDPISERVERINFO(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 i; // rbx
  unsigned int j; // ebx
  __int64 UserSessionState; // rax

  v2 = 5304LL;
  v3 = 16LL;
  v4 = 5304LL;
  do
  {
    a1 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
    *(_DWORD *)(v4 + a1) = 0;
    v4 += 104LL;
    --v3;
  }
  while ( v3 );
  for ( i = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36400); i; i = *(_QWORD *)(i + 368) )
    GetDpiServerInfoForDpi(*(unsigned __int16 *)(i + 272));
  for ( j = 2; j < 0x12; ++j )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
    if ( !*(_DWORD *)(v2 + v6) )
    {
      UserSessionState = W32GetUserSessionState(v6, v5);
      ClearDpiServerInfo((struct tagDPISERVERINFO *)(*(_QWORD *)(UserSessionState + 19904) + 104 * (j + 49LL)));
    }
    v2 += 104LL;
  }
}
