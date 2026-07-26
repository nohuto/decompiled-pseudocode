/*
 * XREFs of ndisSetBusySync @ 0x1C0067C58
 * Callers:
 *     ndisMDoOidRequest @ 0x1C0008EC8 (ndisMDoOidRequest.c)
 *     ndisMResetMiniportInternal @ 0x1C005ABD8 (ndisMResetMiniportInternal.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00982A0 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00A85C4 (ndisDevicePnPEventNotifyMiniport.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00E0E20 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E3284 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisSSInvalidateOidCache @ 0x1C0011E48 (ndisSSInvalidateOidCache.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_qq @ 0x1C0049D88 (Template_qq.c)
 *     ndisCancelIdleRequestSync @ 0x1C006654C (ndisCancelIdleRequestSync.c)
 */

void __fastcall ndisSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, int a2, unsigned int a3)
{
  __int64 SelectiveSuspend; // rbx
  __int16 i; // bp
  KIRQL v8; // al
  int v9; // ecx
  KIRQL v10; // r9
  __int64 v11; // rcx
  __int128 *v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-28h]

  SelectiveSuspend = (__int64)a1->SelectiveSuspend;
  for ( i = 0; ; ++i )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    v9 = *(_DWORD *)(SelectiveSuspend + 480);
    v10 = v8;
    if ( (v9 & 0x14) == 0 || (v9 & 0x200) != 0 )
      break;
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
    if ( !i )
    {
      if ( (unsigned __int8)byte_1C0083716 >= 4u )
        WPP_SF_qD(0x22u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, (__int64)a1, a2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      {
        LODWORD(v14) = a2;
        Template_qq(v11, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, v14);
      }
    }
    ndisCancelIdleRequestSync(a1, a2, a3, 1);
  }
  switch ( a2 )
  {
    case '!':
      *(_DWORD *)(SelectiveSuspend + 488) |= 1u;
      v12 = &xmmword_1C0075970;
      v13 = 0;
      while ( *(_DWORD *)v12 != a3 )
      {
        ++v13;
        v12 = (__int128 *)((char *)v12 + 24);
        if ( v13 >= 5 )
          goto LABEL_22;
      }
      break;
    case '"':
      *(_DWORD *)(SelectiveSuspend + 488) |= 2u;
      goto LABEL_22;
    case '#':
      *(_DWORD *)(SelectiveSuspend + 488) |= 4u;
      goto LABEL_22;
    case '$':
      *(_DWORD *)(SelectiveSuspend + 488) |= 8u;
      goto LABEL_22;
    case '%':
      ++*(_DWORD *)(SelectiveSuspend + 492);
LABEL_22:
      *(_DWORD *)(SelectiveSuspend + 144) = 0;
      ndisSSInvalidateOidCache(SelectiveSuspend);
      break;
  }
  *(_DWORD *)(SelectiveSuspend + 612) = a2;
  *(_DWORD *)(SelectiveSuspend + 616) = a3;
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
}
