/*
 * XREFs of WPP_SF_dS @ 0x18005FD0C
 * Callers:
 *     AudioServerInitialize @ 0x18000CF80 (AudioServerInitialize.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18005EF40 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dS(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, const wchar_t *a5)
{
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = a4;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
  }
  v7 = L"NULL";
  if ( a5 )
    v7 = a5;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v9, 4LL, v7);
}
