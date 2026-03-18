/*
 * XREFs of ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DB040
 * Callers:
 *     ?SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DBF90 (-SetRemarshalingFlags@CSpriteVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00DF870 (-SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DAEEC (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::SetRemarshalingFlags(DirectComposition::CVisualMarshaler *this)
{
  char v1; // di
  __int64 v3; // rax
  char v4; // al
  char v5; // al

  v1 = 0;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x8000u;
  if ( *((float *)this + 14) != 0.0 || *((float *)this + 15) != 0.0 || *((float *)this + 16) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 12) )
    *((_DWORD *)this + 4) |= 0x200u;
  v3 = *((_QWORD *)this + 13);
  if ( v3 && *(_QWORD *)(v3 + 16) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 14) )
    *((_DWORD *)this + 4) |= 0x800u;
  if ( *((_QWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x1000u;
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( *((_QWORD *)this + 22) != ((*(unsigned int (__fastcall **)(DirectComposition::CVisualMarshaler *))(*(_QWORD *)this + 280LL))(this) | 0xFFFFFFFF00000000uLL)
    || *((_DWORD *)this + 46) != -1
    || *((_DWORD *)this + 47) != -1
    || *((_DWORD *)this + 48) != -1
    || *((_DWORD *)this + 49) != -1
    || *((_DWORD *)this + 54) != (*(unsigned int (__fastcall **)(DirectComposition::CVisualMarshaler *))(*(_QWORD *)this + 288LL))(this) )
  {
    *((_DWORD *)this + 4) |= 0x10000u;
  }
  v4 = *((_BYTE *)this + 220);
  if ( (v4 & 0xC) != 0 )
    *((_DWORD *)this + 4) |= 0x20000u;
  if ( (v4 & 1) != 0 )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( (v4 & 2) != 0 )
    *((_DWORD *)this + 4) |= 0x80000u;
  if ( *((_QWORD *)this + 21) )
    *((_DWORD *)this + 4) |= 0x100000u;
  if ( *((float *)this + 17) != 0.0 || *((float *)this + 18) != 0.0 )
    *((_DWORD *)this + 4) |= 0x200000u;
  if ( *((float *)this + 23) != 1.0 )
    *((_DWORD *)this + 4) |= 0x400000u;
  if ( *((float *)this + 19) != 0.0 || *((float *)this + 20) != 0.0 )
    *((_DWORD *)this + 4) |= 0x800000u;
  if ( *((float *)this + 21) != 0.0 || *((float *)this + 22) != 0.0 )
    *((_DWORD *)this + 4) |= 0x1000000u;
  v5 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x1FFBF00) != 0 || v5 )
    return 1;
  return v1;
}
