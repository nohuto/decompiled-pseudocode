/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180048D70
 * Callers:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180048D70 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180048E08 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E68 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004CDF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18004D54C (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180048D70 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  char v1; // al
  CVisual *j; // rax
  unsigned int i; // edi
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  CVisual *v7; // rax

  v1 = *((_BYTE *)this + 696);
  if ( (v1 & 2) != 0 )
  {
    *((_BYTE *)this + 696) = v1 | 1;
    for ( i = 0; ; ++i )
    {
      v5 = *((_QWORD *)this + 7);
      v6 = (v5 & 2) != 0 ? *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)this + 7) & 1LL;
      if ( i >= v6 )
        break;
      v7 = (CVisual *)CPtrArrayBase::operator[]((char *)this + 56, i);
      if ( v7 )
        CVisual::OnTransformChanged(v7);
    }
  }
  *((_QWORD *)this + 68) = 0LL;
  for ( j = (CVisual *)*((_QWORD *)this + 52); j != (CVisual *)((char *)this + 416); j = *(CVisual **)j )
    *((_QWORD *)j - 19) = 0LL;
}
