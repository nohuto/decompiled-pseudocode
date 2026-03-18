/*
 * XREFs of ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0048F7C
 * Callers:
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C0057AA0 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0067E94 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00472A0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0047838 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C006871C (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0072050 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
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
  unsigned int v23; // esi
  unsigned int v24; // r8d
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE v25; // ecx
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v27; // rax
  struct VIDMM_MAPPED_VA_RANGE *ReservedVaRange; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[32]; // [rsp+50h] [rbp-38h] BYREF
  struct VIDMM_VAD *v32; // [rsp+90h] [rbp+8h] BYREF

  v12 = a12;
  if ( a12 && (*(_DWORD *)(*((_QWORD *)this + 9) + 48LL) & 2) != 0 )
    v12 = *(_BYTE *)(*((_QWORD *)this + 8) + 40097LL) != 0 ? a12 : 0;
  v32 = 0LL;
  v17 = a11;
  if ( a11 )
    *a11 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v31, (struct _KTHREAD **)this + 5);
  v19 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
          (unsigned __int64)this,
          v18,
          a2,
          a3,
          a4,
          a5,
          a6,
          &v32,
          v12);
  v22 = v32;
  v23 = v19;
  if ( v19 >= 0 )
  {
    CVirtualAddressAllocator::InsertVadToReservedList(this, v32, v21);
    v25 = a7;
    if ( a7 == D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT )
    {
LABEL_6:
      *((_DWORD *)v22 + 18) ^= (*((_DWORD *)v22 + 18) ^ (a9 << 11)) & 0x800;
      *a10 = *((_QWORD *)v22 + 3);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
      return 0LL;
    }
    if ( (unsigned int)a7 > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
    {
      v30 = WdLogNewEntry5_WdWarning((unsigned int)a7);
      WdLogEvent5_WdWarning(v30);
      v23 = -1073741811;
      goto LABEL_17;
    }
    *((_DWORD *)v22 + 18) = *((_DWORD *)v22 + 18) & 0xFFFFFFF0 | 2;
    if ( v25 == D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
      v27.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)5LL;
    else
      v27.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)8LL;
    ReservedVaRange = CVirtualAddressAllocator::CreateReservedVaRange(
                        this,
                        v22,
                        v24,
                        *((_QWORD *)v22 + 3),
                        *((_QWORD *)v22 + 4) - *((_QWORD *)v22 + 3),
                        v27,
                        a8);
    if ( ReservedVaRange )
    {
      *v17 = ReservedVaRange;
      goto LABEL_6;
    }
    v23 = -1073741801;
  }
  v29 = WdLogNewEntry5_WdWarning(v20);
  WdLogEvent5_WdWarning(v29);
LABEL_17:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  if ( v22 )
    CVirtualAddressAllocator::FreeVirtualAddressRange(this, *((_QWORD *)v22 + 3));
  return v23;
}
