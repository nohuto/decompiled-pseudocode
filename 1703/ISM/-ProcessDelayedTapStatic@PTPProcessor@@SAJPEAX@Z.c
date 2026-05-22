/*
 * XREFs of ?ProcessDelayedTapStatic@PTPProcessor@@SAJPEAX@Z @ 0x18005B3B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?ProcessDelayedTap@PTPProcessor@@AEAAJXZ @ 0x18005BED8 (-ProcessDelayedTap@PTPProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall PTPProcessor::ProcessDelayedTapStatic(PTPProcessor *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( !a1 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(0LL, &MinInput_Warning_CheckResult, 11, 172, 255);
    goto LABEL_7;
  }
  LODWORD(result) = PTPProcessor::ProcessDelayedTap(a1);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v2, &MinInput_Warning_CheckResult, 11, 177, result);
LABEL_7:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
