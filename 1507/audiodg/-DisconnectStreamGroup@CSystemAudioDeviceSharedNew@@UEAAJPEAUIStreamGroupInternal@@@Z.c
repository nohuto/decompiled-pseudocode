/*
 * XREFs of ?DisconnectStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E160
 * Callers:
 *     ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x140011830 (-DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z @ 0x14000E020 (-SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsActive@CStreamGroup@@UEAA_NXZ @ 0x140012CD0 (-IsActive@CStreamGroup@@UEAA_NXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::DisconnectStreamGroup(
        CSystemAudioDeviceSharedNew *this,
        struct IStreamGroupInternal *a2)
{
  bool (__fastcall *v4)(CStreamGroup *__hidden); // rbx
  bool IsActive; // al
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 104);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *(bool (__fastcall **)(CStreamGroup *__hidden))(*(_QWORD *)a2 + 24LL);
  if ( v4 == CStreamGroup::IsActive )
    IsActive = CStreamGroup::IsActive(a2);
  else
    IsActive = v4(a2);
  if ( IsActive )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedNew *, struct IStreamGroupInternal *))(*(_QWORD *)this + 80LL))(
      this,
      a2);
  --*((_DWORD *)this + 24);
  v6 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      28LL,
      &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
      *((unsigned int *)this + 24));
    v6 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 24) || !*((_DWORD *)this + 22) )
  {
    v8 = 0;
  }
  else
  {
    v7 = CSystemAudioDeviceSharedNew::SetGraphState((__int64)this - 280, 0);
    v6 = *(_QWORD *)&WPP_GLOBAL_Control;
    v8 = v7;
  }
  if ( v8 < 0
    && (unsigned int *)v6 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v6 + 28) & 0x200) != 0
    && *(_BYTE *)(v6 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v6 + 16), 29LL, &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids, (unsigned int)v8);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
