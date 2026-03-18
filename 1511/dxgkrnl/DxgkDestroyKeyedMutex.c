/*
 * XREFs of DxgkDestroyKeyedMutex @ 0x1C005C0B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C005C154 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkDestroyKeyedMutex(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  unsigned int v4; // ebx
  __int64 v5; // r8

  v3 = (unsigned int *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2053);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = DXGKEYEDMUTEX::DestroyLocal(*v3);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v5, 2053);
  return v4;
}
