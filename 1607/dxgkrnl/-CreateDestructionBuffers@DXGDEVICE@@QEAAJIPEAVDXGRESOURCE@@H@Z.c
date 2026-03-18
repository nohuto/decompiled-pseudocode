/*
 * XREFs of ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1C009ACF4
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateDestructionBuffers(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGRESOURCE *a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  SIZE_T v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  void *v20; // rcx
  _BYTE v21[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 3869LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3 )
  {
    if ( !a4 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGRESOURCE *)((char *)a3 + 80));
      if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
      v10 = *((_QWORD *)a3 + 3);
      while ( v10 )
      {
        v10 = *(_QWORD *)(v10 + 64);
        ++a2;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
    }
    if ( a2 > 0x10 )
    {
      v11 = a2;
      v12 = 8LL * a2;
      if ( !is_mul_ok(a2, 8uLL) )
        v12 = -1LL;
      v15 = operator new(v12, 0x4B677844u, PagedPool);
      if ( !v15 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v16, v17);
        v18[3] = this;
        v18[4] = v11;
        v18[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v18);
        return 3221225495LL;
      }
      if ( !a4 )
      {
        v20 = (void *)*((_QWORD *)a3 + 8);
        if ( v20 )
          operator delete(v20);
      }
      *((_QWORD *)a3 + 8) = v15;
    }
  }
  return 0LL;
}
