/*
 * XREFs of ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00FB1EC
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C016B718 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000CEBC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00D1C00 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C00FB174 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z @ 0x1C00FB39C (-FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C016BC34 (-WriteEdidToRegistry@EDIDCACHE@@QEAAXPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

void __fastcall EDIDCACHE::AddEdid(
        struct DXGFASTMUTEX **this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a5)
{
  bool v9; // si
  struct _LUID v10; // rbx
  int EdidInCache; // eax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v12; // r15d
  EDIDCACHE *v13; // rcx
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v14; // r8d
  unsigned int v15; // esi
  unsigned int v16; // edx
  struct DXGFASTMUTEX **v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v22; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v23[16]; // [rsp+60h] [rbp-10h] BYREF
  int v24; // [rsp+A0h] [rbp+30h] BYREF

  if ( this[76] )
  {
    v24 = 0;
    v20 = -2;
    v9 = (int)DxgkQueryMonitorTypeLockHeld(a2, a3, &v24, 0LL, &v20, 0LL, 0LL, 0LL, 0LL) >= 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, this[76]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    v10 = *(struct _LUID *)((char *)a2 + 268);
    EdidInCache = EDIDCACHE::FindEdidInCache((EDIDCACHE *)this, v10, a3, a4);
    if ( EdidInCache == -1 )
    {
      v12 = a5;
      if ( !*((_BYTE *)this + 624)
        && a5 == D3DKMDT_MCO_MONITORDESCRIPTOR
        && v9
        && v24 == 1
        && IsInternalVideoOutput(v20) )
      {
        EDIDCACHE::WriteEdidToRegistry(v13, a4, v14);
        if ( (int)EDID_V1_GetPhysicalSize(v19, a4, &v22, &v21) >= 0 )
          EDIDCACHE::SetPhysicalDimensionOfInternalPanel((EDIDCACHE *)this, v22, v21, 0);
      }
      v15 = 0;
      v16 = 0;
      v17 = this;
      while ( *v17 )
      {
        if ( (__int64)*v17 < (__int64)this[19 * v15] )
          v15 = v16;
        ++v16;
        v17 += 19;
        if ( v16 >= 4 )
          goto LABEL_11;
      }
      v15 = v16;
LABEL_11:
      v18 = 19LL * v15;
      this[v18 + 1] = (struct DXGFASTMUTEX *)v10;
      LODWORD(this[v18 + 2]) = a3;
      HIDWORD(this[v18 + 2]) = v12;
      this[v18] = (struct DXGFASTMUTEX *)MEMORY[0xFFFFF78000000014];
      *(_OWORD *)&this[v18 + 3] = *(_OWORD *)a4;
      *(_OWORD *)&this[v18 + 5] = *((_OWORD *)a4 + 1);
      *(_OWORD *)&this[v18 + 7] = *((_OWORD *)a4 + 2);
      *(_OWORD *)&this[v18 + 9] = *((_OWORD *)a4 + 3);
      *(_OWORD *)&this[v18 + 11] = *((_OWORD *)a4 + 4);
      *(_OWORD *)&this[v18 + 13] = *((_OWORD *)a4 + 5);
      *(_OWORD *)&this[v18 + 15] = *((_OWORD *)a4 + 6);
      *(_OWORD *)&this[v18 + 17] = *((_OWORD *)a4 + 7);
    }
    else
    {
      this[19 * EdidInCache] = (struct DXGFASTMUTEX *)MEMORY[0xFFFFF78000000014];
    }
    if ( v23[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  }
}
