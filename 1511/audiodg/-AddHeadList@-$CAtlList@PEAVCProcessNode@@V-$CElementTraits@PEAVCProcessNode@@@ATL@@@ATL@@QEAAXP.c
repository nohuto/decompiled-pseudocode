/*
 * XREFs of ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000BC90
 * Callers:
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000AE90 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B4B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140012120 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002F734 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002FC94 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003034C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
        __int64 **a1,
        __int64 a2)
{
  __int64 i; // rdi
  __int64 v4; // rsi
  __int64 *v5; // rbp
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rax
  int v11; // r8d
  __int64 *j; // rdx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  for ( i = *(_QWORD *)(a2 + 8); i; *a1 = v6 )
  {
    v4 = i;
    i = *(_QWORD *)(i + 8);
    v5 = *a1;
    if ( !a1[4] )
    {
      v8 = *((unsigned int *)a1 + 10);
      if ( *((_DWORD *)a1 + 10) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x18 )
          goto LABEL_20;
        v9 = 24 * v8;
      }
      else
      {
        v9 = 0LL;
      }
      if ( (unsigned __int64)(-1 - v9) < 8 || (v10 = (__int64 *)malloc(v9 + 8)) == 0LL )
LABEL_20:
        ATL::AtlThrowImpl(-2147024882);
      *v10 = (__int64)a1[3];
      a1[3] = v10;
      v11 = *((_DWORD *)a1 + 10) - 1;
      for ( j = &v10[2 * v11 + 1 + (unsigned int)v11]; v11 >= 0; --v11 )
      {
        *j = (__int64)a1[4];
        a1[4] = j;
        j -= 3;
      }
    }
    v6 = a1[4];
    v7 = (__int64 *)*v6;
    if ( v6 )
      v6[2] = *(_QWORD *)(v4 + 16);
    a1[4] = v7;
    v6[1] = 0LL;
    *v6 = (__int64)v5;
    a1[2] = (__int64 *)((char *)a1[2] + 1);
    if ( *a1 )
      (*a1)[1] = (__int64)v6;
    else
      a1[1] = v6;
  }
}
