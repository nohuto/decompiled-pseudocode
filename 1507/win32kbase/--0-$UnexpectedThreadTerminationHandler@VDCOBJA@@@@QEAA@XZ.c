/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00B7804
 * Callers:
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0039878 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgn @ 0x1C0044570 (GreSelectVisRgn.c)
 *     GreGetBounds @ 0x1C0054F60 (GreGetBounds.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(void *a1)
{
  __int64 v2; // rdx

  memset(a1, 0, 0x20uLL);
  v2 = 0LL;
  if ( a1 )
    v2 = (__int64)a1 - 16;
  PushThreadGuardedObject(
    (__int64 *)a1,
    v2,
    (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
