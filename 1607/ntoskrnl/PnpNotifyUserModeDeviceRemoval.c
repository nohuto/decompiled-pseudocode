/*
 * XREFs of PnpNotifyUserModeDeviceRemoval @ 0x1404851F8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DE34 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 */

NTSTATUS __fastcall PnpNotifyUserModeDeviceRemoval(__int64 a1, _WORD *a2, __int128 *a3, __int64 a4, __int64 a5)
{
  __int128 v5; // xmm6
  __int64 v6; // r12
  void *v7; // r15
  __int64 v8; // r13
  NTSTATUS result; // eax
  int v14; // ebp
  __int128 v15; // xmm0
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  wchar_t pszDest[200]; // [rsp+20h] [rbp-1E8h] BYREF

  v5 = *(_OWORD *)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = (void *)(a1 + 152);
  v8 = *(_QWORD *)(a1 + 56);
  result = RtlStringCchCopyW(pszDest, 0xC8uLL, (NTSTRSAFE_PCWSTR)(a1 + 152));
  v14 = result;
  if ( !result )
  {
    v15 = *a3;
    *(_QWORD *)(a1 + 48) = a4;
    v16 = -1LL;
    *(_OWORD *)(a1 + 104) = v15;
    *(_QWORD *)(a1 + 56) = a5;
    while ( *a2 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a2[v17] );
      memmove(v7, a2, 2 * v17 + 2);
      v14 = PiUEventNotifyUserMode(a1);
      if ( v14 < 0 )
        break;
      v18 = -1LL;
      do
        ++v18;
      while ( a2[v18] );
      a2 += v18 + 1;
    }
    *(_QWORD *)(a1 + 48) = v6;
    *(_OWORD *)(a1 + 104) = v5;
    *(_QWORD *)(a1 + 56) = v8;
    do
      ++v16;
    while ( pszDest[v16] );
    memmove(v7, pszDest, 2 * v16 + 2);
    return v14;
  }
  return result;
}
