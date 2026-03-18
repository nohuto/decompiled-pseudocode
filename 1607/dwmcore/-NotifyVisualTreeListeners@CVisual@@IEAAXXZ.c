/*
 * XREFs of ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x180053838
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18000B8F0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800534B8 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180053710 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
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
      if ( v5 != *((_QWORD *)this + 18) )
        CResource::NotifyOnChanged(v5, 0LL, 0LL);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}
