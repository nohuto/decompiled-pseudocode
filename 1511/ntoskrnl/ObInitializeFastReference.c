/*
 * XREFs of ObInitializeFastReference @ 0x14044F95C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14044F884 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x14053F9A8 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x14054A4B8 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x14075B9D8 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x1400D5D80 (ObReferenceObjectExWithTag.c)
 */

__int64 __fastcall ObInitializeFastReference(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    ObReferenceObjectExWithTag(a2, 15);
    result = a2 + 15;
    *a1 = a2 + 15;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}
