/*
 * XREFs of ?DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002C520
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140029858 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?FindStreamInstance@CSystemAudioDeviceBase@@QEAAPEAVCStreamInstance@@_K@Z @ 0x1400299F4 (-FindStreamInstance@CSystemAudioDeviceBase@@QEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?RemoveStreamFromList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z @ 0x140029C50 (-RemoveStreamFromList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::DestroyStream(CSystemAudioDeviceShared *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  struct CStreamInstance *StreamInstance; // rax
  struct CStreamInstance *v6; // rbp
  int v7; // ebx
  int v8; // ebx
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x16u,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
  }
  StreamInstance = CSystemAudioDeviceBase::FindStreamInstance(this, a2);
  v6 = StreamInstance;
  if ( StreamInstance )
  {
    if ( !*((_DWORD *)StreamInstance + 8) )
    {
      if ( *((_DWORD *)StreamInstance + 9) )
      {
        --*((_DWORD *)this + 95);
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0x17u,
            (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
            *((_DWORD *)this + 95));
        }
      }
    }
    if ( *((_DWORD *)v6 + 8) == 1 )
    {
      if ( *((_DWORD *)v6 + 9) )
      {
        --*((_DWORD *)this + 96);
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0x18u,
            (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
            *((_DWORD *)this + 96));
        }
      }
    }
    if ( *((_DWORD *)v6 + 8) == 2 && *((_DWORD *)v6 + 9) )
      --*((_DWORD *)this + 97);
    v7 = CSystemAudioDeviceBase::RemoveStreamFromList(this, v6, &v10);
    if ( v7 >= 0 )
    {
      if ( v10 && *((_DWORD *)this + 94) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0x19u,
            (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
        }
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 96LL))(*((_QWORD *)this + 45));
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0x1Au,
            (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
        }
        *((_DWORD *)this + 94) = v8 < 0;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x1Bu,
          (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 45) + 56LL))(*((_QWORD *)this + 45), a2);
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          0x1Cu,
          (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
      }
    }
    CStreamInstance::`scalar deleting destructor'(v6);
  }
  else
  {
    v7 = -2005139430;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x1Du,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids);
  }
  LeaveCriticalSection(v2);
  if ( v7 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x1Eu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v7,
      (__int64)"CSystemAudioDeviceShared::DestroyStream");
  }
  PublishDeviceGraphWnfState();
  return (unsigned int)v7;
}
