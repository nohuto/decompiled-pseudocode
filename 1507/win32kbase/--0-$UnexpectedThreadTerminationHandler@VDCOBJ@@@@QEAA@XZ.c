/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00AEE78
 * Callers:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C00B02A0 (--0DCOBJ@@QEAA@XZ.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void *__fastcall UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(void *a1)
{
  __int64 v2; // rdx

  memset(a1, 0, 0x20uLL);
  v2 = 0LL;
  if ( a1 )
    v2 = (__int64)a1 - 16;
  PushThreadGuardedObject(
    (__int64 *)a1,
    v2,
    (__int64)UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
