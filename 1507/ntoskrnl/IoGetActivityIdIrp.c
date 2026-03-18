/*
 * XREFs of IoGetActivityIdIrp @ 0x140102D60
 * Callers:
 *     EtwpTraceIo @ 0x14011AA10 (EtwpTraceIo.c)
 *     IoPropagateActivityIdToThread @ 0x140123250 (IoPropagateActivityIdToThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v2 || (*(_BYTE *)(v2 + 2) & 1) == 0 )
    return 3221226021LL;
  result = 0LL;
  *a2 = *(_OWORD *)(*(_QWORD *)(a1 + 200) + 16LL);
  return result;
}
