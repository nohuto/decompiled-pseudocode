/*
 * XREFs of ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x180059C80
 * Callers:
 *     ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x1800362A0 (-ClearContentTreeDataCaches@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x180059654 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180059780 (-Clear@CTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDrawListCacheSet::Invalidate(CDrawListCacheSet *this)
{
  unsigned int i; // edi
  unsigned int j; // edi
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(CMILRefCountBase *); // rbp
  CMILRefCountBase *v6; // rcx

  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 16LL * i);
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v4 + 8LL);
      if ( v5 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(*(CMILRefCountBase **)(*(_QWORD *)this + 16LL * i));
      else
        v5(*(CMILRefCountBase **)(*(_QWORD *)this + 16LL * i));
    }
  }
  *((_DWORD *)this + 6) = 0;
  for ( j = 0; j < *((_DWORD *)this + 14); ++j )
  {
    v6 = *(CMILRefCountBase **)(*((_QWORD *)this + 4) + 16LL * j);
    if ( v6 )
      CMILRefCountBase::Release(v6);
  }
  *((_DWORD *)this + 14) = 0;
}
