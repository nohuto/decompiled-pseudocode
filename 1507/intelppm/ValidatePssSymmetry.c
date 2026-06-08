/*
 * XREFs of ValidatePssSymmetry @ 0x1C001589C
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C00150EC (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidatePssSymmetry(__int64 a1, char *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  _DWORD *v7; // rcx
  signed __int64 v8; // rdx

  v4 = -1073741823;
  if ( a2 )
  {
    if ( a4 )
    {
      v5 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 == *a4 )
      {
        v6 = 0;
        if ( v5 )
        {
          v7 = a4 + 2;
          v8 = a2 - (char *)a4;
          while ( *(_DWORD *)((char *)v7 + v8) == *v7 )
          {
            ++v6;
            v7 += 12;
            if ( v6 >= v5 )
              return 0;
          }
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return v4;
}
