/*
 * XREFs of DpiDeleteSpbResourceRecord @ 0x1C016F428
 * Callers:
 *     DpiCheckSpbResourceLeakage @ 0x1C0028C10 (DpiCheckSpbResourceLeakage.c)
 *     DpCloseSpbResource @ 0x1C016EA10 (DpCloseSpbResource.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall DpiDeleteSpbResourceRecord(__int64 a1, void *a2)
{
  _QWORD *v2; // rcx
  void **v4; // rax
  void *v5; // rcx

  v2 = *(_QWORD **)a2;
  v4 = (void **)*((_QWORD *)a2 + 1);
  if ( *(void **)(*(_QWORD *)a2 + 8LL) != a2 || *v4 != a2 )
    __fastfail(3u);
  *v4 = v2;
  v2[1] = v4;
  v5 = (void *)*((_QWORD *)a2 + 7);
  *((_QWORD *)a2 + 4) = 0LL;
  ZwClose(v5);
  ZwClose(*((HANDLE *)a2 + 5));
  memset(a2, 0, 0x48uLL);
  ExFreePoolWithTag(a2, 0);
  return 0LL;
}
