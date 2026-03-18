/*
 * XREFs of ?NotifyLogon@@YAHK@Z @ 0x1C010FA74
 * Callers:
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C010F804 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C010F9B0 (-EndShutdown@@YAXJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NotifyLogon(unsigned int a1)
{
  unsigned int v1; // ebx

  if ( (a1 & 0x10000) != 0 )
  {
    return 0;
  }
  else
  {
    v1 = 1;
    PostWinlogonMessage(1LL, a1);
  }
  return v1;
}
