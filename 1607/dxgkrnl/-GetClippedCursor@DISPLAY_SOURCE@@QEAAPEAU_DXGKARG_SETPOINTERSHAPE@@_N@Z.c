/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C007CACC
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D34A0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(DISPLAY_SOURCE *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  void *v6; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 4092LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*((_QWORD *)this + 98) && a2 )
  {
    v8 = 4LL * (unsigned int)(*(_DWORD *)(v5 + 1480) * *(_DWORD *)(v5 + 1484));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v5 + 1480) * *(_DWORD *)(v5 + 1484)), 4uLL) )
      v8 = -1LL;
    *((_QWORD *)this + 98) = operator new(v8, 0x4B677844u, PagedPool);
  }
  v6 = (void *)*((_QWORD *)this + 98);
  if ( v6 )
    memset(v6, 0, 4 * *(unsigned int *)(v5 + 1480) * (unsigned __int64)*(unsigned int *)(v5 + 1484));
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 760);
}
