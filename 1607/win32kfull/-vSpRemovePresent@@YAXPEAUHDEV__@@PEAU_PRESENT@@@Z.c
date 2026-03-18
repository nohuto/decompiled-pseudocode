/*
 * XREFs of ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C02763DC
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x1C00559D8 (GreDeleteSpriteOverlapPresent.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C026AE7C (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpRemovePresent(_QWORD *a1, struct _PRESENT *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rcx

  v2 = a1[23];
  if ( (struct _PRESENT *)v2 == a2 )
  {
    a1[23] = *((_QWORD *)a2 + 1);
  }
  else
  {
    while ( v2 )
    {
      v3 = (__int64 *)(v2 + 8);
      if ( *(struct _PRESENT **)(v2 + 8) == a2 )
        *v3 = *((_QWORD *)a2 + 1);
      v2 = *v3;
    }
  }
}
