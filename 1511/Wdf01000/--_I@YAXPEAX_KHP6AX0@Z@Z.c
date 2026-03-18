/*
 * XREFs of ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0057508
 * Callers:
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C006A6BC (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C006FEE8 (--1FxTagTracker@@QEAA@XZ.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C007F4D4 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0081874 (--1FxPkgIo@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall `vector destructor iterator'(char *__t, unsigned __int64 __s, int __n, void (__fastcall *__f)(void *))
{
  int v4; // edi
  char *i; // rbx

  v4 = __n;
  for ( i = &__t[__s * __n]; --v4 >= 0; __f(i) )
    i -= __s;
}
