/*
 * XREFs of ?DestParametersChanged@CCompositionSurface@@QEAA_N_KIIIUtagRECT@@@Z @ 0x1C0048F88
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045288 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048DA8 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::DestParametersChanged(
        CCompositionSurface *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct tagRECT *a6)
{
  char v8; // di
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v10; // rdx
  struct CCompositionBuffer *v11; // rbx
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v11 = ActiveBuffer;
  if ( ActiveBuffer
    && *((_QWORD *)ActiveBuffer + 1) == v10
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
  {
    v12 = *(_QWORD *)v11;
    v14 = (__int128)*a6;
    return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _QWORD, _QWORD, _QWORD, __int128 *))(v12 + 48))(
             v11,
             a3,
             a4,
             a5,
             &v14);
  }
  return v8;
}
