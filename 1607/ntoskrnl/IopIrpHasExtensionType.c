/*
 * XREFs of IopIrpHasExtensionType @ 0x1400D13D8
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x14008E078 (IoMakeAssociatedIrpPriv.c)
 *     IopFreeIrpExtension @ 0x1400B38E4 (IopFreeIrpExtension.c)
 *     IoPropagateActivityIdToThread @ 0x1400CFF74 (IoPropagateActivityIdToThread.c)
 *     IoReuseIrp @ 0x1400D11E0 (IoReuseIrp.c)
 *     IoGetFsTrackOffsetState @ 0x1400D13AC (IoGetFsTrackOffsetState.c)
 *     IoGetGenericIrpExtension @ 0x14010FF6C (IoGetGenericIrpExtension.c)
 *     IoSetGenericIrpExtension @ 0x140110290 (IoSetGenericIrpExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1401CA458 (IoClearFsTrackOffsetState.c)
 *     IoGetFsZeroingOffset @ 0x1401CA488 (IoGetFsZeroingOffset.c)
 *     IoIrpHasFsTrackOffsetExtensionType @ 0x1401CA4BC (IoIrpHasFsTrackOffsetExtensionType.c)
 *     IoSetFsZeroingOffset @ 0x1401CA520 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401CA558 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x1401CA7DC (IopPerfCompleteRequest.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  char v3; // cl
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 )
    return a2 == 2;
  v3 = 0;
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(v2 + 2);
    return _bittest(&v4, a2);
  }
  return v3;
}
