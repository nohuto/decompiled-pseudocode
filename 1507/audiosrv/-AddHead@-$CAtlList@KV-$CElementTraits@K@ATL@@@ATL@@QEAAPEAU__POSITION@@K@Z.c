/*
 * XREFs of ?AddHead@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAPEAU__POSITION@@K@Z @ 0x18009F024
 * Callers:
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800A02FC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@AEAAPEAVCNode@12@KPEAV312@0@Z @ 0x18009F410 (-NewNode@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@AEAAPEAVCNode@12@KPEAV312@0@Z.c)
 */

__int64 __fastcall ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::AddHead(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::NewNode(a1, a2, a3, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
