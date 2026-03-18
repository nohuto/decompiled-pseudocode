/*
 * XREFs of ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0055758
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C000E2D0 (-VidMmMapGpuVirtualAddress@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@.c)
 *     ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C0055668 (-VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0055894 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        char a5,
        unsigned int a6)
{
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // rax
  __int64 v10; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // [rsp+68h] [rbp+20h]

  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  if ( (*(_BYTE *)&Value & 8) != 0 && (*(_BYTE *)&Value & 7) != 0 )
  {
    v10 = WdLogNewEntry5_WdWarning(this, a2, a3);
LABEL_4:
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  v12 = *(_BYTE *)&Value & 0xC;
  if ( v12 )
  {
    if ( a3 )
    {
      v10 = WdLogNewEntry5_WdWarning(this, a2, a3);
      *(_QWORD *)(v10 + 24) = 17853LL;
      goto LABEL_4;
    }
  }
  else if ( a3 )
  {
    goto LABEL_11;
  }
  if ( !v12 )
  {
    v10 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v10 + 24) = 17859LL;
    goto LABEL_4;
  }
LABEL_11:
  if ( !a2 )
  {
    if ( a6 == -1 )
    {
      v13 = 0;
      if ( *((_DWORD *)this + 1604) )
      {
        while ( 1 )
        {
          v16 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
                  this,
                  (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 64LL) + 152LL * v13),
                  a3,
                  a4,
                  0);
          if ( v16 < 0 )
            break;
          ++v13;
          a4->BaseAddress = a4->VirtualAddress;
          if ( v13 >= *((_DWORD *)this + 1604) )
            return (unsigned int)v16;
        }
        v19 = WdLogNewEntry5_WdAssertion(v15, v14, v17, v18);
        *(_QWORD *)(v19 + 24) = v13;
        goto LABEL_21;
      }
      return v24;
    }
    else
    {
      v16 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
              this,
              (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 64LL) + 152LL * a6),
              a3,
              a4,
              0);
      if ( v16 < 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
        *(_QWORD *)(v19 + 24) = a6;
LABEL_21:
        WdLogEvent5_WdAssertion(v19);
      }
    }
    return (unsigned int)v16;
  }
  return VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(this, a2, a3, a4, a5);
}
