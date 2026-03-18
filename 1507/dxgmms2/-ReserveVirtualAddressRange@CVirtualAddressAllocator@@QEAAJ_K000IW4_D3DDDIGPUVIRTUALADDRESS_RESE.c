/*
 * XREFs of ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0063170
 * Callers:
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0055B58 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C0055D08 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_pqxx @ 0x1C0010794 (Template_pqxx.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C005C988 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005E6AC (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C005E910 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C005FE14 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRange(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE a7,
        UINT64 a8,
        unsigned __int8 a9,
        unsigned __int64 *a10,
        struct VIDMM_MAPPED_VA_RANGE **a11,
        unsigned __int8 a12)
{
  unsigned __int8 v12; // bl
  struct VIDMM_MAPPED_VA_RANGE **v17; // r14
  struct _RTL_AVL_TREE *v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct VIDMM_VAD *v23; // rbx
  unsigned int v24; // edi
  struct _RTL_BALANCED_NODE *v25; // rdi
  struct _RTL_BALANCED_NODE *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // eax
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v30; // rax
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *ReservedVaRange; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // [rsp+20h] [rbp-68h]
  _BYTE v40[32]; // [rsp+50h] [rbp-38h] BYREF
  struct VIDMM_VAD *v41; // [rsp+90h] [rbp+8h] BYREF

  v12 = a12;
  if ( a12 && (*(_DWORD *)(*((_QWORD *)this + 9) + 48LL) & 2) != 0 )
    v12 = *(_BYTE *)(*((_QWORD *)this + 8) + 39953LL) != 0 ? a12 : 0;
  v41 = 0LL;
  v17 = a11;
  if ( a11 )
    *a11 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v40,
    (CVirtualAddressAllocator *)((char *)this + 40));
  v19 = CVirtualAddressAllocator::AllocateVirtualAddressRange(this, v18, a2, a3, a4, a5, a6, &v41, v12);
  v23 = v41;
  v24 = v19;
  if ( v19 < 0 )
  {
LABEL_21:
    v32 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    WdLogEvent5_WdWarning(v32);
LABEL_22:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
    if ( v23 )
      CVirtualAddressAllocator::FreeVirtualAddressRange(
        (struct _KTHREAD **)this,
        *((struct _RTL_BALANCED_NODE **)v23 + 3),
        v33,
        v34);
    return v24;
  }
  v25 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 4);
  LOBYTE(v22) = 0;
  if ( !v25 )
    goto LABEL_14;
  while ( (int)CompareVadRangeAvl((char *)v23, v25) >= 0 )
  {
    v26 = v25->Children[1];
    if ( !v26 )
    {
      LOBYTE(v22) = 1;
      goto LABEL_14;
    }
LABEL_12:
    v25 = v26;
  }
  v26 = v25->Children[0];
  if ( v25->Children[0] )
    goto LABEL_12;
  LOBYTE(v22) = 0;
LABEL_14:
  RtlAvlInsertNodeEx((char *)this + 32, v25, v22, v23);
  v28 = (unsigned int)a7;
  v29 = *((_DWORD *)v23 + 18) & 0xFFFFFFF0 | 2;
  *((_DWORD *)v23 + 18) = v29;
  if ( (_DWORD)v28 == 2 )
    goto LABEL_26;
  if ( (unsigned int)v28 > 1 )
  {
    v38 = WdLogNewEntry5_WdWarning(v28, 4294967282LL, v27);
    WdLogEvent5_WdWarning(v38);
    v24 = -1073741811;
    goto LABEL_22;
  }
  *((_DWORD *)v23 + 18) = v29 & 0xFFFFFFF0 | 2;
  if ( (_DWORD)v28 == 1 )
    v30.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)5LL;
  else
    v30.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)8LL;
  ReservedVaRange = CVirtualAddressAllocator::CreateReservedVaRange(
                      (struct _KTHREAD **)this,
                      v23,
                      v27,
                      *((_QWORD *)v23 + 3),
                      *((_QWORD *)v23 + 4) - *((_QWORD *)v23 + 3),
                      v30,
                      a8);
  if ( !ReservedVaRange )
  {
    v24 = -1073741801;
    goto LABEL_21;
  }
  *v17 = (struct VIDMM_MAPPED_VA_RANGE *)ReservedVaRange;
LABEL_26:
  *((_DWORD *)v23 + 18) ^= (*((_DWORD *)v23 + 18) ^ (a9 << 11)) & 0x800;
  *a10 = *((_QWORD *)v23 + 3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v39) = *((_DWORD *)v23 + 18);
    Template_pqxx(v36, &CreateGpuVirtualAddressRange, v37, this, v39, *((_QWORD *)v23 + 3), *((_QWORD *)v23 + 4));
  }
  return 0LL;
}
