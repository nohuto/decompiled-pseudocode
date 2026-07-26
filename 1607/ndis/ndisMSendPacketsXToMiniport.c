/*
 * XREFs of ndisMSendPacketsXToMiniport @ 0x1C0025910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisMAllocSGList @ 0x1C004BD20 (ndisMAllocSGList.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisMCheckPacketAndPad @ 0x1C0053EAC (ndisMCheckPacketAndPad.c)
 *     ndisMLoopbackPacketX @ 0x1C00555D0 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteX @ 0x1C0055A20 (ndisMSendCompleteX.c)
 */

char __fastcall ndisMSendPacketsXToMiniport(__int64 a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  _UNKNOWN **v3; // rax
  __int64 v4; // rdi
  unsigned int v7; // esi
  struct _NDIS_PACKET **v8; // r12
  struct _NDIS_PACKET **v9; // r14
  char v10; // r8
  unsigned __int8 NdisPacketFlags; // dl
  bool v12; // zf
  __int64 v13; // r13
  struct _NDIS_PACKET *v14; // rdi
  bool v15; // cl
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  char v18; // [rsp+70h] [rbp+18h]

  v3 = &retaddr;
  v4 = a3;
  v18 = 0;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    LOBYTE(v3) = WPP_SF_qqd(14LL, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2, a3);
  v7 = 0;
  v8 = a2;
  v9 = a2;
  if ( (_DWORD)v4 )
  {
    v13 = v4;
    do
    {
      v14 = *v9;
      *(unsigned __int64 *)((char *)(*v9)->Reserved + (*v9)->Private.NdisPacketOobOffset) = 0LL;
      if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && (unsigned int)ndisMCheckPacketAndPad(a1, v14)
        || ((LODWORD(v3) = *(_DWORD *)(a1 + 120), ((unsigned __int16)v3 & 0x4000) != 0)
         || (v15 = ((unsigned int)v3 & 0x8800000) != 0,
             LOBYTE(v3) = SLOBYTE(v14->Private.Flags) >= 0,
             (v15 & (unsigned __int8)v3) != 0)
          ? (LOBYTE(v3) = ndisMLoopbackPacketX(a1, v14), v10 = (char)v3, v18 = (char)v3)
          : (v10 = v18),
            (NdisPacketFlags = v14->Private.NdisPacketFlags, (NdisPacketFlags & 4) != 0) || v10) )
      {
        LOBYTE(v3) = ndisMSendCompleteX((struct _NDIS_MINIPORT_BLOCK *)a1, v14);
        if ( v7 )
        {
          LOBYTE(v3) = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET **, _QWORD))(a1 + 1808))(
                         *(_QWORD *)(a1 + 24),
                         v8,
                         v7);
          v7 = 0;
          v8 = v9 + 1;
        }
      }
      else if ( (*(_DWORD *)(a1 + 120) & 0x40) != 0 )
      {
        LOBYTE(v3) = ndisMAllocSGList((struct _NDIS_MINIPORT_BLOCK *)a1, v14);
      }
      else
      {
        v12 = (*(_BYTE *)(a1 + 928) & 1) == 0;
        v14->Private.NdisPacketFlags = NdisPacketFlags | 0x10;
        if ( v12 )
        {
          LODWORD(v3) = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD))(a1 + 4128))(
                          *(_QWORD *)(a1 + 24),
                          v14,
                          v14->Private.Flags);
          if ( (_DWORD)v3 != 259 )
            LOBYTE(v3) = ndisMSendCompleteX((struct _NDIS_MINIPORT_BLOCK *)a1, v14);
        }
        else
        {
          ++v7;
        }
      }
      ++v9;
      --v13;
    }
    while ( v13 );
    if ( v7 )
      LOBYTE(v3) = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET **, _QWORD))(a1 + 1808))(
                     *(_QWORD *)(a1 + 24),
                     v8,
                     v7);
  }
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    LOBYTE(v3) = WPP_SF_qqd(15LL, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2, v7);
  return (char)v3;
}
