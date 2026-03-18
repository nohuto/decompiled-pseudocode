/*
 * XREFs of ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C0038118
 * Callers:
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00317CC (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00364D8 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::ComputeNewWorkingSet(VIDMM_SEGMENT *this, unsigned int a2)
{
  __int64 v2; // r9

  if ( a2 )
  {
    v2 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
    *((_QWORD *)this + 12) = v2 * (unsigned __int64)(unsigned int)dword_1C0027218 / 0x64 / a2;
    *((_QWORD *)this + 13) = v2 * (unsigned __int64)(unsigned int)dword_1C002721C / 0x64 / a2;
  }
}
