/*
 * XREFs of ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@XZ @ 0x1C009FF50
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00BE950 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetClippedCursor(DISPLAY_SOURCE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  SIZE_T v5; // rax
  __int64 v6; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v6 + 24) = 19049LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*((_QWORD *)this + 97) )
  {
    v5 = 4LL * (unsigned int)(*(_DWORD *)(v3 + 1344) * *(_DWORD *)(v3 + 1348));
    if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v3 + 1344) * *(_DWORD *)(v3 + 1348)), 4uLL) )
      v5 = -1LL;
    *((_QWORD *)this + 97) = operator new[](v5, 0x4B677844u, PagedPool);
  }
  memset(*((void **)this + 97), 0, 4 * *(unsigned int *)(v3 + 1344) * (unsigned __int64)*(unsigned int *)(v3 + 1348));
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 752);
}
