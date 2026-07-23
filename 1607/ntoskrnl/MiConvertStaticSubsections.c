/*
 * XREFs of MiConvertStaticSubsections @ 0x1400A0534
 * Callers:
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x140022364 (MiRemoveViewsFromSection.c)
 */

__int64 __fastcall MiConvertStaticSubsections(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int16 v3; // dx
  int v5; // r8d

  v1 = a1 + 128;
  v2 = 0LL;
  do
  {
    v3 = *(_WORD *)(v1 + 34);
    if ( (v3 & 1) != 0 && (v3 & 8) == 0 )
    {
      if ( *(_DWORD *)(v1 + 48) )
      {
        *(_DWORD *)(v1 + 48) = -1;
        v5 = 4;
      }
      else
      {
        v5 = 2;
      }
      *(_QWORD *)(v1 + 96) = 1LL;
      *(_WORD *)(v1 + 34) = v3 & 0xFFFE;
      v2 += MiRemoveViewsFromSection(v1, *(unsigned int *)(v1 + 44), v5);
    }
    v1 = *(_QWORD *)(v1 + 16);
  }
  while ( v1 );
  return v2;
}
