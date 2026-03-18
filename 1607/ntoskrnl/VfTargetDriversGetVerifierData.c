/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x14070FF1C
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140701D78 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x14070FFFC (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x140223890 (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140704D38 (VfDriverIsKernelImageAddress.c)
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
      if ( dword_140300AC8 < 2 )
        return 0LL;
      goto LABEL_7;
    }
    v2 = dword_140300AC8 == 0;
  }
  if ( v2 )
    return 0LL;
LABEL_7:
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
