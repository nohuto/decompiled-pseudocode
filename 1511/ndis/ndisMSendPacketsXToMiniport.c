/*
 * XREFs of ndisMSendPacketsXToMiniport @ 0x1C00253E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisMAllocSGList @ 0x1C0047730 (ndisMAllocSGList.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisMCheckPacketAndPad @ 0x1C004F448 (ndisMCheckPacketAndPad.c)
 *     ndisMLoopbackPacketX @ 0x1C0050A0C (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteX @ 0x1C0050E50 (ndisMSendCompleteX.c)
 */

__int64 __fastcall ndisMSendPacketsXToMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned int v7; // esi
  struct _NDIS_PACKET **v8; // r12
  struct _NDIS_PACKET **v9; // r14
  __int64 v10; // r13
  struct _NDIS_PACKET *v11; // rdi
  unsigned int Flags; // ecx
  char v13; // r8
  unsigned __int8 NdisPacketFlags; // dl
  bool v15; // zf
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  char v17; // [rsp+70h] [rbp+18h]

  result = (__int64)&retaddr;
  v4 = a3;
  v17 = 0;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    result = WPP_SF_qqd(14LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, a3);
  v7 = 0;
  v8 = a2;
  v9 = a2;
  if ( (_DWORD)v4 )
  {
    v10 = v4;
    do
    {
      v11 = *v9;
      *(unsigned __int64 *)((char *)(*v9)->Reserved + (*v9)->Private.NdisPacketOobOffset) = 0LL;
      if ( (a1->SendFlags & 8) != 0 && (unsigned int)ndisMCheckPacketAndPad(a1, v11)
        || ((Flags = a1->Flags, (Flags & 0x4000) == 0)
         && ((result = v11->Private.Flags, (result & 0x80u) != 0LL) || (Flags & 0x8800000) == 0)
          ? (v13 = v17)
          : (result = ndisMLoopbackPacketX(a1, v11), v13 = result, v17 = result),
            (NdisPacketFlags = v11->Private.NdisPacketFlags, (NdisPacketFlags & 4) != 0) || v13) )
      {
        result = ndisMSendCompleteX(a1, v11);
        if ( v7 )
        {
          result = ((__int64 (__fastcall *)(void *, struct _NDIS_PACKET **, _QWORD))a1->WSendPacketsHandler)(
                     a1->MiniportAdapterContext,
                     v8,
                     v7);
          v7 = 0;
          v8 = v9 + 1;
        }
      }
      else if ( (a1->Flags & 0x40) != 0 )
      {
        result = ndisMAllocSGList(a1, v11);
      }
      else
      {
        v15 = (a1->SendFlags & 1) == 0;
        v11->Private.NdisPacketFlags = NdisPacketFlags | 0x10;
        if ( v15 )
        {
          result = ((__int64 (__fastcall *)(void *, struct _NDIS_PACKET *, _QWORD))a1->SendHandler)(
                     a1->MiniportAdapterContext,
                     v11,
                     v11->Private.Flags);
          if ( (_DWORD)result != 259 )
            result = ndisMSendCompleteX(a1, v11);
        }
        else
        {
          ++v7;
        }
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    if ( v7 )
      result = ((__int64 (__fastcall *)(void *, struct _NDIS_PACKET **, _QWORD))a1->WSendPacketsHandler)(
                 a1->MiniportAdapterContext,
                 v8,
                 v7);
  }
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    return WPP_SF_qqd(15LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, v7);
  return result;
}
