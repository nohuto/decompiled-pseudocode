/*
 * XREFs of ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B03A0
 * Callers:
 *     ndisInitModeTimeoutWorkItem @ 0x1C00B0260 (ndisInitModeTimeoutWorkItem.c)
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0019A3C (ndisReferenceProtocol.c)
 *     ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A1F14 (-UnlockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?LockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A3230 (-LockBindings@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisNotifyBindFailure @ 0x1C00B3554 (ndisNotifyBindFailure.c)
 */

void __fastcall ndisNotifyBindFailureOnUnboundProtocols(__int64 a1)
{
  Ndis::BindEngine *v1; // rsi
  int v3; // r14d
  __int64 v4; // rdi
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rax
  _NDIS_PROTOCOL_BLOCK *v8; // rbp
  __int64 v9; // rdx

  v1 = (Ndis::BindEngine *)(a1 + 5208);
  Ndis::BindEngine::LockBindings((Ndis::BindEngine *)(a1 + 5208));
  do
  {
LABEL_2:
    v3 = *(_DWORD *)(a1 + 5200);
    v4 = 0LL;
    v5 = *(_DWORD *)(a1 + 5080);
    while ( (_DWORD)v4 != v5 )
    {
      if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 5080) )
        __fastfail(0xBAD0FFu);
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 5088) + 8 * v4);
      v7 = *(_QWORD *)(v6 + 104);
      v8 = *(_NDIS_PROTOCOL_BLOCK **)(v7 + 56);
      if ( v8 && !*(_DWORD *)(v6 + 72) )
      {
        if ( ndisReferenceProtocol(*(_QWORD *)(v7 + 56), 0xDu) )
        {
          Ndis::BindEngine::UnlockBindings(v1);
          ndisNotifyBindFailure(a1, v8);
          ndisDereferenceProtocol(v8, v9, 0xDu);
          Ndis::BindEngine::LockBindings(v1);
        }
      }
      if ( v3 != *(_DWORD *)(a1 + 5200) )
        goto LABEL_2;
      v4 = (unsigned int)(v4 + 1);
    }
  }
  while ( v3 != *(_DWORD *)(a1 + 5200) );
  Ndis::BindEngine::UnlockBindings(v1);
}
