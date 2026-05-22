/*
 * XREFs of ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x18007A42C
 * Callers:
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800787C0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180079690 (-EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details.c)
 *     ?UpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@PEAUISpatialGraphDriverClient@345@PEAUHSTRING__@@PEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x18007A2C0 (-UpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAUISpatialGraphNodeRefer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialInputControllerCollection::TryUpdateControllerNodeReference(
        SpatialInputControllerCollection *this,
        struct SpatialInteractionDevices::SpatialInteractionController *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v5; // rdx
  int updated; // eax
  SpatialInputControllerCollection *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory *v10; // rdx
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2832);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2832));
  updated = SpatialInputControllerCollection::EnsureDisplayWatcher(this, v5);
  v8 = updated;
  if ( updated < 0 )
  {
    v9 = 938LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_9;
  }
  v10 = (struct Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory *)*((_QWORD *)this + 359);
  if ( v10 )
  {
    v11 = (struct Windows::Internal::Holographic::ISpatialGraphDriverClient *)*((_QWORD *)this + 360);
    if ( v11 )
    {
      updated = SpatialInputControllerCollection::UpdateControllerNodeReference(
                  v7,
                  v10,
                  v11,
                  *((HSTRING *)this + 361),
                  a2);
      v8 = updated;
      if ( updated < 0 )
      {
        v9 = 942LL;
        goto LABEL_7;
      }
    }
  }
  v8 = 0;
LABEL_9:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v8;
}
