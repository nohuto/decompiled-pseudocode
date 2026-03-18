/*
 * XREFs of GetBaseData @ 0x1C001ED48
 * Callers:
 *     ParseSuperName @ 0x1C0017D40 (ParseSuperName.c)
 *     ReadObject @ 0x1C001ECD0 (ReadObject.c)
 *     DerefOf @ 0x1C001EF00 (DerefOf.c)
 *     ObjTypeSizeOf @ 0x1C0029E70 (ObjTypeSizeOf.c)
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
      a1 = *(_QWORD *)(a1 + 16) + 64LL;
    }
    if ( v1 != 129 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  return a1;
}
