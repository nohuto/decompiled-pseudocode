/*
 * XREFs of ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0040888
 * Callers:
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0050314 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C0050428 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_pqxx @ 0x1C001DFE4 (Template_pqxx.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C0040ED8 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00411F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005EFB0 (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C006A268 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRange(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE a7,
        unsigned __int64 a8,
        unsigned __int8 a9,
        unsigned __int64 *a10,
        struct VIDMM_MAPPED_VA_RANGE **a11,
        unsigned __int8 a12)
{
  unsigned __int8 v12; // bl
  struct VIDMM_MAPPED_VA_RANGE **v17; // r14
  struct _RTL_AVL_TREE *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct VIDMM_VAD *v22; // rbx
  unsigned int v23; // edi
  struct _RTL_BALANCED_NODE *v24; // rdi
  struct _RTL_BALANCED_NODE *v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v32; // rax
  struct VIDMM_MAPPED_VA_RANGE *ReservedVaRange; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+20h] [rbp-68h]
  _BYTE v37[32]; // [rsp+50h] [rbp-38h] BYREF
  struct VIDMM_VAD *v38; // [rsp+90h] [rbp+8h] BYREF

  v12 = a12;
  if ( a12 && (*(_DWORD *)(*((_QWORD *)this + 9) + 48LL) & 2) != 0 )
    v12 = *(_BYTE *)(*((_QWORD *)this + 8) + 40009LL) != 0 ? a12 : 0;
  v38 = 0LL;
  v17 = a11;
  if ( a11 )
    *a11 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v37,
    (struct _KTHREAD **)this + 5,
    a3,
    a4);
  v19 = CVirtualAddressAllocator::AllocateVirtualAddressRange(this, v18, a2, a3, a4, a5, a6, &v38, v12);
  v22 = v38;
  v23 = v19;
  if ( v19 < 0 )
    goto LABEL_25;
  v24 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 4);
  LOBYTE(v21) = 0;
  if ( !v24 )
    goto LABEL_9;
  while ( (int)CompareVadRangeAvl(v22, v24) >= 0 )
  {
    v25 = v24->Children[1];
    if ( !v25 )
    {
      LOBYTE(v21) = 1;
      goto LABEL_9;
    }
LABEL_13:
    v24 = v25;
  }
  v25 = v24->Children[0];
  if ( v24->Children[0] )
    goto LABEL_13;
  LOBYTE(v21) = 0;
LABEL_9:
  RtlAvlInsertNodeEx((char *)this + 32, v24, v21, v22);
  v27 = (unsigned int)a7;
  v28 = *((_DWORD *)v22 + 18) & 0xFFFFFFF0 | 2;
  *((_DWORD *)v22 + 18) = v28;
  if ( (_DWORD)v27 == 2 )
  {
LABEL_10:
    *((_DWORD *)v22 + 18) ^= (*((_DWORD *)v22 + 18) ^ (a9 << 11)) & 0x800;
    *a10 = *((_QWORD *)v22 + 3);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v36) = *((_DWORD *)v22 + 18);
      Template_pqxx(v29, &CreateGpuVirtualAddressRange, v30, this, v36, *((_QWORD *)v22 + 3), *((_QWORD *)v22 + 4));
    }
    return 0LL;
  }
  if ( (unsigned int)v27 > 1 )
  {
    v35 = WdLogNewEntry5_WdWarning(v27);
    WdLogEvent5_WdWarning(v35);
    v23 = -1073741811;
  }
  else
  {
    *((_DWORD *)v22 + 18) = v28 & 0xFFFFFFF0 | 2;
    if ( (_DWORD)v27 == 1 )
      v32.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)5LL;
    else
      v32.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)8LL;
    ReservedVaRange = CVirtualAddressAllocator::CreateReservedVaRange(
                        this,
                        v22,
                        v26,
                        *((_QWORD *)v22 + 3),
                        *((_QWORD *)v22 + 4) - *((_QWORD *)v22 + 3),
                        v32,
                        a8);
    if ( ReservedVaRange )
    {
      *v17 = ReservedVaRange;
      goto LABEL_10;
    }
    v23 = -1073741801;
LABEL_25:
    v34 = WdLogNewEntry5_WdWarning(v20);
    WdLogEvent5_WdWarning(v34);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
  if ( v22 )
    CVirtualAddressAllocator::FreeVirtualAddressRange(this, *((_QWORD *)v22 + 3));
  return v23;
}
