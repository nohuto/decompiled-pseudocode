/*
 * XREFs of ?GetTextureFormat@CSystemMemoryBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x1801821F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::GetTextureFormat(CSystemMemoryBitmap *this)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( this == (CSystemMemoryBitmap *)256 )
    v1 = 0LL;
  else
    v1 = (__int64 *)((char *)this - 240);
  v2 = *v1;
  v4 = 0;
  (*(void (__fastcall **)(__int64 *, unsigned int *))(v2 + 24))(v1, &v4);
  return v4;
}
