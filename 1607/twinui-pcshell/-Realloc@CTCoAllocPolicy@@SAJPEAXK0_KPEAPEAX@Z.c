/*
 * XREFs of ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180008D30
 * Callers:
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x180008070 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 * Callees:
 *     memset @ 0x18002F32C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTCoAllocPolicy::Realloc(IMalloc *a1, __int64 a2, void *a3, SIZE_T a4, void **a5)
{
  void *v6; // rax
  void **v7; // rsi
  void *v8; // rdi
  unsigned __int64 v9; // rdi
  LPMALLOC ppMalloc; // [rsp+30h] [rbp+8h] BYREF

  ppMalloc = a1;
  v6 = CoTaskMemRealloc(a3, a4);
  v7 = a5;
  v8 = v6;
  *a5 = v6;
  if ( !v6 )
    return 2147942414LL;
  if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
  {
    v9 = ((__int64 (__fastcall *)(LPMALLOC, void *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v8);
    ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
    if ( v9 > a4 )
      memset((char *)*v7 + a4, 0, v9 - a4);
  }
  return 0LL;
}
