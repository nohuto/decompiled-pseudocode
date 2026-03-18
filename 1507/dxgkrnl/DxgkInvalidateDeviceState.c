/*
 * XREFs of DxgkInvalidateDeviceState @ 0x1C0028564
 * Callers:
 *     ?DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0125B50 (-DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C0127350 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 */

void __fastcall DxgkInvalidateDeviceState(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  struct _DEVICE_OBJECT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v1 + 451) )
    DpiCheckForOutstandingD3Requests(v1);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
  v2 = *(_DWORD *)(v1 + 236);
  if ( v2 == 2 || *(_DWORD *)(v1 + 240) == 2 && ((v2 - 3) & 0xFFFFFFFC) == 0 && v2 != 4 )
  {
    v3 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    *(_BYTE *)(v1 + 232) = 1;
    IoInvalidateDeviceState(v3);
  }
  if ( *(_BYTE *)(v1 + 451) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 64LL) + 2680LL));
  ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
  KeLeaveCriticalRegion();
}
