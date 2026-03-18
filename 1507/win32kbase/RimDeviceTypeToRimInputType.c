/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C001A844
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C001A680 (RIMDirectStartStopDeviceRead.c)
 *     rimProcessInput @ 0x1C006F0BC (rimProcessInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C0075344 (RIMRemoveDevOfInputType.c)
 *     rimCompleteReads @ 0x1C0075A68 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0075B20 (rimIssueReads.c)
 *     rimDoRimDevChangeCallback @ 0x1C0076588 (rimDoRimDevChangeCallback.c)
 *     RIMOpenDev @ 0x1C0076E4C (RIMOpenDev.c)
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
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
      return (*(_DWORD *)(a1 + 184) & 0x400) != 0 ? 8 : 16;
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 316) )
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
