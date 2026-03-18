/*
 * XREFs of ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180187228
 * Callers:
 *     ?ReplaceWith@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x180129AC4 (-ReplaceWith@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::DetachData(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *v3; // rsi
  int v4; // edi
  unsigned __int64 v7; // r9
  SIZE_T v8; // rdx
  LPVOID (__fastcall *v9)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v10; // rax

  v3 = *(void **)a1;
  v4 = 0;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
LABEL_14:
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *a3 = v3;
    return (unsigned int)v4;
  }
  v3 = 0LL;
  v7 = *(unsigned int *)(a1 + 20);
  if ( *(_DWORD *)(a1 + 20) && 0xFFFFFFFFFFFFFFFFuLL / v7 > 0xE8 )
  {
    v8 = 232 * v7;
    v9 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v9 == WPF::ProcessHeapImpl::Alloc )
      v10 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v8);
    else
      v10 = v9(WPF::g_pProcessHeap, v8);
    v3 = v10;
    if ( !v10 )
      v4 = -2147024882;
  }
  else
  {
    v4 = -2147024809;
  }
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
      memcpy_0(v3, *(const void **)a1, (unsigned int)(232 * *(_DWORD *)(a1 + 24)));
    goto LABEL_14;
  }
  *a3 = 0LL;
  return (unsigned int)v4;
}
