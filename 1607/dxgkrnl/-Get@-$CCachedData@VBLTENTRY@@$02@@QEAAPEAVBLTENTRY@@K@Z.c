/*
 * XREFs of ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C001D1F8
 * Callers:
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C0184A08 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000C708 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C0028148 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char *__fastcall CCachedData<BLTENTRY,3>::Get(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  char *result; // rax
  BLTENTRY *v5; // rcx
  char *v6; // rdi
  __int64 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rax
  char *v10; // rax

  v2 = a2;
  if ( a2 <= 3 )
    return (char *)a1;
  if ( a2 <= *(_DWORD *)(a1 + 1688) )
    return *(char **)(a1 + 1680);
  v5 = *(BLTENTRY **)(a1 + 1680);
  v6 = 0LL;
  if ( v5 )
    BLTENTRY::`vector deleting destructor'(v5, a2);
  v7 = 560 * v2;
  if ( !is_mul_ok(v2, 0x230uLL) )
    v7 = -1LL;
  v8 = __CFADD__(v7, 8LL);
  v9 = v7 + 8;
  if ( v8 )
    v9 = -1LL;
  v10 = (char *)operator new(v9, 0x4B677844u, PagedPool);
  if ( v10 )
  {
    v6 = v10 + 8;
    *(_QWORD *)v10 = v2;
    `vector constructor iterator'(v10 + 8, 560LL, v2, (void (__fastcall *)(char *))BLTENTRY::BLTENTRY);
  }
  *(_QWORD *)(a1 + 1680) = v6;
  result = v6;
  *(_DWORD *)(a1 + 1688) = v6 != 0LL ? v2 : 0;
  return result;
}
