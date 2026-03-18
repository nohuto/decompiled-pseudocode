/*
 * XREFs of RtlUShortAdd @ 0x140008818
 * Callers:
 *     VrpBuildKeyPath @ 0x140617AE4 (VrpBuildKeyPath.c)
 *     RtlpCreateServerAcl @ 0x140684304 (RtlpCreateServerAcl.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DF998 (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
  {
    *pusResult = -1;
    return -1073741675;
  }
  else
  {
    *pusResult = usAddend + usAugend;
    return 0;
  }
}
