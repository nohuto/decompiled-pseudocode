/*
 * XREFs of ??0SAVEOBJ@@QEAA@AEAVDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z @ 0x1C0049A0C
 * Callers:
 *     GreSaveDCInternal @ 0x1C0291390 (GreSaveDCInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

SAVEOBJ *__fastcall SAVEOBJ::SAVEOBJ(
        SAVEOBJ *this,
        struct DCOBJ *a2,
        int a3,
        int (*a4)(struct DCOBJ *, int),
        void (*a5)(struct DCOBJ *, int))
{
  *((_QWORD *)this + 2) = a5;
  *((_QWORD *)this + 1) = a2;
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 1) = ((__int64 (__fastcall *)(struct DCOBJ *, _QWORD))a4)(a2, (unsigned int)(a3 + 1));
  return this;
}
