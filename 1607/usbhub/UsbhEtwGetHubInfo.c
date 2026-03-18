/*
 * XREFs of UsbhEtwGetHubInfo @ 0x1C001DB80
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0013B50 (UsbhHubProcessIsr.c)
 *     UsbhQueryBusRelations @ 0x1C0017A30 (UsbhQueryBusRelations.c)
 *     UsbhEtwLogHubInformation @ 0x1C001BAA8 (UsbhEtwLogHubInformation.c)
 *     UsbhFdoPower_WaitWake @ 0x1C001DF80 (UsbhFdoPower_WaitWake.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C001E6C8 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C0057BD4 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C0057CC0 (UsbhEtwLogHubException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetHubInfo(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 result; // rax

  *(_WORD *)a2 = *(_WORD *)(a1 + 2548);
  *(_WORD *)(a2 + 2) = *(_WORD *)(a1 + 2550);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = *(unsigned __int16 *)(a1 + 5208);
  if ( *(_WORD *)(a1 + 5208) )
    ++*(_DWORD *)(a2 + 4);
  v2 = *(unsigned __int16 *)(a1 + 5210);
  *(_DWORD *)(a2 + 12) = v2;
  if ( v2 )
    ++*(_DWORD *)(a2 + 4);
  v3 = *(unsigned __int16 *)(a1 + 5212);
  *(_DWORD *)(a2 + 16) = v3;
  if ( v3 )
    ++*(_DWORD *)(a2 + 4);
  v4 = *(unsigned __int16 *)(a1 + 5214);
  *(_DWORD *)(a2 + 20) = v4;
  if ( v4 )
    ++*(_DWORD *)(a2 + 4);
  v5 = *(unsigned __int16 *)(a1 + 5216);
  *(_DWORD *)(a2 + 24) = v5;
  if ( v5 )
    ++*(_DWORD *)(a2 + 4);
  v6 = *(unsigned __int16 *)(a1 + 5218);
  *(_DWORD *)(a2 + 28) = v6;
  if ( v6 )
    ++*(_DWORD *)(a2 + 4);
  result = *(unsigned int *)(a1 + 2536);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
