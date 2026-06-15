/*
 * XREFs of AudioServerCloseVpoContext @ 0x180001860
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCVpoContextProxy@@QEAAPEAXI@Z @ 0x180001888 (--_GCVpoContextProxy@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall AudioServerCloseVpoContext(CVpoContextProxy **a1, unsigned int a2)
{
  CVpoContextProxy *v3; // rcx

  v3 = *a1;
  if ( v3 )
    CVpoContextProxy::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return 0LL;
}
