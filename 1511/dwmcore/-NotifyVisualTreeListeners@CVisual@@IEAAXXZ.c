/*
 * XREFs of ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x18004BAEC
 * Callers:
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x180048004 (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004B800 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004CDF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CVisual::NotifyVisualTreeListeners(CVisual *this)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 3);
  if ( (v1 & 2) != 0 )
    v1 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v1) = v1 & 1;
  v3 = 0LL;
  if ( (_DWORD)v1 )
  {
    v4 = (unsigned int)v1;
    do
    {
      v5 = CPtrArrayBase::operator[]((char *)this + 24, v3);
      if ( v5 != *((_QWORD *)this + 8) )
        CResource::NotifyOnChanged(v5, 0LL, 0LL);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}
