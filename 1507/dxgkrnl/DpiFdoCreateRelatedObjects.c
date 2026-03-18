/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C00C4630
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C4A50 (DpiFdoInvalidateChildRelations.c)
 *     DmmInitializeAdapter @ 0x1C00D0CB0 (DmmInitializeAdapter.c)
 *     DpiGdoCreateGdiObjects @ 0x1C00D6940 (DpiGdoCreateGdiObjects.c)
 *     DpiPdoRemovePdoObjects @ 0x1C016E250 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C01702F0 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx

  v3 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 168));
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  LODWORD(v7) = DpiFdoInvalidateChildRelations(a1, 24LL);
  if ( (int)v7 < 0 )
    goto LABEL_8;
  if ( (*(_BYTE *)(v3 + 2512) & 1) != 0 )
  {
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 2504), 2);
    v7 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v3 + 2504));
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 2504));
    if ( (int)v7 < 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v10[3] = DpiFdoCreateRelatedObjects;
      v10[4] = DmmInitializeAdapter;
      v10[5] = v7;
      WdLogEvent5_WdError(v10);
    }
    else
    {
      LODWORD(v7) = DpiGdoCreateGdiObjects(a1, a2, a3);
    }
  }
  if ( (int)v7 < 0 )
  {
LABEL_8:
    DpiGdoDestroyGdiObjects(a1);
    LOBYTE(v11) = 1;
    DpiPdoRemovePdoObjects(a1, v11);
  }
  return (unsigned int)v7;
}
