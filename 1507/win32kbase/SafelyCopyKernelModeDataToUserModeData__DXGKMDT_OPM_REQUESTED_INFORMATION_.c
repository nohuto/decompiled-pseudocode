/*
 * XREFs of SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C0067BB8
 * Callers:
 *     NtGdiGetOPMInformation @ 0x1C0067B40 (NtGdiGetOPMInformation.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C0470 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(_OWORD *a1, _OWORD *a2)
{
  _OWORD *v3; // rbx
  __int64 v4; // rax

  v3 = a1;
  ProbeForWrite(a1, 0x1000uLL, 1u);
  v4 = 32LL;
  do
  {
    *v3 = *a2;
    v3[1] = a2[1];
    v3[2] = a2[2];
    v3[3] = a2[3];
    v3[4] = a2[4];
    v3[5] = a2[5];
    v3[6] = a2[6];
    v3 += 8;
    *(v3 - 1) = a2[7];
    a2 += 8;
    --v4;
  }
  while ( v4 );
  return 0LL;
}
