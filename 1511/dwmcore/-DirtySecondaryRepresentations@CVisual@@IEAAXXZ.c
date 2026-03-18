/*
 * XREFs of ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1800091A0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
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
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 56LL) )
            CResource::NotifyOnChanged(v5, 0LL, 0LL);
          ++v3;
          --v4;
        }
        while ( v4 );
      }
      v1 = (CVisual *)*((_QWORD *)v1 + 8);
    }
    while ( v1 );
  }
}
