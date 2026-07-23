/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x14004E880
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // ax
  __int64 v3; // rdx
  unsigned int v4; // r8d

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (v1 & 0x10000000000000LL) == 0 )
    {
LABEL_3:
      v2 = *(_WORD *)(a1 + 32);
      v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v4 = 0;
      if ( v2 )
      {
        if ( v2 == 1 )
        {
          if ( !v3 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
            return v4;
        }
        else if ( v2 != 2 || !v3 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
        {
          return v4;
        }
      }
      return 1;
    }
  }
  else if ( (v1 & 0x10000000000000LL) == 0 )
  {
    goto LABEL_3;
  }
  return 0LL;
}
