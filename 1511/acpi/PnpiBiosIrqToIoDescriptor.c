/*
 * XREFs of PnpiBiosIrqToIoDescriptor @ 0x1C006F290
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C007030C (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosIrqToIoDescriptor(_BYTE *a1, unsigned __int16 a2, __int64 a3, unsigned int a4, __int16 a5)
{
  __int64 result; // rax
  _BYTE *v8; // rcx
  bool v9; // cf
  _BYTE *v10; // [rsp+30h] [rbp+8h] BYREF

  result = PnpiUpdateResourceList(a3 + 8LL * a4, &v10);
  if ( (int)result >= 0 )
  {
    v8 = v10;
    v9 = a5 != 0;
    a5 = -a5;
    *v10 = v9 ? 8 : 0;
    v8[1] = 2;
    *((_DWORD *)v8 + 2) = a2;
    *((_DWORD *)v8 + 3) = a2;
    if ( (*a1 & 7) == 3 )
    {
      *((_WORD *)v8 + 2) = 0;
      if ( (a1[3] & 1) != 0 )
      {
        *((_WORD *)v8 + 2) = 1;
        *((_DWORD *)v8 + 4) = 0;
        v8[2] = ((a1[3] & 0x10) != 0) + 1;
      }
      if ( (a1[3] & 8) != 0 )
      {
        *((_DWORD *)v8 + 4) = 2;
        v8[2] = (unsigned __int8)(a1[3] & 0x10 | 8) >> 3;
      }
      if ( (a1[3] & 0x20) != 0 )
        *((_WORD *)v8 + 2) |= 0x20u;
    }
    else
    {
      *((_WORD *)v8 + 2) = 1;
      v8[2] = 1;
    }
    return (unsigned int)result;
  }
  return result;
}
