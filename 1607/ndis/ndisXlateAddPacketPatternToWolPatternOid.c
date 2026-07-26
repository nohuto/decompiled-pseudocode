/*
 * XREFs of ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00CB324
 * Callers:
 *     ndisOidPreAddWakeUpPattern @ 0x1C00C8900 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisXlateAddPacketPatternToWolPatternOid(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi
  _DWORD *v7; // rbp
  unsigned int v8; // r12d
  _DWORD *v9; // rax
  _DWORD *v10; // r15
  int v11; // eax

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
    v7 = *(_DWORD **)(a1 + 40);
    v8 = v7[2] + 196 + v7[4];
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x7877444Eu);
    v10 = v9;
    if ( v9 )
    {
      memset(v9, 0, v8);
      *v10 = 12845440;
      v10[37] = v7[1];
      v10[2] = *v7;
      v10[40] = 196;
      v10[3] = 1;
      v11 = v7[2];
      v10[41] = v11;
      v10[42] = v11 + 196;
      v10[43] = v7[4];
      memmove(v10 + 49, v7 + 6, (unsigned int)v7[2]);
      memmove((char *)v10 + (unsigned int)v10[42], (char *)v7 + (unsigned int)v7[3], (unsigned int)v7[4]);
      v6[3] = v10;
      *(_DWORD *)(a1 + 32) = -50265846;
      *(_QWORD *)(a1 + 40) = v10;
      *(_DWORD *)(a1 + 48) = v8;
      *(_QWORD *)(a1 + 144) = v6;
      return v2;
    }
    if ( (unsigned __int8)byte_1C00895D2 >= 4u )
      WPP_SF_q(0x6Du, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, a1);
    ExFreePoolWithTag(v6, 0);
  }
  else if ( (unsigned __int8)byte_1C00895D2 >= 4u )
  {
    WPP_SF_q(0x6Cu, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, a1);
  }
  v2 = -1073741670;
  *a2 = 1;
  return v2;
}
