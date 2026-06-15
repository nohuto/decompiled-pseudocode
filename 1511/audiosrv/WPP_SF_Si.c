/*
 * XREFs of WPP_SF_Si @ 0x18007DE7C
 * Callers:
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x18007DAC4 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Si(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  const wchar_t *v5; // rax

  if ( a4 && *a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( a4 )
  {
    v5 = L"<NULL>";
    if ( *a4 )
      v5 = a4;
  }
  else
  {
    v5 = L"NULL";
  }
  return EtwTraceMessage(a1, 43LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, 73LL, v5);
}
