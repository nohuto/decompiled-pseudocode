/*
 * XREFs of ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C006CEEC
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00B4EBC (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000238C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::Evict(
        DXGDEVICE *this,
        struct DXGALLOCATIONREFERENCE *a2,
        __int64 a3,
        struct D3DDDI_EVICT_FLAGS a4,
        unsigned __int64 *a5)
{
  __int64 v7; // rcx
  char v8; // r9
  __int64 v9; // r10
  int v10; // edi
  struct DXGALLOCATIONREFERENCE *i; // rbp
  __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF

  if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v10 = (v8 & 1) != 0;
    if ( (v8 & 2) == 0 )
      v10 |= 2u;
    for ( i = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8 * v9);
          a2 != i;
          a2 = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8) )
    {
      v14 = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      if ( v14 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64, int, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 8LL)
                                                                                            + 760LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 432LL),
          *((_QWORD *)this + 67),
          &v14,
          1LL,
          v10,
          a5);
    }
    return 0LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 3221225659LL;
  }
}
