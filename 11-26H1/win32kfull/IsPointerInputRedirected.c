/*
 * XREFs of IsPointerInputRedirected @ 0x1401C0970
 * Callers:
 *     IsPointerInputTypeRedirected @ 0x1402AA430 (IsPointerInputTypeRedirected.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1401C0D6C (UpdatePointerRedirIsAlive.c)
 */

__int64 __fastcall IsPointerInputRedirected(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 *v10; // rdx

  v5 = 0;
  v6 = 0LL;
  UpdatePointerRedirIsAlive(a2);
  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    v10 = (__int64 *)(a2 + 208);
    if ( a3 != 2 )
      v10 = (__int64 *)(a2 + 216);
    v6 = *v10;
    if ( *v10 && a1 == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 456LL) )
      v6 = 0LL;
  }
  if ( a4 )
    *a4 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
