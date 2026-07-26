/*
 * XREFs of ndisMUpdateNameOnPMWakePacket @ 0x1C0049568
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C0049660 (ndisMValidatePMWakePacket.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_SqZ @ 0x1C0048A54 (WPP_SF_SqZ.c)
 *     WPP_SF_dqZ @ 0x1C0048B1C (WPP_SF_dqZ_ea_1C0048B1C.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C0049738 (ndisMValidatePMWakePacketForMagicPacket.c)
 */

void __fastcall ndisMUpdateNameOnPMWakePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rdi
  void *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx

  *(_WORD *)(a2 + 12) = 0;
  if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
  {
    if ( (unsigned __int8)byte_1C00895D5 >= 4u )
      WPP_SF_qZ(0x7Eu, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, a1, *(unsigned __int16 **)(a1 + 3912));
  }
  else
  {
    v6 = *(__int64 **)(a1 + 968);
    if ( v6 )
    {
      while ( *((_DWORD *)v6 + 49) != *(_DWORD *)(a2 + 8) )
      {
        v6 = (__int64 *)*v6;
        if ( !v6 )
          goto LABEL_7;
      }
      *(_WORD *)(a2 + 12) = *((_WORD *)v6 + 32);
      v7 = (void *)(a2 + 14);
      memset(v7, 0, 0x80uLL);
      memcpy_s(v7, 0x7EuLL, (char *)v6 + 66, *((unsigned __int16 *)v6 + 32));
      if ( (unsigned __int8)byte_1C00895D5 >= 4u )
        WPP_SF_SqZ(v9, v8, (const wchar_t *)v7, a1, *(_QWORD *)(a1 + 3912));
    }
    else
    {
LABEL_7:
      if ( (unsigned __int8)byte_1C00895D5 >= 3u )
        WPP_SF_dqZ(v5, v4, *(_DWORD *)(a2 + 8), a1, *(_QWORD *)(a1 + 3912));
    }
  }
}
