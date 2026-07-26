/*
 * XREFs of ndisSendNBLToFilter @ 0x1C0058FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0010CD4 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0010D10 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C001E204 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C00268AC (ndisFLoopbackNetBufferLists.c)
 */

void __fastcall ndisSendNBLToFilter(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v6; // r14d
  unsigned int v7; // r13d
  struct _NET_BUFFER_LIST *v8; // rbp
  char v9; // r15
  KIRQL v10; // di
  unsigned int v11; // esi
  bool v12; // r12
  struct NDIS_PCW_CONTEXT v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  v14 = (__int64)a2;
  v5 = *(_QWORD *)(a1 + 2576);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *(_BYTE *)v5 == 5
    && (*(_DWORD *)(v5 + 56) & 0x8000) != 0
    && !*(_DWORD *)(v5 + 336)
    && (*(_BYTE *)(a1 + 91) && (*(_WORD *)(a1 + 1820) > 1u || *(_BYTE *)(a1 + 1999))
     || (a4 & 2) != 0
     || (*(_DWORD *)(a1 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _LOCK_STATE_EX *)v5, a2, a3, a4, &v14);
    v8 = (struct _NET_BUFFER_LIST *)v14;
  }
  if ( v8 )
  {
    v9 = 0;
    v10 = 2;
    v11 = *(_DWORD *)(a1 + 80);
    v12 = *(_QWORD *)(a1 + 2560) == a1;
    v13.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
    v13.CurrentCpu = -1;
    v13.DatapathEventsMask = *(_DWORD *)(a1 + 48);
    v13.DatapathCyclesMask = v11;
    if ( v12 && (v11 & 0x80u) != 0 )
    {
      if ( (v6 & 1) == 0 )
      {
        v10 = KfRaiseIrql(2u);
        v9 = 1;
      }
      ndisPcwStartCycleCounter(&v13);
      LOBYTE(v11) = v13.DatapathCyclesMask;
    }
    ndisInvokeNextSendHandler(
      v8,
      v7,
      v6,
      *(struct _NDIS_FILTER_BLOCK **)(a1 + 2576),
      *(void **)(a1 + 2560),
      *(void (**)(void))(a1 + 2656));
    if ( v12 )
    {
      if ( (v11 & 0x80u) != 0 )
        ndisPcwEndCycleCounter(&v13);
      if ( v9 )
      {
        if ( v10 != 2 )
          KeLowerIrql(v10);
      }
    }
  }
}
