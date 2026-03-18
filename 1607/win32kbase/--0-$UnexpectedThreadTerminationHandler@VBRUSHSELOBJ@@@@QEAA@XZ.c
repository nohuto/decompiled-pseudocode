/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCEF8
 * Callers:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005B5A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

_QWORD *__fastcall UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(
        _QWORD *a1)
{
  __int64 v2; // rdx

  memset(a1, 0, 0x20uLL);
  v2 = 0LL;
  if ( a1 )
    v2 = (__int64)(a1 - 2);
  PushThreadGuardedObject(
    a1,
    v2,
    (__int64)UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
