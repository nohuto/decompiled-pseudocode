/*
 * XREFs of ObInitializeFastReference @ 0x14046A3B8
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14046A2E8 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x1405B57F8 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x1405C1B24 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x1407BC43C (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
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
