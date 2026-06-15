/*
 * XREFs of ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140013FC0
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031560 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x140011F68 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall ValidateStreamDescriptor(struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1)
{
  unsigned int v1; // eax
  const struct tWAVEFORMATEX *v2; // rcx
  __int64 result; // rax

  if ( !a1 )
    return 2147500035LL;
  if ( *(_DWORD *)a1 > 2u )
    return 2147942487LL;
  v1 = *((_DWORD *)a1 + 18);
  if ( v1 < 0x12 )
    return 2147942487LL;
  v2 = (const struct tWAVEFORMATEX *)*((_QWORD *)a1 + 10);
  if ( !v2 )
    return 2147500035LL;
  if ( v2->wFormatTag == 0xFFFE && v1 < 0x28 )
    return 2147942487LL;
  result = ValidateWaveFormatEx(v2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
