/*
 * XREFs of PdcTaskClientRequest @ 0x1C00E4AEC
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C004A520 (ndisPMPDCTaskClient.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004AD9C (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00C9840 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 * Callees:
 *     PdcPortSendMessageSynchronously @ 0x1C0074AA8 (PdcPortSendMessageSynchronously.c)
 *     PdcAcquireRwLockExclusive @ 0x1C00E4C38 (PdcAcquireRwLockExclusive.c)
 *     PdcReleaseRwLockExclusive @ 0x1C00E4C68 (PdcReleaseRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // edi
  __int64 v5; // rcx
  _BYTE v7[40]; // [rsp+20h] [rbp-308h] BYREF
  int v8; // [rsp+48h] [rbp-2E0h]
  bool v9; // [rsp+50h] [rbp-2D8h]

  if ( a1 && *(_DWORD *)a1 == 1667458128 )
  {
    PdcAcquireRwLockExclusive(a1 + 8);
    if ( !a2 && !*(_DWORD *)(a1 + 48) )
    {
      v4 = -1073741823;
LABEL_15:
      PdcReleaseRwLockExclusive(a1 + 8);
      return (unsigned int)v4;
    }
    v4 = 0;
    if ( a2 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
LABEL_12:
        if ( a2 )
        {
          ++*(_DWORD *)(a1 + 48);
          goto LABEL_15;
        }
        goto LABEL_13;
      }
    }
    else if ( *(_DWORD *)(a1 + 48) != 1 )
    {
LABEL_13:
      --*(_DWORD *)(a1 + 48);
      goto LABEL_15;
    }
    v5 = *(_QWORD *)(a1 + 40);
    v8 = 7;
    v9 = a2 != 0;
    PdcPortSendMessageSynchronously(v5, (__int64)v7);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_15;
    goto LABEL_12;
  }
  return (unsigned int)-1073741585;
}
