/*
 * XREFs of CmosGetOpRegionType @ 0x1C0048230
 * Callers:
 *     CmosConfigSpaceHandler @ 0x1C0048090 (CmosConfigSpaceHandler.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C0013F30 (AMLIIsNamedChildPresent.c)
 *     CmosTranslatePNPIDToEnum @ 0x1C00482C0 (CmosTranslatePNPIDToEnum.c)
 */

__int64 __fastcall CmosGetOpRegionType(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  AMLIIsNamedChildPresent(*(__int64 **)(a3 + 56), 1145653343);
  result = ACPIGet(
             *(__int64 **)(**(_QWORD **)(a3 + 56) + 104LL),
             1145653343,
             671613446,
             0LL,
             0,
             (__int64)CmosTranslatePNPIDToEnum,
             a3,
             a3 + 64,
             0LL);
  if ( (_DWORD)result == 259 )
    return 259LL;
  if ( (int)result >= 0 )
    return CmosTranslatePNPIDToEnum(a1, 0LL, 0LL, a3);
  return result;
}
