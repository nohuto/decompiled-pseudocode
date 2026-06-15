/*
 * XREFs of ?CreateStream@CSystemAudioDeviceShared@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002C340
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140029858 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?AddStreamToList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z @ 0x1400298C8 (-AddStreamToList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::CreateStream(
        CSystemAudioDeviceShared *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IUnknown *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r13
  char *v9; // r12
  int v10; // ebp
  struct CStreamInstance *v11; // rsi
  unsigned int v12; // eax
  int *v14; // r8

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v9 = 0LL;
  *((_QWORD *)a5 + 5) = 0LL;
  if ( a2 )
  {
    if ( *(_DWORD *)a2 <= 2u )
    {
      v11 = (struct CStreamInstance *)operator new(0x28uLL);
      if ( v11 )
      {
        v12 = *(_DWORD *)a2;
        *(_QWORD *)v11 = 0LL;
        *((_QWORD *)v11 + 1) = 0LL;
        *((_QWORD *)v11 + 2) = 0LL;
        *((_QWORD *)v11 + 3) = this;
        *((_QWORD *)v11 + 4) = v12;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        if ( *((struct IUnknown **)this + 44) != a4 )
          ATL::AtlComPtrAssign((struct IUnknown **)this + 44, a4);
        if ( this )
          v9 = (char *)this + 8;
        v10 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, char *, struct SYSTEM_AUDIO_STREAM *))(**((_QWORD **)this + 45) + 48LL))(
                *((_QWORD *)this + 45),
                a2,
                a3,
                v9,
                a5);
        if ( v10 >= 0 )
        {
          v10 = CSystemAudioDeviceBase::AddStreamToList(this, v11, v14);
          if ( v10 >= 0 )
          {
            *((_QWORD *)v11 + 2) = *((_QWORD *)a5 + 5);
            goto LABEL_14;
          }
        }
      }
      else
      {
        v10 = -2147024882;
      }
      if ( v11 )
        CStreamInstance::`scalar deleting destructor'(v11);
    }
    else
    {
      v10 = -2147024809;
    }
  }
  else
  {
    v10 = -2147467261;
  }
  if ( *((_QWORD *)a5 + 5) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 45) + 56LL))(
      *((_QWORD *)this + 45),
      *((_QWORD *)a5 + 5));
    *((_QWORD *)a5 + 5) = 0LL;
  }
LABEL_14:
  if ( *((_QWORD *)this + 44) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 44, 0LL);
  LeaveCriticalSection(v5);
  if ( v10 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x15u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v10,
      (__int64)"CSystemAudioDeviceShared::CreateStream");
  }
  PublishDeviceGraphWnfState();
  return (unsigned int)v10;
}
