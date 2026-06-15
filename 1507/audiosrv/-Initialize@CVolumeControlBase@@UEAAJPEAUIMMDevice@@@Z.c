/*
 * XREFs of ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003E5C0
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003F010 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18006ED40 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003EA40 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::Initialize(CVolumeControlBase *this, struct IUnknown *a2)
{
  int v4; // esi
  struct IUnknown *v5; // rbx
  __int64 (__fastcall *v6)(CVolumeHardware *__hidden); // rbx
  int LevelData; // eax
  struct IUnknown *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))a2->lpVtbl[1].Release)(a2, (char *)this + 16);
  if ( v4 < 0 )
    goto LABEL_14;
  v5 = v9;
  if ( v9 != a2 )
  {
    ATL::AtlComQIPtrAssign(&v9, a2, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v5 = v9;
  }
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v5->lpVtbl[1].QueryInterface)(v5, (char *)this + 24);
  if ( v4 < 0
    || ((v6 = *(__int64 (__fastcall **)(CVolumeHardware *__hidden))(*(_QWORD *)this + 224LL),
         v6 != CVolumeHardware::GetLevelData)
      ? (LevelData = v6(this))
      : (LevelData = CVolumeHardware::GetLevelData(this)),
        v4 = LevelData,
        LevelData < 0) )
  {
LABEL_14:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xCu,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v4);
    }
  }
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  return (unsigned int)v4;
}
