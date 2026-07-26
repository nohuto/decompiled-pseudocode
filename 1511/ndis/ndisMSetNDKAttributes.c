/*
 * XREFs of ndisMSetNDKAttributes @ 0x1C00D0EFC
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C009A930 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0011E40 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMSetNDKAttributes(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  _OWORD *PoolWithTag; // rax
  _OWORD *v8; // rbp
  __int64 v9; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  if ( !MmIsThisAnNtAsSystem() )
    return 3221225659LL;
  if ( *(_BYTE *)(a2 + 1) == 1
    && *(_WORD *)(a2 + 2) == 16
    && v2
    && *(_BYTE *)v2 == 0x80
    && *(_BYTE *)(v2 + 1) == 1
    && *(_WORD *)(v2 + 2) >= 0x38u
    && *(_QWORD *)(v2 + 48) )
  {
    if ( ndisGetNDKBlock(a1) )
    {
      return (unsigned int)-1073741808;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x726B444Eu);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xC0uLL);
        v8[2] = *(_OWORD *)v2;
        v8[3] = *(_OWORD *)(v2 + 16);
        v8[4] = *(_OWORD *)(v2 + 32);
        *((_QWORD *)v8 + 10) = *(_QWORD *)(v2 + 48);
        v9 = *(_QWORD *)(v2 + 48);
        *(_OWORD *)((char *)v8 + 88) = *(_OWORD *)v9;
        *(_OWORD *)((char *)v8 + 104) = *(_OWORD *)(v9 + 16);
        *(_OWORD *)((char *)v8 + 120) = *(_OWORD *)(v9 + 32);
        *(_OWORD *)((char *)v8 + 136) = *(_OWORD *)(v9 + 48);
        *(_OWORD *)((char *)v8 + 152) = *(_OWORD *)(v9 + 64);
        *(_OWORD *)((char *)v8 + 168) = *(_OWORD *)(v9 + 80);
        *((_QWORD *)v8 + 23) = *(_QWORD *)(v9 + 96);
        *((_QWORD *)v8 + 10) = (char *)v8 + 88;
        *((_BYTE *)v8 + 24) = *(_BYTE *)(a2 + 4);
        *((_QWORD *)v8 + 1) = 0LL;
        *((_DWORD *)v8 + 4) = 0;
        a1->NDKBlock = v8;
      }
      else
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_q(0xAu, &WPP_5fa83df1bdfe88950d38f0d0c6f81eb5_Traceguids, (__int64)a1);
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
