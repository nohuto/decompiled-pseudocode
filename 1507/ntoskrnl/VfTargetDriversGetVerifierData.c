/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140745724
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x140745810 (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x14025B1DC (VfTargetDriversGetNode.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(unsigned __int64 a1)
{
  bool v1; // zf
  _QWORD *Node; // rax

  if ( ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd )
  {
    v1 = KernelVerifier == 0;
  }
  else
  {
    if ( KernelVerifier )
    {
      if ( dword_14032BAE0 < 2 )
        return 0LL;
      goto LABEL_9;
    }
    v1 = dword_14032BAE0 == 0;
  }
  if ( v1 )
    return 0LL;
LABEL_9:
  Node = VfTargetDriversGetNode(a1);
  if ( !Node )
    return 0LL;
  return Node[6];
}
