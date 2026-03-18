/*
 * XREFs of ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0050780
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0011A40 (-VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@.c)
 *     ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C007D528 (-VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0045DC8 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // rax
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // [rsp+68h] [rbp+20h]

  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  if ( (*(_BYTE *)&Value & 8) == 0 || (*(_BYTE *)&Value & 7) == 0 )
  {
    v10 = *(_BYTE *)&Value & 0xC;
    if ( v10 )
    {
      if ( a3 )
      {
        v17 = WdLogNewEntry5_WdWarning(this);
        *(_QWORD *)(v17 + 24) = 18172LL;
        goto LABEL_14;
      }
    }
    else if ( a3 )
    {
      goto LABEL_7;
    }
    if ( !v10 )
    {
      v17 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v17 + 24) = 18178LL;
      goto LABEL_14;
    }
LABEL_7:
    if ( a2 )
      return VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(this, a2, a3, a4, a5);
    if ( a6 == -1 )
    {
      v18 = 0LL;
      if ( !*((_DWORD *)this + 1604) )
        return v24;
      while ( 1 )
      {
        v14 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
                this,
                (struct VIDMM_PAGING_QUEUE *)(a3[1][8] + 160 * v18),
                a3,
                a4,
                0);
        if ( v14 < 0 )
          break;
        v18 = (unsigned int)(v18 + 1);
        a4->BaseAddress = a4->VirtualAddress;
        if ( (unsigned int)v18 >= *((_DWORD *)this + 1604) )
          return (unsigned int)v14;
      }
      v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = (unsigned int)v18;
    }
    else
    {
      v14 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
              this,
              (struct VIDMM_PAGING_QUEUE *)(a3[1][8] + 160LL * a6),
              a3,
              a4,
              0);
      if ( v14 >= 0 )
        return (unsigned int)v14;
      v23 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
      *(_QWORD *)(v23 + 24) = a6;
    }
    WdLogEvent5_WdAssertion(v23);
    return (unsigned int)v14;
  }
  v17 = WdLogNewEntry5_WdWarning(this);
LABEL_14:
  WdLogEvent5_WdWarning(v17);
  return 3221225485LL;
}
