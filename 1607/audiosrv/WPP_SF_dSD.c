/*
 * XREFs of WPP_SF_dSD @ 0x18005FD90
 * Callers:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005E2E8 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dSD(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5)
{
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  int v9; // [rsp+88h] [rbp+20h] BYREF

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
  return EtwTraceMessage(a1, 43LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, 138LL, &v9, 4LL, v7);
}
