/*
 * XREFs of ?ValidateAudioServerCategoryForStreamType@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@K@Z @ 0x180004890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::ValidateAudioServerCategoryForStreamType(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // eax

  v3 = 0;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 && a3 )
      return (unsigned int)-2147024809;
  }
  else
  {
    if ( a3 > 0x12 )
      return (unsigned int)-2147024809;
    v5 = 264969;
    if ( !_bittest(&v5, a3) )
      return (unsigned int)-2147024809;
  }
  return v3;
}
