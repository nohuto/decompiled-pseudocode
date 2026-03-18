/*
 * XREFs of ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02C8E04
 * Callers:
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02C9688 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     UIntAdd @ 0x1C00A93FC (UIntAdd.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     UIntMult @ 0x1C01DCF90 (UIntMult.c)
 */

__int64 __fastcall PRECOMPUTE::bAddPreComputedFastStrokeRects(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct _RECTL *a3,
        UINT a4)
{
  UINT v4; // ecx
  __int64 v6; // rbp
  char *v8; // rax
  char *v9; // rsi
  const void *v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  UINT puResult; // [rsp+48h] [rbp+20h] BYREF

  v4 = *((_DWORD *)a2 + 16);
  v6 = a4;
  if ( v4 + a4 <= v4 )
  {
    if ( v4 )
    {
      *((_DWORD *)a2 + 16) = 0;
      v13 = *((_QWORD *)a2 + 9);
      goto LABEL_14;
    }
    return 0LL;
  }
  if ( UIntAdd(v4, a4, &puResult) < 0
    || UIntMult(puResult, 0x10u, &puResult) < 0
    || (v8 = (char *)PALLOCMEM2(puResult, 1734632775LL, 0), (v9 = v8) == 0LL) )
  {
    if ( *((_DWORD *)a2 + 16) )
    {
      *((_DWORD *)a2 + 16) = 0;
      v13 = *((_QWORD *)a2 + 9);
LABEL_14:
      Win32FreePool(v13);
      *((_QWORD *)a2 + 9) = 0LL;
      return 0LL;
    }
    return 0LL;
  }
  v10 = (const void *)*((_QWORD *)a2 + 9);
  if ( v10 )
    memmove(v8, v10, 16LL * *((unsigned int *)a2 + 16));
  memmove(&v9[16 * *((unsigned int *)a2 + 16)], a3, 16 * v6);
  v11 = *((_QWORD *)a2 + 9);
  if ( v11 )
    Win32FreePool(v11);
  *((_DWORD *)a2 + 16) += v6;
  result = 1LL;
  *((_QWORD *)a2 + 9) = v9;
  return result;
}
