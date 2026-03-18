/*
 * XREFs of UpdateRawMouseMode @ 0x1C004F018
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C004ED10 (zzzDestroyQueue.c)
 * Callees:
 *     HasHidTable_0 @ 0x1C0001C98 (HasHidTable_0.c)
 */

void __fastcall UpdateRawMouseMode(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( a1 == gpqForeground )
    gfRawMouse = (unsigned int)HasHidTable_0()
              && ((v2 = *(_QWORD *)(a1 + 64)) == 0 ? (v3 = *(_QWORD *)(a1 + 48)) : (v3 = *(_QWORD *)(v2 + 16)),
                  (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 384) + 784LL) + 100LL) & 1) != 0);
}
