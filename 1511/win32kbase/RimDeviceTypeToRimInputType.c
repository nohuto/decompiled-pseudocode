/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C001152C
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C000BCF8 (RIMRemoveDevOfInputType.c)
 *     rimCompleteReads @ 0x1C000F0AC (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C000F190 (rimIssueReads.c)
 *     RIMAllocateHidDesc @ 0x1C000F32C (RIMAllocateHidDesc.c)
 *     RIMOpenDev @ 0x1C00105AC (RIMOpenDev.c)
 *     rimDoRimDevChangeCallback @ 0x1C0011374 (rimDoRimDevChangeCallback.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00113D0 (RIMDirectStartStopDeviceRead.c)
 *     rimProcessInput @ 0x1C0086E0C (rimProcessInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return (*(_DWORD *)(a1 + 176) & 0x400) != 0 ? 8 : 16;
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 308) )
  {
    v4 = *(_QWORD *)(a1 + 416);
    result = 8LL;
    if ( *(_DWORD *)(v4 + 24) != 8 )
    {
      if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 6) <= 1 )
        return 4LL;
      if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 1) <= 4 )
        return 16LL;
      return 0LL;
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 48) == 3 )
      return 0LL;
    return 32LL;
  }
  return result;
}
