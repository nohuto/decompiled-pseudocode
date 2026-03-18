/*
 * XREFs of MI_UNUSED_SUBSECTIONS_COUNT_REMOVE @ 0x140082CB0
 * Callers:
 *     MiDeleteEmptySubsections @ 0x140081CCC (MiDeleteEmptySubsections.c)
 *     MiRemoveUnusedSubsection @ 0x140082C00 (MiRemoveUnusedSubsection.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MI_UNUSED_SUBSECTIONS_COUNT_REMOVE(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 52);
  v2 = 8LL * v1;
  if ( v2 > 0xFE0 )
  {
    if ( v2 >= 0x10000 || ((8 * (_WORD)v1) & 0xFFFu) > 0xFC0 )
    {
      result = (v2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v3 = v2 + 15;
  }
  else
  {
    v3 = v2 + 31;
  }
  result = v3 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  qword_14034E7A8 -= result;
  return result;
}
