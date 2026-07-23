/*
 * XREFs of IopIrpHasExtensionType @ 0x1400CF278
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x14008D7D8 (IoMakeAssociatedIrpPriv.c)
 *     IopFreeIrpExtension @ 0x1400B1764 (IopFreeIrpExtension.c)
 *     IoPropagateActivityIdToThread @ 0x1400CDE14 (IoPropagateActivityIdToThread.c)
 *     IoReuseIrp @ 0x1400CF080 (IoReuseIrp.c)
 *     IoGetFsTrackOffsetState @ 0x1400CF24C (IoGetFsTrackOffsetState.c)
 *     IoGetGenericIrpExtension @ 0x1401104D0 (IoGetGenericIrpExtension.c)
 *     IoSetGenericIrpExtension @ 0x1401107F4 (IoSetGenericIrpExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1401CA2F8 (IoClearFsTrackOffsetState.c)
 *     IoGetFsZeroingOffset @ 0x1401CA328 (IoGetFsZeroingOffset.c)
 *     IoIrpHasFsTrackOffsetExtensionType @ 0x1401CA35C (IoIrpHasFsTrackOffsetExtensionType.c)
 *     IoSetFsZeroingOffset @ 0x1401CA3C0 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401CA3F8 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x1401CA67C (IopPerfCompleteRequest.c)
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
