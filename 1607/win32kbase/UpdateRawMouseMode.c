/*
 * XREFs of UpdateRawMouseMode @ 0x1C00153E4
 * Callers:
 *     zzzDestroyQueue @ 0x1C0014070 (zzzDestroyQueue.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 * Callees:
 *     HasHidTable_0 @ 0x1C0001FC0 (HasHidTable_0.c)
 */

void __fastcall UpdateRawMouseMode(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( a1 == gpqForeground )
    gfRawMouse = (unsigned int)HasHidTable_0()
              && ((v2 = *(_QWORD *)(a1 + 72)) == 0 ? (v3 = *(_QWORD *)(a1 + 56)) : (v3 = *(_QWORD *)(v2 + 16)),
                  (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 376) + 776LL) + 100LL) & 1) != 0);
}
