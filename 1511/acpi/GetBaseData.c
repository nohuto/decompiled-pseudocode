/*
 * XREFs of GetBaseData @ 0x1C000D310
 * Callers:
 *     DerefOf @ 0x1C000CCE0 (DerefOf.c)
 *     ReadObject @ 0x1C000D298 (ReadObject.c)
 *     ParseSuperName @ 0x1C0011120 (ParseSuperName.c)
 *     ObjTypeSizeOf @ 0x1C0022FD0 (ObjTypeSizeOf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseData(__int64 a1)
{
  __int16 v1; // ax

  while ( 1 )
  {
    while ( 1 )
    {
      v1 = *(_WORD *)(a1 + 2);
      if ( v1 != 128 )
        break;
      a1 = *(_QWORD *)(a1 + 16) + 56LL;
    }
    if ( v1 != 129 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  return a1;
}
