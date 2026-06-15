/*
 * XREFs of ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800419C0
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180043950 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180041AA0 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180041E10 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeHardware::Initialize(CVolumeHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  signed int VolumeControlForEndpoint; // ebx
  TraceLoggingHProvider v8; // rcx

  v6 = UuidCreate((UUID *)((char *)this + 104));
  VolumeControlForEndpoint = v6;
  if ( v6 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( v6 > 0 )
      VolumeControlForEndpoint = (unsigned __int16)v6 | 0x80070000;
LABEL_8:
    if ( VolumeControlForEndpoint >= 0 )
      return (unsigned int)VolumeControlForEndpoint;
    goto LABEL_15;
  }
  VolumeControlForEndpoint = CVolumeHardware::FindVolumeControlForEndpoint(this, a2, a3);
  if ( VolumeControlForEndpoint >= 0 )
  {
    VolumeControlForEndpoint = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 12) + 24LL))(
                                 *((_QWORD *)this + 12),
                                 (char *)this + 124);
    if ( VolumeControlForEndpoint >= 0 )
    {
      VolumeControlForEndpoint = CVolumeControlBase::Initialize(this, a2);
      if ( VolumeControlForEndpoint >= 0 )
      {
        v8 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        {
          goto LABEL_8;
        }
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 57LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, this);
      }
      v8 = WPP_GLOBAL_Control;
      goto LABEL_8;
    }
  }
  v8 = WPP_GLOBAL_Control;
LABEL_15:
  if ( v8 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v8 + 7) & 0x10000) != 0
    && *((_BYTE *)v8 + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)v8 + 2),
      0x3Au,
      (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
      VolumeControlForEndpoint);
  }
  return (unsigned int)VolumeControlForEndpoint;
}
