/*
 * XREFs of PsGetProcessSilo @ 0x140079730
 * Callers:
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     PsGetProcessServerSilo @ 0x14041CF3C (PsGetProcessServerSilo.c)
 *     PsIsProcessInAppSilo @ 0x14063FA68 (PsIsProcessInAppSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 944); result; result = *(_QWORD *)(result + 1064) )
  {
    if ( *(_QWORD *)(result + 1248) )
      break;
  }
  return result;
}
