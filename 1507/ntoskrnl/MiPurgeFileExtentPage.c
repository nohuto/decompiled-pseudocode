/*
 * XREFs of MiPurgeFileExtentPage @ 0x140230D18
 * Callers:
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPurgeFileExtentPage(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (a2 - *(_QWORD *)(a1 + 8)) >> 3;
  v4 = *(_QWORD *)(v2 + 8 * v3 + 8);
  if ( v4 < 0 )
    return 0LL;
  *(_QWORD *)(v2 + 8 * v3 + 8) = v4 | 0x8000000000000000uLL;
  return 1LL;
}
