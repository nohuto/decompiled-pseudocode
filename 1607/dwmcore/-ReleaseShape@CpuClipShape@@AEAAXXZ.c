/*
 * XREFs of ?ReleaseShape@CpuClipShape@@AEAAXXZ @ 0x180111EE4
 * Callers:
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x180111F20 (--1CpuClipShape@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpuClipShape::ReleaseShape(CpuClipShape *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  if ( *((_BYTE *)this + 72) )
  {
    v2 = *(void (__fastcall ****)(_QWORD, __int64))this;
    if ( v2 )
      (**v2)(v2, 1LL);
  }
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 72) = 0;
}
