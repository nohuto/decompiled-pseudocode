/*
 * XREFs of ndisSetBusySync @ 0x1C0068B84
 * Callers:
 *     ndisMDoOidRequest @ 0x1C00078B0 (ndisMDoOidRequest.c)
 *     ndisMResetMiniportInternal @ 0x1C005AC38 (ndisMResetMiniportInternal.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C009C150 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB9A8 (ndisDevicePnPEventNotifyMiniport.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E74C8 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EB7AC (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     Template_qq @ 0x1C0049538 (Template_qq.c)
 *     ndisCancelIdleRequestSync @ 0x1C006747C (ndisCancelIdleRequestSync.c)
 *     ndisSSInvalidateOidCache @ 0x1C00685CC (ndisSSInvalidateOidCache.c)
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
      if ( (unsigned __int8)byte_1C0085316 >= 4u )
        WPP_SF_qD(0x22u, &WPP_a612080d527c97bcc88e648492c760b7_Traceguids, (__int64)a1, a2);
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
      v12 = &xmmword_1C00768E0;
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
