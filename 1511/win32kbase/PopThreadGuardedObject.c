/*
 * XREFs of PopThreadGuardedObject @ 0x1C003ED40
 * Callers:
 *     GdiThreadCallout @ 0x1C000AF20 (GdiThreadCallout.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00526C8 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C006F530 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00B32E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     GrePopThreadGuardedObject @ 0x1C00B5D90 (GrePopThreadGuardedObject.c)
 * Callees:
 *     <none>
 */

void __fastcall PopThreadGuardedObject(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( a1 )
  {
    KeEnterCriticalRegion();
    v2 = *a1;
    v3 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v3 != a1 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    a1[1] = a1;
    *a1 = a1;
    KeLeaveCriticalRegion();
  }
}
