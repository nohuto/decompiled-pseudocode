/*
 * XREFs of WheapAddErrorSource @ 0x140147268
 * Callers:
 *     WheaAddErrorSource @ 0x1406BA3A4 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x1407B4128 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&word_140329948, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 117) = dword_140329934;
  v3 = (__int64 *)qword_140329940;
  if ( *(__int64 **)qword_140329940 != &qword_140329938 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140329938;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140329940 = a2;
  _InterlockedIncrement(&dword_140329934);
  return KeSetEvent((PRKEVENT)&word_140329948, 0, 0);
}
