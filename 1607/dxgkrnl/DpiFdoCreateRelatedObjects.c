/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C00EC0D8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C2FD0 (DpiFdoInvalidateChildRelations.c)
 *     DpiGdoCreateGdiObjects @ 0x1C00ECAA8 (DpiGdoCreateGdiObjects.c)
 *     DmmInitializeAdapter @ 0x1C00F56D8 (DmmInitializeAdapter.c)
 *     DpiPdoRemovePdoObjects @ 0x1C019C6F8 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C019E4F0 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx

  v4 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168));
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  LODWORD(v9) = DpiFdoInvalidateChildRelations(a1, 0x18u, a4);
  if ( (int)v9 < 0 )
    goto LABEL_8;
  if ( (*(_BYTE *)(v4 + 3696) & 1) != 0 )
  {
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3688), 2);
    v9 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 3688));
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3688), 2);
    if ( (int)v9 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v12 + 24) = v9;
      WdLogEvent5_WdError(v12);
    }
    else
    {
      LODWORD(v9) = DpiGdoCreateGdiObjects(a1, a2, a3);
    }
  }
  if ( (int)v9 < 0 )
  {
LABEL_8:
    DpiGdoDestroyGdiObjects(a1);
    LOBYTE(v13) = 1;
    DpiPdoRemovePdoObjects(a1, v13, a4);
  }
  return (unsigned int)v9;
}
