/*
 * XREFs of ObInitializeFastReference @ 0x14047137C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404711C8 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x140554BC0 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x140580478 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x1407A24C4 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
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
