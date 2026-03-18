/*
 * XREFs of ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z @ 0x1C003A4FC
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A388 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::CheckBinding(
        CCompositionSurface *this,
        __int64 a2,
        enum CompositionBufferType *a3,
        HWND *a4)
{
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v7; // rdx
  char v8; // r10
  struct CCompositionBuffer *v9; // rbx

  *(_DWORD *)a3 = 0;
  *a4 = 0LL;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v9 = ActiveBuffer;
  if ( ActiveBuffer && *((_QWORD *)ActiveBuffer + 2) == v7 )
  {
    *(_DWORD *)a3 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer);
    *a4 = (HWND)(*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v9 + 24LL))(v9);
    return 1;
  }
  return v8;
}
