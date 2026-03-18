/*
 * XREFs of MI_UNUSED_SUBSECTIONS_COUNT_REMOVE @ 0x14003A580
 * Callers:
 *     MiRemoveUnusedSubsection @ 0x14003A500 (MiRemoveUnusedSubsection.c)
 *     MiDeleteEmptySubsections @ 0x1400E755C (MiDeleteEmptySubsections.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MI_UNUSED_SUBSECTIONS_COUNT_REMOVE(__int64 a1)
{
  int v1; // edx
  int v2; // r8d
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 52);
  v2 = *(_DWORD *)(a1 + 44);
  v3 = 8LL * (v2 + (v1 & 0x7FFFFFFFu));
  if ( v3 > 0xFE0 )
  {
    if ( v3 >= 0x10000 || ((8 * ((_WORD)v2 + (_WORD)v1)) & 0xFFFu) > 0xFC0 )
    {
      result = (v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v4 = v3 + 15;
  }
  else
  {
    v4 = v3 + 31;
  }
  result = v4 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  qword_1402FE2A8 -= result;
  return result;
}
