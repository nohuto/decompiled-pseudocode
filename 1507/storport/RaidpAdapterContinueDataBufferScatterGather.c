/*
 * XREFs of RaidpAdapterContinueDataBufferScatterGather @ 0x1C0024AD0
 * Callers:
 *     <none>
 * Callees:
 *     RaidXrbSetDataBufferAddress @ 0x1C0004930 (RaidXrbSetDataBufferAddress.c)
 *     RaidAdapterScatterGatherExecute @ 0x1C000F13C (RaidAdapterScatterGatherExecute.c)
 *     RaidAdapterRequestComplete @ 0x1C00221D8 (RaidAdapterRequestComplete.c)
 */

char __fastcall RaidpAdapterContinueDataBufferScatterGather(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // eax

  v4 = *(_QWORD *)(a1 + 64);
  a4[18] = a3;
  if ( (int)RaidXrbSetDataBufferAddress(a4, v4, 1) < 0 )
  {
    *(_BYTE *)(a4[20] + 3LL) = 48;
    v7 = a4[20];
    if ( *(_BYTE *)(v7 + 2) == 40 )
      *(_DWORD *)(v7 + 44) = -1073741670;
    else
      *(_DWORD *)(v7 + 64) = -1073741670;
    goto LABEL_7;
  }
  v8 = RaidAdapterScatterGatherExecute(v4, (__int64)a4, v6);
  if ( v8 < 0 )
  {
    *(_BYTE *)(a4[20] + 3LL) = 4;
LABEL_7:
    LOBYTE(v8) = RaidAdapterRequestComplete(v4, (__int64)a4);
  }
  return v8;
}
