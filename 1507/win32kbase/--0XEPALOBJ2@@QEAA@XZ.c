/*
 * XREFs of ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00B1298
 * Callers:
 *     bDeletePalette @ 0x1C005A8C0 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF530 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

XEPALOBJ2 *__fastcall XEPALOBJ2::XEPALOBJ2(XEPALOBJ2 *this)
{
  __int64 v1; // rdi
  __int64 *v2; // rbx

  v1 = 0LL;
  v2 = (__int64 *)((char *)this + 8);
  *(_QWORD *)this = 0LL;
  memset((char *)this + 8, 0, 0x20uLL);
  if ( v2 )
    v1 = (__int64)(v2 - 1);
  PushThreadGuardedObject(
    v2,
    v1,
    (__int64)UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic);
  return this;
}
