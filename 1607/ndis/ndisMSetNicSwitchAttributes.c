/*
 * XREFs of ndisMSetNicSwitchAttributes @ 0x1C00B2A98
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AEC30 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMSetNicSwitchAttributes(void **a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned __int8 v6; // r9
  unsigned __int16 v7; // r10
  __int64 v8; // rcx
  unsigned __int8 v9; // r8
  unsigned __int16 v10; // dx
  unsigned int v11; // ebx
  PVOID PoolWithTag; // rax
  PVOID v13; // rax
  PVOID v14; // rax
  unsigned __int16 *v15; // rdx
  unsigned int v16; // eax
  _WORD *v17; // rdx
  unsigned __int16 v18; // ax
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qq(0x7Cu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_BYTE *)(v5 + 1);
  if ( v6
    && (v7 = *(_WORD *)(v5 + 2), v7 >= 0x20u)
    && (v8 = *(_QWORD *)(a2 + 40), (v9 = *(_BYTE *)(v8 + 1)) != 0)
    && (v10 = *(_WORD *)(v8 + 2), v10 >= 0x20u) )
  {
    if ( a1[452] || a1[451] )
    {
      v4 = -1073676283;
      goto LABEL_19;
    }
    if ( v9 >= 2u && (v10 < 0x74u || *(_DWORD *)(v8 + 12) || *(_DWORD *)(v8 + 16) || *(_DWORD *)(v8 + 20))
      || v6 >= 2u && (v7 < 0x74u || *(_DWORD *)(v5 + 12) || *(_DWORD *)(v5 + 16) || *(_DWORD *)(v5 + 20)) )
    {
      v4 = -1073741637;
    }
    else
    {
      v11 = 132;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
      a1[452] = PoolWithTag;
      if ( PoolWithTag )
      {
        v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
        a1[453] = v13;
        if ( v13 )
        {
          v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
          a1[451] = v14;
          if ( v14 )
          {
            memset(a1[453], 0, 0x84uLL);
            memset(a1[452], 0, 0x84uLL);
            memset(a1[451], 0, 0x84uLL);
            v15 = *(unsigned __int16 **)(a2 + 32);
            v16 = v15[1];
            if ( (unsigned __int16)v16 >= 0x84u )
              v16 = 132;
            memmove(a1[451], v15, v16);
            v17 = *(_WORD **)(a2 + 40);
            v18 = v17[1];
            if ( v18 < 0x84u )
              v11 = v18;
            memmove(a1[452], v17, v11);
            memmove(a1[453], *(const void **)(a2 + 40), v11);
            goto LABEL_19;
          }
        }
      }
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  v20 = a1[452];
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    a1[452] = 0LL;
  }
  v21 = a1[453];
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    a1[453] = 0LL;
  }
  v22 = a1[451];
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    a1[451] = 0LL;
  }
LABEL_19:
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
  {
    v23 = v4;
    WPP_SF_qqd(0x7Du, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, a2, v23);
  }
  return v4;
}
