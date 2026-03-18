/*
 * XREFs of ?ReferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FC6C4
 * Callers:
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01FBF3C (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C022E2F0 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointerList::ReferenceMsgData(__int64 a1, int a2)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 36) |= 0x20u;
  result = a2;
  ++*(_BYTE *)(a2 + a1 + 48);
  return result;
}
