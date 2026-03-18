/*
 * XREFs of ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C001C0DC
 * Callers:
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00698CC (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01304C0 (DxgkUpdateGpuVirtualAddress.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C01442F8 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0017BF4 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

char *__fastcall DXGALLOCATIONREFERENCE::`vector deleting destructor'(DXGALLOCATIONREFERENCE *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    8LL,
    *((_DWORD *)this - 2),
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  operator delete(v1);
  return v1;
}
