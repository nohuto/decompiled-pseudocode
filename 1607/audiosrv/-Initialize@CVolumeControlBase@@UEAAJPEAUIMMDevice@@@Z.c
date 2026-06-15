/*
 * XREFs of ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180026D30
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800265C4 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180056D40 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800266A0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800276E8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::Initialize(CVolumeControlBase *this, struct IUnknown *a2)
{
  int v4; // ebx
  struct IUnknown *v5; // rcx
  __int64 (__fastcall *v6)(CVolumeHardware *); // rax
  int LevelData; // eax
  int v8; // ecx
  struct IUnknown *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))a2->lpVtbl[1].Release)(a2, (char *)this + 64);
  if ( v4 < 0 )
    goto LABEL_12;
  v5 = v10;
  if ( v10 != a2 )
  {
    ATL::AtlComQIPtrAssign(&v10, a2, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v5 = v10;
  }
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v5->lpVtbl[1].QueryInterface)(v5, (char *)this + 72);
  if ( v4 < 0
    || ((v6 = *(__int64 (__fastcall **)(CVolumeHardware *))(*(_QWORD *)this + 224LL), v6 != CVolumeHardware::GetLevelData)
      ? (LevelData = v6(this))
      : (LevelData = CVolumeHardware::GetLevelData(this)),
        v4 = LevelData,
        v8 = *((_DWORD *)this + 18),
        *((_QWORD *)this + 23) = *((_QWORD *)this + 8),
        *((_DWORD *)this + 48) = v8,
        LevelData < 0) )
  {
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::Initialize", 0x7Fu, v4);
  }
  if ( v10 )
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
  return (unsigned int)v4;
}
