/*
 * XREFs of ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18009E0EC
 * Callers:
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x18009E6B4 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall WPF::HrMalloc(WPF *this, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rax

  v4 = 0;
  if ( a4 && a3 && 0xFFFFFFFFFFFFFFFFuLL / a3 > 8 )
  {
    v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           8 * a3);
    *a4 = v6;
    if ( !v6 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
