/*
 * XREFs of WheapAddErrorSource @ 0x14013E604
 * Callers:
 *     WheaAddErrorSource @ 0x1405195F0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x1407684B4 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 **v3; // rax

  KeWaitForSingleObject(&word_1403069C8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 117) = dword_1403069B4;
  v3 = (__int64 **)qword_1403069C0;
  *(_QWORD *)a2 = &qword_1403069B8;
  *(_QWORD *)(a2 + 8) = v3;
  if ( *v3 != &qword_1403069B8 )
    __fastfail(3u);
  *v3 = (__int64 *)a2;
  qword_1403069C0 = a2;
  _InterlockedIncrement(&dword_1403069B4);
  return KeSetEvent((PRKEVENT)&word_1403069C8, 0, 0);
}
