/*
 * XREFs of ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0003D78
 * Callers:
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0003D28 (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0011FB0 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C004B3E4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  int v4; // edi
  char *i; // rbx

  v4 = a3;
  for ( i = &a1[a2 * a3]; --v4 >= 0; a4(i) )
    i -= a2;
}
