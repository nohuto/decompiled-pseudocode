/*
 * XREFs of ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C015128C
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00B0C30 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C0153078 (DxgkDestroyClientAllocation.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C015D7A8 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0092900 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01511E0 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyClientResource(PERESOURCE *this, struct DXGALLOCATION **a2)
{
  struct DXGALLOCATION *v4; // rcx
  struct DXGALLOCATION *v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[10]);
  ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences((ADAPTER_RENDER *)this, (struct DXGRESOURCE *)a2, 0LL);
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGFASTMUTEX *const)(a2 + 10));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    DXGDEVICE::DestroyClientAllocations(this, a2[3]);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  }
  else
  {
    DXGDEVICE::DestroyClientAllocations(this, a2[3]);
  }
  v4 = a2[5];
  if ( v4 )
    *((_QWORD *)v4 + 4) = a2[4];
  v5 = a2[4];
  if ( v5 )
  {
    *((_QWORD *)v5 + 5) = a2[5];
  }
  else if ( this[7] == (PERESOURCE)a2 )
  {
    this[7] = (PERESOURCE)a2[5];
  }
  DXGRESOURCE::`scalar deleting destructor'((DXGRESOURCE *)a2);
}
