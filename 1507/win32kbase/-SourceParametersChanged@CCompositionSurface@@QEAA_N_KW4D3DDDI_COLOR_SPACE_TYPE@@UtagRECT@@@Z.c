/*
 * XREFs of ?SourceParametersChanged@CCompositionSurface@@QEAA_N_KW4D3DDDI_COLOR_SPACE_TYPE@@UtagRECT@@@Z @ 0x1C0049094
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045288 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048DA8 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::SourceParametersChanged(
        CCompositionSurface *this,
        __int64 a2,
        unsigned int a3,
        struct tagRECT *a4)
{
  char v6; // di
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v8; // rdx
  struct CCompositionBuffer *v9; // rbx
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v9 = ActiveBuffer;
  if ( ActiveBuffer
    && *((_QWORD *)ActiveBuffer + 1) == v8
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
  {
    v10 = *(_QWORD *)v9;
    v12 = (__int128)*a4;
    return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _QWORD, __int128 *))(v10 + 56))(v9, a3, &v12);
  }
  return v6;
}
