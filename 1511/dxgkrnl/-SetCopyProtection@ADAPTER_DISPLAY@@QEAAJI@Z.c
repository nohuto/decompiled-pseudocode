/*
 * XREFs of ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A734
 * Callers:
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A798 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C009A844 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0125E20 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0129740 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C012FC6C (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00C2644 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCopyProtection(DXGADAPTER **this, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // r9d
  DXGADAPTER **i; // rcx
  DXGADAPTER *v8; // rcx
  __int64 v10; // rax

  v5 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v10 + 24) = 19429LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = 0;
  for ( i = (DXGADAPTER **)this[11]; i != this + 11 && i; i = (DXGADAPTER **)*i )
  {
    if ( *((_DWORD *)i + 13) == a2 && *((_DWORD *)i + 14) > v6 )
      v6 = *((_DWORD *)i + 14);
  }
  v8 = this[2];
  if ( v6 )
    return (unsigned int)DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(v8, a2, 2LL);
  else
    DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(v8, a2, 1LL);
  return v5;
}
