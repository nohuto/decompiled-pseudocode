/*
 * XREFs of ?GetAudioResourcePriority@CWindowsPolicyManager@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHHPEAK@Z @ 0x180021E50
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetAudioResourcePriority(
        CWindowsPolicyManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int *a6)
{
  int v6; // edx
  int v7; // eax

  v6 = 0;
  v7 = 1;
  if ( a3 == 1 )
    goto LABEL_9;
  if ( a3 != 2 )
  {
    v7 = 3;
    if ( a3 == 3 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    if ( a3 != 7 )
    {
      if ( a3 > 9 && a3 <= 0xB )
      {
LABEL_9:
        v7 = 2;
        goto LABEL_7;
      }
      v7 = 4;
    }
  }
LABEL_7:
  LOBYTE(v6) = a5 != 0;
  *a6 = (a4 == 0) + 2 * (v7 + 4 * v6);
  return 0LL;
}
