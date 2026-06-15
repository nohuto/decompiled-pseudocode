/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x140002500
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140004310 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000AE90 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B4B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140012120 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002F734 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002FC94 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003034C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned __int64 a4,
        int a5,
        char **a6)
{
  unsigned __int64 v6; // r14
  unsigned int v7; // ebp
  unsigned __int64 v8; // rbx
  char *v10; // rax
  char *v11; // r10
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  char *v14; // rdi
  _WORD *v15; // rdx
  int v16; // r8d
  __int64 v17; // r9
  __int16 v18; // cx
  unsigned __int64 v19; // r14

  v6 = a4 + 1;
  v7 = 0;
  v8 = a4;
  *a6 = 0LL;
  if ( a4 + 1 >= a4 && (*a6 = 0LL, is_mul_ok(v6, 2uLL)) )
  {
    v10 = (char *)CoTaskMemAlloc(2 * v6);
    *a6 = v10;
    v11 = v10;
    if ( v10 )
    {
      if ( v6 > 0x7FFFFFFF || v8 >= 0x7FFFFFFF )
      {
        if ( v6 )
          *(_WORD *)v10 = 0;
      }
      else
      {
        if ( !a3 )
        {
          a3 = (char *)&unk_140042950;
          v8 = 0LL;
        }
        if ( v6 )
        {
          v12 = v8 - v6;
          v13 = v6;
          v14 = (char *)(a3 - v11);
          v15 = v11;
          v16 = 0;
          v17 = 0LL;
          while ( v12 + v13 )
          {
            v18 = *(_WORD *)((char *)v15 + (_QWORD)v14);
            if ( !v18 )
              break;
            *v15 = v18;
            ++v17;
            ++v15;
            if ( !--v13 )
            {
              --v15;
              v16 = -2147024774;
              --v17;
              break;
            }
          }
          v19 = v6 - v17;
          *v15 = 0;
          if ( v16 >= 0 && v19 > 1 && 2 * v19 > 2 )
            memset_0(&v11[2 * v17 + 2], 0, 2 * v19 - 2);
        }
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v7;
}
