/*
 * XREFs of ?WaitUntilAllocationsNotBusy@DXGDEVICE@@QEAAXIPEAVDXGRESOURCE@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01528F8
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall DXGDEVICE::WaitUntilAllocationsNotBusy(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGRESOURCE *a3,
        struct DXGALLOCATION **a4)
{
  __int64 i; // rbx
  __int64 v8; // rbx
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( a3 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGRESOURCE *)((char *)a3 + 80));
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    for ( i = *((_QWORD *)a3 + 3); i; i = *(_QWORD *)(i + 64) )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL)
                                                                          + 8LL)
                                                              + 608LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
        *(_QWORD *)(i + 24),
        0LL,
        4LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  }
  else if ( a2 )
  {
    v8 = a2;
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL)
                                                                          + 8LL)
                                                              + 608LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
        *((_QWORD *)*a4++ + 3),
        0LL,
        4LL);
      --v8;
    }
    while ( v8 );
  }
}
