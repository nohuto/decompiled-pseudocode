/*
 * XREFs of SdbpCheckAttribute @ 0x140704BAC
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140704904 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslStringPatternMatchW @ 0x1405A9E4C (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbpCheckFromVersion @ 0x140704D80 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x140704DBC (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x140704DF8 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckAttribute(_DWORD *a1, unsigned __int16 a2, WCHAR *a3, unsigned int a4, __int64 a5)
{
  int v5; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // r10d
  bool v10; // zf

  v5 = 0;
  *a1 = 0;
  v7 = 1;
  if ( a2 == 16414 )
  {
    if ( a4 >= 4 )
    {
      LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
      goto LABEL_30;
    }
    goto LABEL_13;
  }
  if ( a2 == 16435 )
  {
    if ( a4 >= 4 )
    {
      LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
      goto LABEL_30;
    }
    goto LABEL_13;
  }
  if ( a2 <= 0x5001u )
    goto LABEL_15;
  if ( a2 <= 0x5003u )
  {
    if ( a4 >= 8 )
    {
      v8 = SdbpCheckVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
      goto LABEL_20;
    }
    goto LABEL_13;
  }
  if ( a2 != 20486 && a2 != 20493 )
  {
    if ( (unsigned int)a2 - 20498 <= 1 )
    {
      if ( a4 >= 8 )
      {
        v8 = SdbpCheckFromVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
LABEL_20:
        v5 = v8;
        goto LABEL_30;
      }
      goto LABEL_13;
    }
LABEL_15:
    v9 = a2 & 0xF000;
    switch ( v9 )
    {
      case 16384:
        if ( a4 < 4 )
          goto LABEL_13;
        v10 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
        break;
      case 20480:
        if ( a4 < 8 )
          goto LABEL_13;
        v10 = *(_QWORD *)a3 == *(_QWORD *)(a5 + 16);
        break;
      case 24576:
        if ( a4 >= 2 )
        {
          v8 = AslStringPatternMatchW(a3, *(WCHAR **)(a5 + 16));
          goto LABEL_20;
        }
        goto LABEL_13;
      default:
LABEL_30:
        *a1 = v5;
        return v7;
    }
    LOBYTE(v5) = v10;
    goto LABEL_30;
  }
  if ( a4 >= 8 )
  {
    v8 = SdbpCheckUptoVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
    goto LABEL_20;
  }
LABEL_13:
  AslLogCallPrintf(1LL);
  return 0;
}
