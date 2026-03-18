/*
 * XREFs of ObInitializeFastReference @ 0x1404724AC
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404722F8 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x140554680 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x14057FFCC (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x1407A24C4 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140096540 (ObReferenceObjectExWithTag.c)
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
