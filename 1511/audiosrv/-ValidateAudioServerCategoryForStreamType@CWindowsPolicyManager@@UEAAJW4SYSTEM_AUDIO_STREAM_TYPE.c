/*
 * XREFs of ?ValidateAudioServerCategoryForStreamType@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@K@Z @ 0x18001B870
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::ValidateAudioServerCategoryForStreamType(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ecx
  int v4; // edx
  int v6; // eax

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
    v6 = 264969;
    if ( !_bittest(&v6, a3) )
      return (unsigned int)-2147024809;
  }
  return v3;
}
