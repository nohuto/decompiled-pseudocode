/*
 * XREFs of RtlULongLongAdd @ 0x180039184
 * Callers:
 *     PsspCaptureVaSpaceInformation @ 0x180005CA4 (PsspCaptureVaSpaceInformation.c)
 *     LdrpResGetResourceDirectory @ 0x1800376B0 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800381CC (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongAdd(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  if ( a1 + a2 < a1 )
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  else
  {
    *a3 = a1 + a2;
    return 0LL;
  }
}
