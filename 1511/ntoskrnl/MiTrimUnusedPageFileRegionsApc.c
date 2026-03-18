/*
 * XREFs of MiTrimUnusedPageFileRegionsApc @ 0x1401DD118
 * Callers:
 *     <none>
 * Callees:
 *     MiFindFreePageFileSpace @ 0x1400F4EDC (MiFindFreePageFileSpace.c)
 */

LONG __fastcall MiTrimUnusedPageFileRegionsApc(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // r8
  __int64 v4; // rdi
  unsigned int FreePageFileSpace; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 36);
  v4 = *(_QWORD *)(v2 + 8LL * *(unsigned int *)(a1 + 32) + 5728);
  v9 = 2 * (*(_WORD *)(v4 + 204) & 0xF | ((unsigned __int64)*(unsigned int *)(a1 + 40) << 31));
  FreePageFileSpace = MiFindFreePageFileSpace(v2, &v9, v3, 0xABu);
  if ( FreePageFileSpace >= *(_DWORD *)(a1 + 36) )
  {
    v6 = HIDWORD(v9);
    *(_DWORD *)(a1 + 40) = HIDWORD(v9);
    v7 = *(_QWORD *)v4;
    v9 = 2 * (*(_WORD *)(v4 + 204) & 0xF | ((unsigned __int64)(FreePageFileSpace + (unsigned int)v6) << 31));
    *(_DWORD *)(a1 + 44) = FreePageFileSpace + MiFindFreePageFileSpace(v2, &v9, v7, 0x6Bu);
  }
  return KeSetEvent((PRKEVENT)a1, 0, 0);
}
