/*
 * XREFs of ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C015EA8C
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C015EB74 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C015E9FC (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rbx
  bool v3; // r14
  bool v4; // si
  struct DXGALLOCATION *v5; // rdi
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v7, this + 20);
  v2 = this[7];
  v3 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails);
  while ( v2 )
  {
    v4 = (*((_DWORD *)v2 + 1) & 1) == 0 || (*(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) & 2) == 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct _KTHREAD *)((char *)v2 + 80));
    if ( v3 )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    v5 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 3);
    while ( v5 )
    {
      DXGDEVICE::ReportAllocationState((DXGDEVICE *)this, v5, v4);
      v5 = (struct DXGALLOCATION *)*((_QWORD *)v5 + 8);
      if ( (*((_DWORD *)v2 + 1) & 1) != 0 )
        *(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) |= 2u;
    }
    v2 = (struct _KTHREAD *)*((_QWORD *)v2 + 5);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
