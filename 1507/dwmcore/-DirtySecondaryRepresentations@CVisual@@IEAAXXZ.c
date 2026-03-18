/*
 * XREFs of ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x18000BAAC
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D8C0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CVisual::DirtySecondaryRepresentations(CVisual *this)
{
  CVisual *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r15

  if ( this )
  {
    v1 = this;
    do
    {
      v2 = *((_QWORD *)v1 + 3);
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
          v5 = CPtrArrayBase::operator[]((char *)v1 + 24, v3);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 52LL) )
            CResource::NotifyOnChanged(v5, 0LL, 0LL);
          ++v3;
          --v4;
        }
        while ( v4 );
      }
      v1 = (CVisual *)*((_QWORD *)v1 + 10);
    }
    while ( v1 );
  }
}
