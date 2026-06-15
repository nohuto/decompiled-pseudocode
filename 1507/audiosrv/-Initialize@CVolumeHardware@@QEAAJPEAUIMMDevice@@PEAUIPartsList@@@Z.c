/*
 * XREFs of ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003F010
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003E5C0 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003F0F0 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeHardware::Initialize(CVolumeHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  int VolumeControlForEndpoint; // ebx
  __int64 v8; // rcx

  v6 = UuidCreate((UUID *)((char *)this + 104));
  VolumeControlForEndpoint = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
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
      VolumeControlForEndpoint = CVolumeControlBase::Initialize(this, (struct IUnknown *)a2);
      if ( VolumeControlForEndpoint >= 0 )
      {
        v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
        {
          goto LABEL_8;
        }
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          57LL,
          &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
          this);
      }
      v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      goto LABEL_8;
    }
  }
  v8 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_15:
  if ( (struct _GUID *)v8 != &WPP_GLOBAL_Control && (*(_DWORD *)(v8 + 28) & 0x10000) != 0 && *(_BYTE *)(v8 + 25) >= 2u )
    WPP_SF_D(
      *(_QWORD *)(v8 + 16),
      0x3Au,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      VolumeControlForEndpoint);
  return (unsigned int)VolumeControlForEndpoint;
}
