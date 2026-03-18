/*
 * XREFs of GrepAcquirePublicPFTSemaphoreEx @ 0x140257A20
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FE100 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 */

__int64 __fastcall GrepAcquirePublicPFTSemaphoreEx(int a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetSessionState(a1, a2);
  if ( *(_QWORD *)(*(_QWORD *)(result + 96) + 20320LL) )
    return GreAcquireSemaphore<17,>(*(_QWORD *)(result + 96) + 4864LL);
  return result;
}
