/*
 * XREFs of VidSchIsVSyncAvailable @ 0x1C00788B0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 *     VidSchGetDeviceFlipMode @ 0x1C0078470 (VidSchGetDeviceFlipMode.c)
 *     VidSchIsVSyncEnabled @ 0x1C0078930 (VidSchIsVSyncEnabled.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidSchIsVSyncAvailable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  struct _ERESOURCE *v8; // rdi
  int v9; // eax
  unsigned __int8 v10; // bl

  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
LABEL_3:
    WdLogEvent5_WdAssertion(v6);
    return 0;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = v4;
    goto LABEL_3;
  }
  v8 = (struct _ERESOURCE *)(a1 + 1192);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1192), 1u);
  v9 = *(_DWORD *)(a1 + 1972);
  v10 = _bittest(&v9, v4);
  ExReleaseResourceLite(v8);
  return v10;
}
