/*
 * XREFs of PopTranslateDependencyArray @ 0x140204BFC
 * Callers:
 *     PopProcessorIdleSelectNotification @ 0x140204928 (PopProcessorIdleSelectNotification.c)
 *     PopProcessorQueryPlatformStateNotification @ 0x140204B48 (PopProcessorQueryPlatformStateNotification.c)
 * Callees:
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

void __fastcall PopTranslateDependencyArray(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter1,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int i; // edx

  if ( a5 > a4 )
    PopFxBugCheck((unsigned int)BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 0LL);
  for ( i = 0; i < a5; a6 += 16LL )
  {
    if ( !*(_QWORD *)a6 )
      PopFxBugCheck((unsigned int)BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, 0LL);
    ++i;
    *(_QWORD *)a6 = *(_QWORD *)(*(_QWORD *)a6 + 168LL);
  }
}
