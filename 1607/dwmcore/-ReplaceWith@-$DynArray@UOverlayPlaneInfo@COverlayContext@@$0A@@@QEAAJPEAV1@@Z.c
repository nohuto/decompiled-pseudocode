/*
 * XREFs of ?ReplaceWith@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x180129AC4
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800788D8 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180187228 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 != a1[1] )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  *((_DWORD *)a1 + 5) = *(_DWORD *)(a2 + 20);
  result = DynArrayImpl<0>::DetachData(a2, v4, a1);
  if ( (int)result < 0 )
  {
    *((_DWORD *)a1 + 6) = 0;
    *((_DWORD *)a1 + 5) = 0;
  }
  return result;
}
