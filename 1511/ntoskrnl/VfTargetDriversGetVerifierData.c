/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x1406C3E84
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x1406C3F5C (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x14020BDD4 (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x1406B8CAC (VfDriverIsKernelImageAddress.c)
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
      if ( dword_1402DB780 < 2 )
        return 0LL;
      goto LABEL_7;
    }
    v2 = dword_1402DB780 == 0;
  }
  if ( v2 )
    return 0LL;
LABEL_7:
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[6];
}
