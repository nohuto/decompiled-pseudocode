/*
 * XREFs of PsSetProcessDxgProcess @ 0x1404CD48C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessDxgProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1968) = a2;
}
