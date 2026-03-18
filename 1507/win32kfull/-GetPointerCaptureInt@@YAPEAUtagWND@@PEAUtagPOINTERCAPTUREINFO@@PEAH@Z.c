/*
 * XREFs of ?GetPointerCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREINFO@@PEAH@Z @ 0x1C01FC47C
 * Callers:
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01FC440 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 * Callees:
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01FC6DC (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 */

struct tagWND *__fastcall GetPointerCaptureInt(struct tagPOINTERCAPTUREINFO *a1, int *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)a1 + 1);
  if ( v4 && (*(char *)(v4 + 44) < 0 || *(char *)(v4 + 43) < 0) )
  {
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
      ReleasePointerCaptureInt(a1);
    if ( a2 )
      *a2 = 0;
    return 0LL;
  }
  else
  {
    if ( a2 )
      *a2 = *((_DWORD *)a1 + 4);
    return (struct tagWND *)*((_QWORD *)a1 + 1);
  }
}
