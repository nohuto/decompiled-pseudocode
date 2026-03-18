/*
 * XREFs of MiRecheckVaVm @ 0x14022AFD8
 * Callers:
 *     MiCrcStillIntact @ 0x140229DF8 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRecheckVaVm(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  char v3; // r9
  int v4; // ecx
  bool v5; // zf

  v2 = 1;
  v3 = *(_BYTE *)(a1 + 216) & 7;
  if ( v3 )
  {
    if ( a2 >= 0xFFFF800000000000uLL )
    {
      v4 = *(unsigned __int8 *)(48 * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                              - 0x57FFFFFFFDALL) >> 4;
      switch ( v3 )
      {
        case 1:
          if ( v4 != 1 )
          {
            v5 = v4 == 11;
            break;
          }
          return v2;
        case 2:
          v5 = v4 == 8;
          break;
        case 3:
          v5 = v4 == 6;
          break;
        case 4:
          v5 = v4 == 9;
          break;
        default:
          return v2;
      }
      if ( !v5 )
        return 0;
      return v2;
    }
  }
  else if ( a2 < 0xFFFF800000000000uLL )
  {
    return v2;
  }
  return 0LL;
}
