/*
 * XREFs of PnpiBiosDmaToIoDescriptor @ 0x1C0083FC4
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C0086790 (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosDmaToIoDescriptor(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned int a4, __int16 a5)
{
  __int64 result; // rax
  unsigned int v8; // r8d
  _BYTE *v9; // rcx
  bool v10; // cf
  int v11; // eax
  _BYTE *v12; // [rsp+30h] [rbp+8h] BYREF

  result = PnpiUpdateResourceList(a3 + 8LL * a4, &v12);
  v8 = result;
  if ( (int)result >= 0 )
  {
    v9 = v12;
    v10 = a5 != 0;
    a5 = -a5;
    *v12 = v10 ? 8 : 0;
    *(_WORD *)(v9 + 1) = 260;
    *((_DWORD *)v9 + 2) = a2;
    *((_DWORD *)v9 + 3) = a2;
    if ( (*(_BYTE *)(a1 + 2) & 3) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 2) & 3) == 1 )
      {
        *((_WORD *)v9 + 2) |= 4u;
      }
      else if ( (*(_BYTE *)(a1 + 2) & 3) == 2 )
      {
        *((_WORD *)v9 + 2) |= 1u;
      }
      else
      {
        *((_WORD *)v9 + 2) |= 2u;
      }
    }
    if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
      *((_WORD *)v9 + 2) |= 8u;
    v11 = *(_BYTE *)(a1 + 2) & 0x60;
    switch ( v11 )
    {
      case ' ':
        *((_WORD *)v9 + 2) |= 0x10u;
        break;
      case '@':
        *((_WORD *)v9 + 2) |= 0x20u;
        break;
      case '`':
        *((_WORD *)v9 + 2) |= 0x40u;
        break;
    }
    return v8;
  }
  return result;
}
