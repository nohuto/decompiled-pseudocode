/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002F0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005F50 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140006230 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14002A034 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXE_K1@Z @ 0x14003E2F4 (-AEWMILOG_PERFORMANCE@@YAXKPEAXE_K1@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::Initialize(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        int a4)
{
  int v8; // ebx
  __int64 v9; // r9
  _UNKNOWN **v10; // rcx
  void *v11; // rdx
  unsigned int v12; // ecx
  unsigned __int64 v13; // r9
  unsigned __int64 v15; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+38h] [rbp-30h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  *((_DWORD *)this + 54) = a4;
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 33);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_0d6648d1aabe8b1385a8c93db05d5db0_Traceguids);
  }
  v8 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( v8 == -2005139389 )
  {
    v8 = -2005139370;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_26;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_0d6648d1aabe8b1385a8c93db05d5db0_Traceguids);
  }
  if ( v8 < 0
    || (v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
               *((_QWORD *)this + 28),
               &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
               (char *)this + 424),
        v8 < 0)
    || (v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
               *((_QWORD *)this + 28),
               &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
               (char *)this + 432),
        v8 < 0)
    || (v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
               *((_QWORD *)this + 28),
               &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
               (char *)this + 440),
        v8 < 0)
    || (v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 28))(
               *((_QWORD *)this + 28),
               &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
               (char *)this + 448),
        v8 < 0) )
  {
LABEL_26:
    CSystemAudioDeviceSharedBase::Cleanup(this);
    goto LABEL_27;
  }
  v9 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)a2 + 8) = v9;
  if ( !v9 )
    goto LABEL_20;
  v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    goto LABEL_25;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_0d6648d1aabe8b1385a8c93db05d5db0_Traceguids, v9);
LABEL_20:
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x200) != 0 && *((_BYTE *)v10 + 25) >= 4u )
    WPP_SF_((__int64)v10[2], 0xDu, (__int64)&WPP_0d6648d1aabe8b1385a8c93db05d5db0_Traceguids);
LABEL_25:
  v8 = CSystemAudioDeviceSharedBase::Initialize(this, a2, a3, a4);
  if ( v8 < 0 )
    goto LABEL_26;
LABEL_27:
  AEWMILOG_PERFORMANCE(v12, v11, 0xAu, v13, v15);
  if ( v8 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_0d6648d1aabe8b1385a8c93db05d5db0_Traceguids, v8);
  }
  PublishDeviceGraphWnfState();
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
