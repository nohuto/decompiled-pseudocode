/*
 * XREFs of ExAllocatePoolSanityChecks @ 0x140721210
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ExpIsPoolTagPrintable @ 0x1407214EC (ExpIsPoolTagPrintable.c)
 */

__int64 __fastcall ExAllocatePoolSanityChecks(int a1, ULONG_PTR a2, _DWORD *a3, __int64 BugCheckParameter4)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rbx
  __int64 result; // rax

  v4 = (unsigned int)*a3;
  v6 = a1;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 541542722 )
    {
      VerifierBugCheckIfAppropriate(0xC2u, 0x9CuLL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, BugCheckParameter4);
      *a3 = 828662082;
    }
    else if ( !(unsigned int)ExpIsPoolTagPrintable((unsigned int)v4) )
    {
      VerifierBugCheckIfAppropriate(0xC2u, 0x9DuLL, v4, v6 & 0xFFFFFFFFFFFFFF7FuLL, BugCheckParameter4);
      *a3 = 845439298;
    }
  }
  else
  {
    VerifierBugCheckIfAppropriate(0xC2u, 0x9BuLL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, BugCheckParameter4);
    *a3 = 811884866;
  }
  if ( !a2 )
    VerifierBugCheckIfAppropriate(0xC4u, 0LL, KeGetCurrentIrql(), v6 & 0xFFFFFFFFFFFFFF7FuLL, 0LL);
  result = KeGetCurrentIrql();
  if ( (v6 & 1) != 0 )
  {
    if ( (unsigned __int8)result > 1u )
      KeBugCheckEx(0xC4u, 1uLL, KeGetCurrentIrql(), v6 & 0xFFFFFFFFFFFFFF7FuLL, a2);
  }
  else if ( (unsigned __int8)result > 2u )
  {
    KeBugCheckEx(0xC4u, 2uLL, KeGetCurrentIrql(), v6 & 0xFFFFFFFFFFFFFF7FuLL, a2);
  }
  return result;
}
