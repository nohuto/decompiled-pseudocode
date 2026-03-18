/*
 * XREFs of ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00E7D6C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0146F84 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000AA38 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z @ 0x1C00C36E4 (-FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C00E7CF4 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00E7F40 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0147414 (-WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

void __fastcall EDIDCACHE::AddEdid(
        struct DXGFASTMUTEX **this,
        struct DXGADAPTER *a2,
        int a3,
        const unsigned __int8 *a4,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a5)
{
  struct _LUID v9; // rbx
  int EdidInCache; // eax
  __int64 v11; // rdi
  unsigned int v12; // edx
  struct DXGFASTMUTEX **v13; // r8
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-10h] BYREF

  if ( this[124] )
  {
    v15 = -2;
    DxgkQueryMonitorTypeLockHeld(a2, (__int64)&v15, 0LL, 0LL, 0LL, 0LL);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, this[124]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    v9 = *(struct _LUID *)((char *)a2 + 252);
    EdidInCache = EDIDCACHE::FindEdidInCache((EDIDCACHE *)this, v9, a3, a4);
    if ( EdidInCache == -1 )
    {
      v11 = 0LL;
      v12 = 0;
      v13 = this;
      while ( *v13 )
      {
        if ( (__int64)*v13 < (__int64)this[19 * (unsigned int)v11] )
          v11 = v12;
        ++v12;
        v13 += 19;
        if ( v12 >= 4 )
          goto LABEL_6;
      }
      v11 = v12;
LABEL_6:
      memset(&this[12 * v11 + 76], 0, 0x60uLL);
      v14 = 19 * v11;
      this[v14 + 1] = (struct DXGFASTMUTEX *)v9;
      LODWORD(this[v14 + 2]) = a3;
      HIDWORD(this[v14 + 2]) = a5;
      this[v14] = (struct DXGFASTMUTEX *)MEMORY[0xFFFFF78000000014];
      *(_OWORD *)&this[v14 + 3] = *(_OWORD *)a4;
      *(_OWORD *)&this[v14 + 5] = *((_OWORD *)a4 + 1);
      *(_OWORD *)&this[v14 + 7] = *((_OWORD *)a4 + 2);
      *(_OWORD *)&this[v14 + 9] = *((_OWORD *)a4 + 3);
      *(_OWORD *)&this[v14 + 11] = *((_OWORD *)a4 + 4);
      *(_OWORD *)&this[v14 + 13] = *((_OWORD *)a4 + 5);
      *(_OWORD *)&this[v14 + 15] = *((_OWORD *)a4 + 6);
      *(_OWORD *)&this[v14 + 17] = *((_OWORD *)a4 + 7);
    }
    else
    {
      this[19 * EdidInCache] = (struct DXGFASTMUTEX *)MEMORY[0xFFFFF78000000014];
    }
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
}
