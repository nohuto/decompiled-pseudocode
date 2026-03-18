/*
 * XREFs of ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0003D28
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C003228C (--1VIDMM_DEVICE@@QEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0003D78 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

char *__fastcall VIDMM_DEVICE_PAGING_QUEUE::`vector deleting destructor'(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    this,
    0x98uLL,
    *((_DWORD *)this - 2),
    (void (*)(void *))VIDMM_DEVICE_PAGING_QUEUE::~VIDMM_DEVICE_PAGING_QUEUE);
  operator delete(v1);
  return v1;
}
