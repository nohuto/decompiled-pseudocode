/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x140402930
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpAssignKeySecurity @ 0x14014A9C8 (CmpAssignKeySecurity.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4234 (CmQueryMultipleValueForLayeredKey.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1405FCCF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140402AD0 (CmpUpdateKeyNodeAccessBits.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 24) + 8LL))(
         *(_QWORD *)(a1 + 24),
         *(unsigned int *)(a1 + 32),
         a2);
  v7 = v6;
  if ( a3 )
  {
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(a1 + 24), v6, *(unsigned int *)(a1 + 32));
  }
  else if ( (*(_BYTE *)(v6 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), a2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 24) + 2848LL), 1u);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 24) + 8LL))(
           *(_QWORD *)(a1 + 24),
           *(unsigned int *)(a1 + 32),
           a2);
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(a1 + 24), v7, *(unsigned int *)(a1 + 32));
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 24) + 2848LL));
  }
  return v7;
}
