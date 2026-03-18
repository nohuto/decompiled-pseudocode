/*
 * XREFs of ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01414C4
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C018659C (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00DBF78 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01417A0 (-ReadEdidFromRegistry@EDIDCACHE@@QEAAJPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

__int64 __fastcall EDIDCACHE::GetEdidForTarget(
        EDIDCACHE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *const a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a6)
{
  unsigned __int8 *v6; // rdi
  struct DXGFASTMUTEX *v12; // rdx
  unsigned __int8 *v13; // rax
  _QWORD *v14; // rcx
  unsigned int i; // edx
  EDIDCACHE *v16; // rcx
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v17; // rsi
  unsigned int v18; // ebx
  __int64 v19; // rax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v20; // rdx
  _BYTE v21[24]; // [rsp+30h] [rbp-18h] BYREF

  v6 = a5;
  if ( !a5 )
    return 3221225713LL;
  v12 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 124);
  if ( !v12 )
    return 3221225659LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v13 = *(unsigned __int8 **)((char *)a2 + 252);
  v14 = (_QWORD *)((char *)this + 12);
  a5 = v13;
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)v14 - 1) == (_DWORD)v13 && *v14 == __PAIR64__(a3, HIDWORD(a5)) )
    {
      v19 = i;
      v20 = a6;
      *(_OWORD *)v6 = *(_OWORD *)((char *)this + 152 * v19 + 24);
      *((_OWORD *)v6 + 1) = *(_OWORD *)((char *)this + 152 * v19 + 40);
      *((_OWORD *)v6 + 2) = *(_OWORD *)((char *)this + 152 * v19 + 56);
      *((_OWORD *)v6 + 3) = *(_OWORD *)((char *)this + 152 * v19 + 72);
      *((_OWORD *)v6 + 4) = *(_OWORD *)((char *)this + 152 * v19 + 88);
      *((_OWORD *)v6 + 5) = *(_OWORD *)((char *)this + 152 * v19 + 104);
      *((_OWORD *)v6 + 6) = *(_OWORD *)((char *)this + 152 * v19 + 120);
      *((_OWORD *)v6 + 7) = *(_OWORD *)((char *)this + 152 * v19 + 136);
      if ( v20 )
        *v20 = *((enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *)this + 38 * v19 + 5);
      goto LABEL_14;
    }
    v14 += 19;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  LODWORD(a5) = -2;
  if ( (int)DmmGetVideoOutputTechnology(a2, a3, &a5, 0LL) >= 0 )
  {
    if ( a4 )
    {
      if ( (_DWORD)a5 == 0x80000000 )
      {
        v17 = a6;
        if ( (int)EDIDCACHE::ReadEdidFromRegistry(v16, v6, a6) >= 0 )
        {
          EDIDCACHE::AddEdid((struct DXGFASTMUTEX **)this, a2, a3, v6, *v17);
LABEL_14:
          v18 = 0;
          goto LABEL_18;
        }
      }
    }
  }
  v18 = -1073741275;
LABEL_18:
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return v18;
}
