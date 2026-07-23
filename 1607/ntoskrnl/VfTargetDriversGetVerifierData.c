/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x14070FF4C
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x14071002C (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1402236BC (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140704D68 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  bool v2; // zf
  _QWORD *Node; // rax

  if ( VfDriverIsKernelImageAddress(a1) )
  {
    v2 = KernelVerifier == 0;
  }
  else
  {
    if ( KernelVerifier )
    {
      if ( dword_140300AA8 < 2 )
        return 0LL;
      goto LABEL_7;
    }
    v2 = dword_140300AA8 == 0;
  }
  if ( v2 )
    return 0LL;
LABEL_7:
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
