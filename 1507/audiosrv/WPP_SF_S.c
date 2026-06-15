/*
 * XREFs of WPP_SF_s @ 0x18006B1A8
 * Callers:
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003A1E0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids, 39LL, v5);
}
