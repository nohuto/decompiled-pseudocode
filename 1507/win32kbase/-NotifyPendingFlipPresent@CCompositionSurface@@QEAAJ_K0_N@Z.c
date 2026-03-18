/*
 * XREFs of ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_K0_N@Z @ 0x1C004901C
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045288 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048DA8 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::NotifyPendingFlipPresent(
        CCompositionSurface *this,
        __int64 a2,
        __int64 a3,
        char a4)
{
  unsigned int v6; // edi
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v8; // rdx
  struct CCompositionBuffer *v9; // rbx
  __int64 v10; // r8

  v6 = 0;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v9 = ActiveBuffer;
  if ( ActiveBuffer
    && *((_QWORD *)ActiveBuffer + 1) == v8
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
  {
    LOBYTE(v10) = a4;
    (*(void (__fastcall **)(struct CCompositionBuffer *, __int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, a3, v10);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
