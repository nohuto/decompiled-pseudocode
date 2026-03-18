/*
 * XREFs of UpdateRawMouseMode @ 0x1C00414A4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0040F60 (zzzDestroyQueue.c)
 * Callees:
 *     HasHidTable_0 @ 0x1C0001CB8 (HasHidTable_0.c)
 */

void __fastcall UpdateRawMouseMode(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax

  if ( a1 == gpqForeground )
    gfRawMouse = (unsigned int)HasHidTable_0()
              && ((v2 = *(_QWORD *)(a1 + 64)) == 0 ? (v3 = *(_QWORD *)(a1 + 48)) : (v3 = *(_QWORD *)(v2 + 16)),
                  (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 376) + 784LL) + 100LL) & 1) != 0);
}
