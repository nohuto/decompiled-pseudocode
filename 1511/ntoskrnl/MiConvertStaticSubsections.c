/*
 * XREFs of MiConvertStaticSubsections @ 0x1400A9044
 * Callers:
 *     MiInsertUnusedSegment @ 0x1400A8590 (MiInsertUnusedSegment.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x1400A8B00 (MiRemoveViewsFromSection.c)
 */

__int64 __fastcall MiConvertStaticSubsections(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int16 v3; // dx
  int v5; // r8d

  v1 = 0LL;
  v2 = a1 + 120;
  do
  {
    v3 = *(_WORD *)(v2 + 34);
    if ( (v3 & 1) != 0 && (v3 & 8) == 0 )
    {
      if ( *(_DWORD *)(v2 + 48) )
      {
        *(_DWORD *)(v2 + 48) = -1;
        v5 = 4;
      }
      else
      {
        v5 = 2;
      }
      *(_QWORD *)(v2 + 96) = 1LL;
      *(_WORD *)(v2 + 34) = v3 & 0xFFFE;
      v1 += MiRemoveViewsFromSection(v2, *(unsigned int *)(v2 + 44), v5);
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  return v1;
}
