/*
 * XREFs of ndisMHandleNDKPnPEvents @ 0x1C00D6E04
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0010DE8 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMHandleNDKPnPEvents(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // r8d
  __int64 v5; // r10
  struct _NDIS_NDK_BLOCK *v6; // r9
  unsigned int v7; // ebx
  char v8; // r11
  unsigned __int8 v9; // al
  __int64 v10; // rax

  NDKBlock = ndisGetNDKBlock(a1);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 16);
  v6 = NDKBlock;
  v7 = *(_DWORD *)(v2 + 24);
  v8 = 0;
  if ( !NDKBlock )
    return (unsigned int)-1073741808;
  v9 = *(_BYTE *)(v3 + 32);
  if ( v9 > 6u || v9 == 6 && *(_BYTE *)(v3 + 33) >= 0x32u )
  {
    v8 = 1;
    if ( (*(_BYTE *)(v2 + 1) >= 2u || (*(_DWORD *)(v2 + 160) & 4) != 0)
      && (*(_DWORD *)(v2 + 160) & 2) != 0
      && *(_DWORD *)(v2 + 168) )
    {
      return v4;
    }
  }
  else if ( v5 || v7 )
  {
    return (unsigned int)-1073741808;
  }
  if ( *(_DWORD *)(v2 + 8) != 13 )
  {
    if ( !v8 || !v5 && !v7 )
    {
      if ( *((_BYTE *)v6 + 24) )
      {
        *((_BYTE *)v6 + 24) = 0;
        return v4;
      }
      return (unsigned int)-1073741436;
    }
    return (unsigned int)-1073741808;
  }
  if ( v8 && (!v5 || v7 < 0x38) )
    return (unsigned int)-1073741808;
  if ( *((_BYTE *)v6 + 24) )
    return (unsigned int)-1073741436;
  *((_BYTE *)v6 + 24) = 1;
  if ( v8 )
  {
    *((_OWORD *)v6 + 2) = *(_OWORD *)v5;
    *((_OWORD *)v6 + 3) = *(_OWORD *)(v5 + 16);
    *((_OWORD *)v6 + 4) = *(_OWORD *)(v5 + 32);
    *((_QWORD *)v6 + 10) = (char *)v6 + 88;
    v10 = *(_QWORD *)(v5 + 48);
    *(_OWORD *)((char *)v6 + 88) = *(_OWORD *)v10;
    *(_OWORD *)((char *)v6 + 104) = *(_OWORD *)(v10 + 16);
    *(_OWORD *)((char *)v6 + 120) = *(_OWORD *)(v10 + 32);
    *(_OWORD *)((char *)v6 + 136) = *(_OWORD *)(v10 + 48);
    *(_OWORD *)((char *)v6 + 152) = *(_OWORD *)(v10 + 64);
    *(_OWORD *)((char *)v6 + 168) = *(_OWORD *)(v10 + 80);
    *((_QWORD *)v6 + 23) = *(_QWORD *)(v10 + 96);
  }
  return v4;
}
