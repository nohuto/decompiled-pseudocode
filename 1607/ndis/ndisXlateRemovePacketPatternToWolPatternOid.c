/*
 * XREFs of ndisXlateRemovePacketPatternToWolPatternOid @ 0x1C00CB690
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00C9440 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisXlateRemovePacketPatternToWolPatternOid(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi

  v2 = 0;
  *a2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    *(_DWORD *)v6 = *(_DWORD *)(a1 + 32);
    v6[1] = *(_QWORD *)(a1 + 40);
    *((_DWORD *)v6 + 4) = *(_DWORD *)(a1 + 48);
    *((_DWORD *)v6 + 6) = *(_DWORD *)(a1 + 152);
    *(_DWORD *)(a1 + 32) = -50265845;
    *(_QWORD *)(a1 + 40) = v6 + 3;
    *(_DWORD *)(a1 + 48) = 4;
    *(_QWORD *)(a1 + 144) = v6;
  }
  else
  {
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_q(0x71u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, a1);
    v2 = -1073741670;
    *a2 = 1;
  }
  return v2;
}
