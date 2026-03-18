/*
 * XREFs of ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1801049A4
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1801049A4 (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180036258 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1801049A4 (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 */

void __fastcall CVisual::ResetVisibleRegionForAllInSubtree(struct CVisual *a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  struct CVisual *v5; // rax
  CVisual *v6; // rsi
  __int64 *v7; // [rsp+30h] [rbp+8h]

  v1 = (__int64 *)((char *)a1 + 72);
  v7 = v1;
  v2 = *v1;
  if ( (*v1 & 2) != 0 )
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
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 216LL))(v6) )
          CVisual::ResetVisibleRegionForAll(v6);
      }
      v1 = v7;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}
