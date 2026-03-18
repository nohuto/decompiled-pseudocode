/*
 * XREFs of ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0
 * Callers:
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C000176C (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C000FB08 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C001F8D4 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C007A2FC (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0082554 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00A4EA0 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00A63C0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C00B07B0 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DA6A4 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007305C (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C0073AE8 (--1DXGCONTEXT@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyContext(PERESOURCE *this, struct DXGCONTEXT *a2, PERESOURCE **a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGCONTEXT *v18; // rcx
  struct DXGCONTEXT **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v20 + 24) = 1590LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v21 + 24) = 1591LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this[2]->OwnerTable) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v22 + 24) = 1592LL;
    WdLogEvent5_WdAssertion(v22);
  }
  DXGCONTEXT::DestroyContext(a2, a3);
  v18 = *(struct DXGCONTEXT **)a2;
  v19 = (struct DXGCONTEXT **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGCONTEXT **)(*(_QWORD *)a2 + 8LL) != a2 || *v19 != a2 )
    __fastfail(3u);
  *v19 = v18;
  *((_QWORD *)v18 + 1) = v19;
  DXGCONTEXT::~DXGCONTEXT(a2, v15, v16, v17);
  ExFreePoolWithTag(a2, 0);
}
