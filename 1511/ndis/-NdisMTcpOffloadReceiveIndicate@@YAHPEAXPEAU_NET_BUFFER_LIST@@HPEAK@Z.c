/*
 * XREFs of ?NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z @ 0x1C00603A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?ndisNumDataBytesInNblChain@@YA_KPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00604A8 (-ndisNumDataBytesInNblChain@@YA_KPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

__int64 __fastcall NdisMTcpOffloadReceiveIndicate(
        __int64 *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  __int64 v9; // r10
  unsigned int DatapathEventsMask; // r11d
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  struct NDIS_PCW_CONTEXT v14; // [rsp+30h] [rbp-28h] BYREF

  v4 = *a1;
  v9 = *(_QWORD *)(*a1 + 16);
  v14.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v9 + 40);
  DatapathEventsMask = *(_DWORD *)(v9 + 48);
  v14.CurrentCpu = -1;
  v11 = *(_DWORD *)(v9 + 80);
  v14.DatapathEventsMask = DatapathEventsMask;
  v14.DatapathCyclesMask = v11;
  if ( (DatapathEventsMask & 0x8000) != 0 )
  {
    ndisPcwAddEvent(&v14, 0x1FuLL, 1uLL);
    DatapathEventsMask = v14.DatapathEventsMask;
  }
  if ( (DatapathEventsMask & 0x20000) != 0 )
  {
    v12 = ndisNumDataBytesInNblChain(a2);
    ndisPcwAddEvent(&v14, 0x21uLL, v12);
  }
  return (*(__int64 (__fastcall **)(__int64 *, struct _NET_BUFFER_LIST *, _QWORD, unsigned int *))(v4 + 672))(
           a1,
           a2,
           a3,
           a4);
}
