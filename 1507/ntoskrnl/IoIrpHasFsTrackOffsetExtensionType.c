/*
 * XREFs of IoIrpHasFsTrackOffsetExtensionType @ 0x1401F7C54
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IoIrpHasFsTrackOffsetExtensionType(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al
  char v3; // cl

  v1 = *(_QWORD *)(a1 + 200);
  v2 = *(_BYTE *)(a1 + 71);
  v3 = 0;
  if ( v2 >= 0 && v1 )
    return (*(_BYTE *)(v1 + 2) & 0x20) != 0;
  return v3;
}
