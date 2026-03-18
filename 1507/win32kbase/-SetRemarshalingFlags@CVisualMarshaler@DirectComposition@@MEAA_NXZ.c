/*
 * XREFs of ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D9C60
 * Callers:
 *     ?SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00DDC20 (-SetRemarshalingFlags@CHostVisualMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00D9F04 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::SetRemarshalingFlags(DirectComposition::CVisualMarshaler *this)
{
  char v1; // di
  __int64 v3; // rax
  char v4; // al
  bool v5; // al

  v1 = 0;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) |= 0x10000u;
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
  if ( *((_DWORD *)this + 46) != -1
    || *((_DWORD *)this + 47) != -1
    || *((_DWORD *)this + 48) != -1
    || *((_DWORD *)this + 49) != -1
    || *((_DWORD *)this + 50) != -1
    || *((_DWORD *)this + 51) != -1
    || *((_DWORD *)this + 56) )
  {
    *((_DWORD *)this + 4) |= 0x20000u;
  }
  v4 = *((_BYTE *)this + 228);
  if ( (v4 & 0xC) != 0 )
    *((_DWORD *)this + 4) |= 0x40000u;
  if ( (v4 & 1) != 0 )
    *((_DWORD *)this + 4) |= 0x80000u;
  if ( (v4 & 2) != 0 )
    *((_DWORD *)this + 4) |= 0x100000u;
  if ( *((_QWORD *)this + 22) )
    *((_DWORD *)this + 4) |= 0x200000u;
  if ( *((float *)this + 17) != 0.0 || *((float *)this + 18) != 0.0 )
    *((_DWORD *)this + 4) |= 0x400000u;
  if ( *((float *)this + 23) != 1.0 )
    *((_DWORD *)this + 4) |= 0x800000u;
  if ( *((float *)this + 19) != 0.0 || *((float *)this + 20) != 0.0 )
    *((_DWORD *)this + 4) |= 0x1000000u;
  if ( *((float *)this + 21) != 0.0 || *((float *)this + 22) != 0.0 )
    *((_DWORD *)this + 4) |= 0x2000000u;
  v5 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x3FF3F00) != 0 || v5 )
    return 1;
  return v1;
}
