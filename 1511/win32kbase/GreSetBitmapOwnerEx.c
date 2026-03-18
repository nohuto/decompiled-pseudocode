/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C00229D8
 * Callers:
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx

  v2 = a2;
  LOBYTE(a2) = 5;
  v4 = 0;
  v5 = HmgShareLockCheck(a1, a2);
  v7 = v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 184) || v2) && (a1 & 0x800000) == 0 )
    {
      LOBYTE(v6) = 5;
      v4 = HmgSetOwner(a1, v2, v6);
    }
    HmgDecrementShareReferenceCount(v7);
  }
  return v4;
}
