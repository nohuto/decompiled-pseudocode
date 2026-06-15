/*
 * XREFs of WPP_SF_s @ 0x180069EBC
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003B740 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_s(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v4; // rdx
  const char *v5; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  v5 = "NULL";
  if ( a4 )
    v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, 39LL, v5);
}
