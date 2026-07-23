/*
 * XREFs of KiRemoveThreadFromScbQueue @ 0x140098BE4
 * Callers:
 *     KiGroupSchedulingMoveThread @ 0x140098ADC (KiGroupSchedulingMoveThread.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x140098B9C (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A8EC8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C6B2C (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x140098C78 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140098EDC (KiResortScbQueue.c)
 */

int __fastcall KiRemoveThreadFromScbQueue(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r10
  _QWORD *v6; // r8
  _QWORD *v8; // rax
  char v9; // cl

  v4 = a3 + 216;
  v6 = *(_QWORD **)(a3 + 216);
  v8 = *(_QWORD **)(v4 + 8);
  if ( v6[1] != v4 || *v8 != v4 )
    __fastfail(3u);
  *v8 = v6;
  v6[1] = v8;
  if ( v8 == v6 )
  {
    v9 = *(_BYTE *)(a2 + 112);
    LODWORD(v8) = *(unsigned __int16 *)(a2 + 114) ^ (1 << a4);
    *(_WORD *)(a2 + 114) = (_WORD)v8;
    if ( (v9 & 2) == 0 )
    {
      LOBYTE(v6) = 1;
      if ( (v9 & 1) != 0 )
      {
        if ( (_WORD)v8 || *(_QWORD *)(a2 + 392) )
          LODWORD(v8) = KiResortScbQueue(a1, a2, v6);
        else
          LODWORD(v8) = KiRemoveSchedulingGroupQueue(a1, a2, v6);
      }
    }
  }
  *(_DWORD *)(a3 + 116) &= ~0x2000u;
  *(_QWORD *)(a3 + 1496) = 0LL;
  return (int)v8;
}
