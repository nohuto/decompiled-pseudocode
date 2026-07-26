/*
 * XREFs of ndisIsValidWoLPattern @ 0x1C00B1188
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C00B1040 (ndisOidPrePMAddWOLPattern.c)
 * Callees:
 *     ndisIsValidPmCountedString @ 0x1C00B123C (ndisIsValidPmCountedString.c)
 */

char __fastcall ndisIsValidWoLPattern(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  _DWORD *v4; // r9
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // eax

  if ( *(_BYTE *)a1 == 0x80 )
  {
    v3 = *(_BYTE *)(a1 + 1);
    if ( (v3 == 1 || v3 == 2)
      && *(_WORD *)(a1 + 2) >= 0xC4u
      && (unsigned __int8)ndisIsValidPmCountedString(a1 + 16, a2, a3, a1)
      && !v4[38] )
    {
      v7 = v4[3];
      if ( v7 == 1 )
      {
        v8 = v4[41];
        if ( v8 )
        {
          v9 = v4[43];
          if ( v9 )
          {
            if ( v8 >= v9 >> 3 )
            {
              v10 = v4[40];
              if ( v10 >= v5 && v10 + v8 >= v10 && v10 + v8 <= v6 )
              {
                v11 = v4[42];
                if ( v11 >= v5 && v11 + v9 >= v11 && v11 + v9 <= v6 )
                  return 1;
              }
            }
          }
        }
      }
      else if ( v7 > 1 && v7 <= 5 )
      {
        return 1;
      }
    }
  }
  return 0;
}
