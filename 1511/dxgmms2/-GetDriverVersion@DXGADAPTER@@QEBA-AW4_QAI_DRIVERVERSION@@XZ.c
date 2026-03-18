/*
 * XREFs of ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0014F68
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C0063C78 (VidSchiReadGlobalConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetDriverVersion(DXGADAPTER *this)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *((_DWORD *)this + 414);
  if ( v1 == 0x2000 )
    return 2000LL;
  if ( v1 == 4864 || *((_QWORD *)this + 86) )
    return 1300LL;
  if ( v1 == 4608 )
    return 1200LL;
  if ( !*((_QWORD *)this + 82) )
    return 1000LL;
  if ( !*((_QWORD *)this + 81) )
    return 1000LL;
  result = 1105LL;
  if ( (*((_DWORD *)this + 343) & 4) == 0 )
    return 1000LL;
  return result;
}
