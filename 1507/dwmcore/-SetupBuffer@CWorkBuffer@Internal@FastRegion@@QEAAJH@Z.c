/*
 * XREFs of ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180089308
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180087F0C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18015118C (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall FastRegion::Internal::CWorkBuffer::SetupBuffer(FastRegion::Internal::CWorkBuffer *this, int a2)
{
  __int64 v4; // rax

  if ( *(_DWORD *)this )
    return 2147500037LL;
  *(_DWORD *)this = a2;
  if ( (unsigned __int64)a2 <= 0x100 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         a2);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = v4;
    return 0LL;
  }
  return 2147942414LL;
}
