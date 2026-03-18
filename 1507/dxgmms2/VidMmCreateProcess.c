/*
 * XREFs of VidMmCreateProcess @ 0x1C0005EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C000DF74 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1C0036590 (--0VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00365E0 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 */

VIDMM_PROCESS *__fastcall VidMmCreateProcess(struct DXGPROCESS *a1)
{
  VIDMM_PROCESS *result; // rax
  VIDMM_PROCESS *v3; // rbx
  unsigned int v4; // edx

  result = (VIDMM_PROCESS *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x4B677844u);
  if ( result )
  {
    result = VIDMM_PROCESS::VIDMM_PROCESS(result);
    v3 = result;
    if ( result )
    {
      if ( (int)VIDMM_PROCESS::Init(result, a1) < 0 )
      {
        VIDMM_PROCESS::`scalar deleting destructor'(v3, v4);
        return 0LL;
      }
      else
      {
        return v3;
      }
    }
  }
  return result;
}
