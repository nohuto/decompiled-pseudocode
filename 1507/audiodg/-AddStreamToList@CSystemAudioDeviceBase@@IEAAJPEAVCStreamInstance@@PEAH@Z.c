/*
 * XREFs of ?AddStreamToList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z @ 0x1400298C8
 * Callers:
 *     ?CreateStream@CSystemAudioDeviceShared@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002C340 (-CreateStream@CSystemAudioDeviceShared@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVIC.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x1400264C0 (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceBase::AddStreamToList(
        CSystemAudioDeviceBase *this,
        struct CStreamInstance *a2,
        int *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  __int64 *v6; // rcx
  int v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+34h] [rbp-24h] BYREF
  int v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  struct CStreamInstance *v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  v11 = -2LL;
  v3 = 0;
  try
  {
    v4 = *((_DWORD *)a2 + 8);
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          v8 = -2147024809;
          throw (long *)&v8;
        }
        v6 = (__int64 *)((char *)this + 128);
      }
      else
      {
        v6 = (__int64 *)((char *)this + 80);
      }
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead(v6, (__int64 *)&v12, (__int64)a3);
    }
    else
    {
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead(
        (__int64 *)this + 4,
        (__int64 *)&v12,
        (__int64)a3);
    }
  }
  catch ( ATL::CAtlException v9 )
  {
    LODWORD(v12) = v9;
    goto LABEL_10;
  }
  catch ( long v10 )
  {
    LODWORD(v12) = v10;
LABEL_10:
    v3 = (unsigned int)v12;
    if ( (int)v12 < 0
      && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_Ds(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xCu,
        (__int64)&WPP_ca42ec4cb178d74a7f1996bdcf4a7a5d_Traceguids,
        (int)v12,
        (__int64)"CSystemAudioDeviceBase::AddStreamToList");
    }
  }
  return v3;
}
