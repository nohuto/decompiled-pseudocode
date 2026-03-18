/*
 * XREFs of ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N3@Z @ 0x1C001B8DC
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0017058 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C001B75C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::NotifyPendingFlipPresent(
        CCompositionSurface *this,
        __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        char a4,
        bool *a5,
        bool *a6)
{
  unsigned int v8; // edi
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v10; // rdx
  struct CCompositionBuffer *v11; // rbx
  __int64 v12; // r8

  v8 = 0;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v11 = ActiveBuffer;
  if ( ActiveBuffer
    && *((_QWORD *)ActiveBuffer + 2) == v10
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
  {
    LOBYTE(v12) = a4;
    (*(void (__fastcall **)(struct CCompositionBuffer *, const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *, __int64, bool *, bool *))(*(_QWORD *)v11 + 56LL))(
      v11,
      a3,
      v12,
      a5,
      a6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
