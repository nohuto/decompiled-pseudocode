/*
 * XREFs of RtlUShortAdd @ 0x1400CFE0C
 * Callers:
 *     RtlpCreateServerAcl @ 0x1406CA428 (RtlpCreateServerAcl.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140719880 (_SysCtxRegOpenCurrentUserKey.c)
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
