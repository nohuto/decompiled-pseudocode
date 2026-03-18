/*
 * XREFs of ?BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ @ 0x18006C968
 * Callers:
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18006C890 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CResourceTable::BreakLinksForCyclicResources(CResourceTable *this)
{
  __int64 **v1; // rsi
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rdi
  _DWORD *v5; // rdi

  v1 = (__int64 **)((char *)this + 56);
  while ( *v1 != (__int64 *)v1 )
  {
    v2 = *v1;
    v3 = **v1;
    if ( (__int64 **)(*v1)[1] != v1 || *(__int64 **)(v3 + 8) != v2 )
      __fastfail(3u);
    v4 = v2 - 1;
    *v1 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v1;
    if ( v2 == (__int64 *)8 )
      v2 = 0LL;
    v4[1] = (__int64)v2;
    v4[2] = (__int64)v2;
    v5 = (_DWORD *)(*(__int64 (__fastcall **)(__int64 *))*v4)(v4);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 56LL))(v5);
    CResource::NotifyOnChanged(v5, 0, 0LL);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
