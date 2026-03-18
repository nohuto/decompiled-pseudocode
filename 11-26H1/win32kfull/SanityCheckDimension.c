/*
 * XREFs of SanityCheckDimension @ 0x140144DB0
 * Callers:
 *     HT_HalftoneBitmap @ 0x1401449FC (HT_HalftoneBitmap.c)
 * Callees:
 *     <none>
 */

bool __fastcall SanityCheckDimension(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx
  int v6; // r8d

  v3 = a2;
  v4 = a1;
  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 112);
  if ( !*(_DWORD *)(v5 + 72) )
    return 1;
  v6 = v4;
  if ( v4 <= v3 )
  {
    v6 = v3;
    v3 = v4;
  }
  return (unsigned int)(v6 - v3) <= *(_DWORD *)(v5 + 76);
}
