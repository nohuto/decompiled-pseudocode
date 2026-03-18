/*
 * XREFs of ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C012C9AC
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C0073AE8 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C012E524 (DxgkDestroyClientAllocation.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C01358B0 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0091FB0 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C012C900 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyClientResource(PERESOURCE *this, struct DXGRESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[10]);
  ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences((ADAPTER_RENDER *)this, (struct _EX_RUNDOWN_REF *)a2, 0LL);
  DXGDEVICE::DestroyClientAllocations(this, *((struct _EX_RUNDOWN_REF **)a2 + 3));
  v4 = *((_QWORD *)a2 + 5);
  if ( v4 )
    *(_QWORD *)(v4 + 32) = *((_QWORD *)a2 + 4);
  v5 = *((_QWORD *)a2 + 4);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 40) = *((_QWORD *)a2 + 5);
  }
  else if ( this[7] == (PERESOURCE)a2 )
  {
    this[7] = (PERESOURCE)*((_QWORD *)a2 + 5);
  }
  DXGRESOURCE::`scalar deleting destructor'(a2);
}
