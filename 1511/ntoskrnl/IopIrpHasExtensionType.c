/*
 * XREFs of IopIrpHasExtensionType @ 0x140101C04
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x140100098 (IoMakeAssociatedIrpPriv.c)
 *     IoReuseIrp @ 0x140100350 (IoReuseIrp.c)
 *     IoPropagateActivityIdToThread @ 0x140101BA4 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x140101BD8 (IoGetFsTrackOffsetState.c)
 *     IoGetGenericIrpExtension @ 0x1401051D8 (IoGetGenericIrpExtension.c)
 *     IoSetGenericIrpExtension @ 0x140105308 (IoSetGenericIrpExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1401BC398 (IoClearFsTrackOffsetState.c)
 *     IoGetFsZeroingOffset @ 0x1401BC3C8 (IoGetFsZeroingOffset.c)
 *     IoIrpHasFsTrackOffsetExtensionType @ 0x1401BC3FC (IoIrpHasFsTrackOffsetExtensionType.c)
 *     IoSetFsZeroingOffset @ 0x1401BC46C (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401BC4A4 (IoSetFsZeroingOffsetRequired.c)
 *     IopFreeIrpExtension @ 0x1401BC504 (IopFreeIrpExtension.c)
 *     IopPerfCompleteRequest @ 0x1401BC7C4 (IopPerfCompleteRequest.c)
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
