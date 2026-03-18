/*
 * XREFs of UIPISQMStatus @ 0x1C0112F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UIPISQMStatus()
{
  int v0; // eax

  if ( (unsigned int)FastGetProfileDwordW(0LL, 50LL, L"EnableMessageSQM", 0LL, &gfWinMsgSQMIsOptedIn, 0) )
  {
    v0 = gfWinMsgSQMIsOptedIn;
  }
  else
  {
    v0 = 0;
    gfWinMsgSQMIsOptedIn = 0;
  }
  if ( v0 )
    gfWinMsgSQMIsOptedIn = WinSqmIsOptedIn();
  return WinSqmSetDWORD(gSqmSession, 5715LL);
}
