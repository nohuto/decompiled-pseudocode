/*
 * XREFs of ?GetTextureFormat@CRenderTargetBitmap@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x180132760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetTextureFormat(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  result = 0LL;
  v3 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 24LL))(v1, &v3);
    return v3;
  }
  return result;
}
