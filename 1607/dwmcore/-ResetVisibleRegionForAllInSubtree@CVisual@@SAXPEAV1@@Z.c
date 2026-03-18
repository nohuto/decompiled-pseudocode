/*
 * XREFs of ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180138C1C
 * Callers:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180138C1C (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180050D9C (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180138C1C (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 */

void __fastcall CVisual::ResetVisibleRegionForAllInSubtree(struct CVisual *a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  struct CVisual *v5; // rax
  CVisual *v6; // rdi

  v1 = (__int64 *)((char *)a1 + 136);
  v2 = *((_QWORD *)a1 + 17);
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v3 = 0LL;
    v4 = (unsigned int)v2;
    do
    {
      v5 = (struct CVisual *)CPtrArrayBase::operator[](v1, v3);
      v6 = v5;
      if ( v5 )
      {
        CVisual::ResetVisibleRegionForAllInSubtree(v5);
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 224LL))(v6) )
          CVisual::ResetVisibleRegionForAll(v6);
      }
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}
