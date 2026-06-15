/*
 * XREFs of WPP_SF_s @ 0x180054398
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800303F0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_s(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  const char *v6; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = "NULL";
  if ( a4 )
    v6 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, 32LL, v6, v5, 0LL);
}
