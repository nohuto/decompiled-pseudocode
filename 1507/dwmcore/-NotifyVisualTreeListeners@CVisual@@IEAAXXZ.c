/*
 * XREFs of ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x1800383F8
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800345B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180038274 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CVisual::NotifyVisualTreeListeners(CVisual *this)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax

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
      v5 = CPtrArrayBase::operator[]((__int64 *)this + 3, v3);
      if ( v5 != *((_QWORD *)this + 10) )
        CResource::NotifyOnChanged(v5, 0LL, 0LL);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}
