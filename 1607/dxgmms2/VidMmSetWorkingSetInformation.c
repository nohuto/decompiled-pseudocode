/*
 * XREFs of VidMmSetWorkingSetInformation @ 0x1C001D650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmSetWorkingSetInformation(VIDMM_PROCESS *a1, struct _D3DKMT_WORKINGSETINFO *a2)
{
  return VIDMM_PROCESS::SetWorkingSetInformation(a1, a2);
}
