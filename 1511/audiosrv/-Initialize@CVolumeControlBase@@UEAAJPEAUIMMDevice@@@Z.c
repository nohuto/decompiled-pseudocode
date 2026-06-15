/*
 * XREFs of ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180041E10
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800419C0 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18006D620 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800416D0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::Initialize(CVolumeControlBase *this, struct IUnknown *a2)
{
  int v4; // esi
  struct IUnknown *v5; // rbx
  __int64 (__fastcall *v6)(CVolumeHardware *); // rbx
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
    || ((v6 = *(__int64 (__fastcall **)(CVolumeHardware *))(*(_QWORD *)this + 224LL), v6 != CVolumeHardware::GetLevelData)
      ? (LevelData = v6(this))
      : (LevelData = CVolumeHardware::GetLevelData(this)),
        v4 = LevelData,
        LevelData < 0) )
  {
LABEL_14:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v4);
    }
  }
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  return (unsigned int)v4;
}
