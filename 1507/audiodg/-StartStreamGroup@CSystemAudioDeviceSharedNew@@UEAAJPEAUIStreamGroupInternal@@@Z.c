/*
 * XREFs of ?StartStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E340
 * Callers:
 *     ?StartStream@CStreamGroup@@UEAAJ_K@Z @ 0x140011CC0 (-StartStream@CStreamGroup@@UEAAJ_K@Z.c)
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z @ 0x14000E020 (-SetGraphState@CSystemAudioDeviceSharedNew@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsLoopback@CStreamGroup@@UEAA_NXZ @ 0x140011780 (-IsLoopback@CStreamGroup@@UEAA_NXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::StartStreamGroup(
        CSystemAudioDeviceSharedNew *this,
        struct IStreamGroupInternal *a2)
{
  unsigned int v2; // edi
  bool (__fastcall *v5)(CStreamGroup *__hidden); // rbp
  bool IsLoopback; // al
  int v7; // edx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v5 = *(bool (__fastcall **)(CStreamGroup *__hidden))(*(_QWORD *)a2 + 32LL);
  if ( v5 == CStreamGroup::IsLoopback )
    IsLoopback = CStreamGroup::IsLoopback(a2);
  else
    IsLoopback = v5(a2);
  if ( !IsLoopback || *((_DWORD *)this + 26) )
  {
    v11 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 104);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    ++*((_DWORD *)this + 25);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        22LL,
        &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
        *((unsigned int *)this + 25));
    }
    if ( *((_DWORD *)this + 25) == 1 )
    {
      v7 = 3;
      if ( *((_DWORD *)this + 22) )
        v7 = 2;
      v8 = CSystemAudioDeviceSharedNew::SetGraphState((__int64)this - 280, v7);
      v2 = v8;
      if ( v8 < 0
        && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          23LL,
          &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
          (unsigned int)v8);
      }
    }
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      24LL,
      &WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
      a2);
  }
  return v2;
}
