/*
 * XREFs of FsRtlRemoveReservedPerStreamContext @ 0x1401ADEB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PFSRTL_PER_STREAM_CONTEXT __fastcall FsRtlRemoveReservedPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  PFSRTL_PER_STREAM_CONTEXT result; // rax

  if ( !StreamContext || (*((_BYTE *)StreamContext + 7) & 0xF0u) < 0x30 )
    return FsRtlRemovePerStreamContext(StreamContext, OwnerId, InstanceId);
  result = (PFSRTL_PER_STREAM_CONTEXT)StreamContext->ReservedContext;
  StreamContext->ReservedContext = 0LL;
  return result;
}
