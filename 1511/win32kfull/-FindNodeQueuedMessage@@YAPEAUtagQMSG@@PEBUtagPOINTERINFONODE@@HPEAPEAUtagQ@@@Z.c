/*
 * XREFs of ?FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z @ 0x1C022F6A8
 * Callers:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C022E7F8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00652F8 (IsPointerInputMessage.c)
 */

struct tagQMSG *__fastcall FindNodeQueuedMessage(const struct tagPOINTERINFONODE *a1, __int64 a2, struct tagQ **a3)
{
  __int64 v5; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  struct tagQ *v10; // r8

  v5 = ValidateHwnd(*((_QWORD *)a1 + 10));
  if ( !v5 )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 384LL);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
  {
    do
    {
      if ( IsPointerInputMessage(*(_DWORD *)(v8 + 24))
        && *(_QWORD *)(v8 + 40) == *((_QWORD *)a1 + 2)
        && (unsigned int)(v9 - 585) > 1 )
      {
        break;
      }
      v8 = *(_QWORD *)(v8 + 8);
    }
    while ( v8 );
    if ( v8 )
    {
      if ( a3 )
        *a3 = v10;
    }
  }
  return (struct tagQMSG *)v8;
}
