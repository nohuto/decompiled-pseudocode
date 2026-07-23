/*
 * XREFs of RtlUShortAdd @ 0x14000838C
 * Callers:
 *     VrpBuildKeyPath @ 0x140617B98 (VrpBuildKeyPath.c)
 *     RtlpCreateServerAcl @ 0x1406843E8 (RtlpCreateServerAcl.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DFAD0 (_SysCtxRegOpenCurrentUserKey.c)
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
