/*
 * XREFs of WheapAddErrorSource @ 0x14016B998
 * Callers:
 *     WheaAddErrorSource @ 0x14058D00C (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x1407DC5C4 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 **v3; // rax

  KeWaitForSingleObject(&word_140356CD8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 117) = dword_140356CC4;
  v3 = (__int64 **)qword_140356CD0;
  *(_QWORD *)a2 = &qword_140356CC8;
  *(_QWORD *)(a2 + 8) = v3;
  if ( *v3 != &qword_140356CC8 )
    __fastfail(3u);
  *v3 = (__int64 *)a2;
  qword_140356CD0 = a2;
  _InterlockedIncrement(&dword_140356CC4);
  return KeSetEvent((PRKEVENT)&word_140356CD8, 0, 0);
}
