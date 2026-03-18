/*
 * XREFs of ?IsGpuAccessToAllocationsPending@DXGDEVICE@@QEAAHIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01518A0
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::IsGpuAccessToAllocationsPending(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGRESOURCE *a3,
        struct DXGALLOCATION **a4)
{
  __int64 i; // rbx
  unsigned int v10; // ebx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGRESOURCE *)((char *)a3 + 80));
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    for ( i = *((_QWORD *)a3 + 3); ; i = *(_QWORD *)(i + 64) )
    {
      if ( !i )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
        return 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL)
                                                                         + 8LL)
                                                             + 600LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
             *(_QWORD *)(i + 24)) )
      {
        break;
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
    return 1LL;
  }
  v10 = 0;
  if ( a2 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL)
                                                                           + 8LL)
                                                               + 600LL))(
               *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
               *((_QWORD *)*a4 + 3)) )
    {
      ++v10;
      ++a4;
      if ( v10 >= a2 )
        return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
