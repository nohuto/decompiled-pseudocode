/*
 * XREFs of SdbpCheckAttribute @ 0x1406C4E30
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1406C4B68 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslStringPatternMatchW @ 0x140579274 (AslStringPatternMatchW.c)
 *     SdbpCheckFromVersion @ 0x1406C5004 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x1406C5040 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1406C507C (SdbpCheckVersion.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckAttribute(_DWORD *a1, unsigned __int16 a2, WCHAR *a3, unsigned int a4, __int64 a5)
{
  int v5; // ebx
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // eax
  int v10; // r10d
  bool v11; // zf

  v5 = 0;
  *a1 = 0;
  v7 = 1;
  if ( a2 == 16414 )
  {
    if ( a4 < 4 )
    {
      v8 = 553;
      goto LABEL_16;
    }
    LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
    goto LABEL_38;
  }
  if ( a2 == 16435 )
  {
    if ( a4 < 4 )
    {
      v8 = 540;
      goto LABEL_16;
    }
    LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
    goto LABEL_38;
  }
  if ( a2 <= 0x5001u )
    goto LABEL_18;
  if ( a2 <= 0x5003u )
  {
    if ( a4 < 8 )
    {
      v8 = 499;
      goto LABEL_16;
    }
    v9 = SdbpCheckVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
    goto LABEL_24;
  }
  if ( a2 == 20486 || a2 == 20493 )
  {
    if ( a4 < 8 )
    {
      v8 = 527;
      goto LABEL_16;
    }
    v9 = SdbpCheckUptoVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
    goto LABEL_24;
  }
  if ( (unsigned int)a2 - 20498 > 1 )
  {
LABEL_18:
    v10 = a2 & 0xF000;
    switch ( v10 )
    {
      case 16384:
        if ( a4 < 4 )
        {
          v8 = 569;
          goto LABEL_16;
        }
        v11 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
        break;
      case 20480:
        if ( a4 < 8 )
        {
          v8 = 599;
          goto LABEL_16;
        }
        v11 = *(_QWORD *)a3 == *(_QWORD *)(a5 + 16);
        break;
      case 24576:
        if ( a4 < 2 )
        {
          v8 = 585;
          goto LABEL_16;
        }
        v9 = AslStringPatternMatchW(a3, *(WCHAR **)(a5 + 16));
        goto LABEL_24;
      default:
LABEL_38:
        *a1 = v5;
        return v7;
    }
    LOBYTE(v5) = v11;
    goto LABEL_38;
  }
  if ( a4 >= 8 )
  {
    v9 = SdbpCheckFromVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
LABEL_24:
    v5 = v9;
    goto LABEL_38;
  }
  v8 = 513;
LABEL_16:
  AslLogCallPrintf(1, (unsigned int)"SdbpCheckAttribute", v8, (unsigned int)"Attribute size doesn't match");
  return 0;
}
