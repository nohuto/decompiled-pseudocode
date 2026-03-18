/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C006783C
 * Callers:
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C007CCE8 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C0082544 (--1FxTagTracker@@QEAA@XZ.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C008CA28 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0093828 (--1FxPkgIo@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall `vector destructor iterator'(
        char *__t,
        unsigned __int64 __s,
        unsigned __int64 __n,
        void (__fastcall *__f)(void *))
{
  unsigned __int64 v5; // rdi
  char *v7; // rbx

  v5 = __n;
  v7 = &__t[__n * __s];
  do
  {
    v7 -= __s;
    __f(v7);
    --v5;
  }
  while ( v5 );
}
