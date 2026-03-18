/*
 * XREFs of ?MakeResident@DXGPAGINGQUEUE@@QEAAJPEAUD3DDDI_MAKERESIDENT@@PEAPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0145A78
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0145110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00026D8 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_ppqq @ 0x1C001E9F8 (Template_ppqq.c)
 *     Template_qxx @ 0x1C001EA84 (Template_qxx.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::MakeResident(
        DXGPAGINGQUEUE *this,
        struct D3DDDI_MAKERESIDENT *a2,
        struct _VIDMM_MULTI_ALLOC **a3)
{
  DXGDEVICE *v3; // rbp
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 *p_NumBytesToTrim; // rdi
  __int64 NumAllocations; // r9
  UINT64 *p_PagingFenceValue; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // ebx

  v3 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( DXGDEVICE::UmdManagesResidency(v3) )
  {
    v11 = (a2->Flags.Value & 1) != 0;
    if ( (a2->Flags.Value & 2) != 0 )
      v11 |= 2u;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      Template_ppqq(
        *((_QWORD *)this + 5),
        &EventMakeResidentBegin,
        v8,
        this,
        *(_QWORD *)(*((_QWORD *)this + 5) + 32LL),
        a2->NumAllocations,
        a2->Flags.Value);
    v12 = *((_QWORD *)this + 4);
    p_NumBytesToTrim = (__int64 *)&a2->NumBytesToTrim;
    NumAllocations = a2->NumAllocations;
    p_PagingFenceValue = &a2->PagingFenceValue;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _VIDMM_MULTI_ALLOC **, __int64, int, UINT64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 400LL) + 8LL) + 752LL))(
            *(_QWORD *)(*((_QWORD *)v3 + 2) + 408LL),
            v12,
            a3,
            NumAllocations,
            v11,
            p_PagingFenceValue,
            p_NumBytesToTrim);
    v19 = v16;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      Template_qxx(*p_NumBytesToTrim, v17, v18, v16, *p_NumBytesToTrim, *p_PagingFenceValue);
    return v19;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
    return 3221225659LL;
  }
}
