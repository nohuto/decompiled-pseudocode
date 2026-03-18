/*
 * XREFs of CmpSetKcbAtLayerHeight @ 0x1404CB070
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeleted @ 0x140405030 (CmpIsKeyDeleted.c)
 *     CmpConstructNameWithStatus @ 0x140437710 (CmpConstructNameWithStatus.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpPopulateKcbStack @ 0x140440110 (CmpPopulateKcbStack.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetKcbAtLayerHeight(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 >= 2 )
  {
    result = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(result + 8LL * (a2 - 2)) = a3;
  }
  else
  {
    result = a2;
    *(_QWORD *)(a1 + 8LL * a2 + 8) = a3;
  }
  return result;
}
