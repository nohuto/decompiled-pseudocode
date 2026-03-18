/*
 * XREFs of RtlUShortAdd @ 0x14009905C
 * Callers:
 *     _SysCtxRegOpenCurrentUserKey @ 0x140699A24 (_SysCtxRegOpenCurrentUserKey.c)
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
