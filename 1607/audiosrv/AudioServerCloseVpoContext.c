/*
 * XREFs of AudioServerCloseVpoContext @ 0x180072420
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCVpoContextProxy@@QEAAPEAXI@Z @ 0x180070A08 (--_GCVpoContextProxy@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall AudioServerCloseVpoContext(CVpoContextProxy **a1)
{
  CVpoContextProxy *v2; // rcx

  v2 = *a1;
  if ( v2 )
    CVpoContextProxy::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return 0LL;
}
