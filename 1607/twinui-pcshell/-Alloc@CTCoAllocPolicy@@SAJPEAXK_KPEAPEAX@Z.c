/*
 * XREFs of ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002B68C
 * Callers:
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18002B734 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ?CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z @ 0x18002D588 (-CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z.c)
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18002DCA0 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 * Callees:
 *     memset @ 0x18002F32C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTCoAllocPolicy::Alloc(IMalloc *a1, char a2, SIZE_T a3, void **a4)
{
  void *v6; // rax
  size_t v7; // rbx
  void *v8; // rdi
  LPMALLOC ppMalloc; // [rsp+30h] [rbp+8h] BYREF

  ppMalloc = a1;
  v6 = CoTaskMemAlloc(a3);
  v7 = 0LL;
  *a4 = v6;
  v8 = v6;
  if ( !v6 )
    return 2147942414LL;
  if ( (a2 & 1) != 0 )
  {
    if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(LPMALLOC, void *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v8);
      ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
    }
    memset(*a4, 0, v7);
  }
  return 0LL;
}
