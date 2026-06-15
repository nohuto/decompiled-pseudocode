/*
 * XREFs of ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003E2C0
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003E0E0 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003E33C (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 */

__int64 __fastcall CMuteHardware::Initialize(CMuteHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  signed int MuteControlForEndpoint; // ebx

  v6 = UuidCreate((UUID *)((char *)this + 60));
  MuteControlForEndpoint = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      MuteControlForEndpoint = (unsigned __int16)v6 | 0x80070000;
LABEL_4:
    if ( MuteControlForEndpoint >= 0 )
      return (unsigned int)MuteControlForEndpoint;
    goto LABEL_8;
  }
  MuteControlForEndpoint = CMuteHardware::FindMuteControlForEndpoint(this, a2, a3);
  if ( MuteControlForEndpoint >= 0 )
  {
    MuteControlForEndpoint = CMuteControlBase::Initialize(this, a2);
    goto LABEL_4;
  }
LABEL_8:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x18u,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      MuteControlForEndpoint);
  }
  return (unsigned int)MuteControlForEndpoint;
}
