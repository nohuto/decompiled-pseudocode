/*
 * XREFs of ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C0139F18
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006B970 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyOverlay @ 0x1C0148DC0 (DxgkDestroyOverlay.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::DestroyOverlay(DXGDEVICE *this, struct DXGOVERLAY *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct DXGOVERLAY *v5; // rcx
  struct DXGOVERLAY **v6; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 3268LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *(struct DXGOVERLAY **)a2;
  v6 = (struct DXGOVERLAY **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGOVERLAY **)(*(_QWORD *)a2 + 8LL) != a2 || *v6 != a2 )
    __fastfail(3u);
  *v6 = v5;
  *((_QWORD *)v5 + 1) = v6;
  DXGOVERLAY::`scalar deleting destructor'(a2);
}
