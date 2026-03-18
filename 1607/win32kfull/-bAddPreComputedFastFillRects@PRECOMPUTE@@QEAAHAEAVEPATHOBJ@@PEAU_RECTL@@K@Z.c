/*
 * XREFs of ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02CC408
 * Callers:
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02CC7E4 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall PRECOMPUTE::bAddPreComputedFastFillRects(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct _RECTL *a3,
        unsigned int a4)
{
  unsigned int v4; // ecx
  __int64 v6; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char *v10; // rax
  char *v11; // rbp
  const void *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx

  v4 = *((_DWORD *)a2 + 12);
  v6 = a4;
  if ( v4 + a4 <= v4 )
  {
    if ( v4 )
    {
      *((_DWORD *)a2 + 12) = 0;
      v16 = *((_QWORD *)a2 + 7);
      goto LABEL_14;
    }
    return 0LL;
  }
  v8 = v4 + a4;
  if ( (unsigned int)v8 < v4
    || (v9 = 16 * v8, v9 > 0xFFFFFFFF)
    || (v10 = (char *)PALLOCMEM2((unsigned int)v9, 1734632775LL, 0), (v11 = v10) == 0LL) )
  {
    if ( *((_DWORD *)a2 + 12) )
    {
      *((_DWORD *)a2 + 12) = 0;
      v16 = *((_QWORD *)a2 + 7);
LABEL_14:
      Win32FreePool(v16, a2);
      *((_QWORD *)a2 + 7) = 0LL;
      return 0LL;
    }
    return 0LL;
  }
  v12 = (const void *)*((_QWORD *)a2 + 7);
  if ( v12 )
    memmove(v10, v12, 16LL * *((unsigned int *)a2 + 12));
  memmove(&v11[16 * *((unsigned int *)a2 + 12)], a3, 16 * v6);
  v14 = *((_QWORD *)a2 + 7);
  if ( v14 )
    Win32FreePool(v14, v13);
  *((_DWORD *)a2 + 12) += v6;
  result = 1LL;
  *((_QWORD *)a2 + 7) = v11;
  return result;
}
