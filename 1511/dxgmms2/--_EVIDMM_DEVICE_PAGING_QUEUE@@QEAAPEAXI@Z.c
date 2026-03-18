/*
 * XREFs of ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0010278
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C0053BA4 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C00101FC (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 */

char *__fastcall VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    160LL,
    *((_DWORD *)this - 2),
    (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::~VIDMM_DEVICE_PAGING_QUEUE);
  operator delete[](v1);
  return v1;
}
