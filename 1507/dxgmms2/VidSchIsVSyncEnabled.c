/*
 * XREFs of VidSchIsVSyncEnabled @ 0x1C0078930
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0001A80 (VidSchiSendToExecutionQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C001A630 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     VidSchiResumeVSync @ 0x1C0076DEC (VidSchiResumeVSync.c)
 *     VidSchIsVSyncAvailable @ 0x1C00788B0 (VidSchIsVSyncAvailable.c)
 */

char __fastcall VidSchIsVSyncEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v5; // rsi
  __int64 v7; // rax
  struct _ERESOURCE *v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
LABEL_3:
    WdLogEvent5_WdAssertion(v7);
    return 0;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = v5;
    goto LABEL_3;
  }
  v9 = (struct _ERESOURCE *)(a1 + 1192);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1192), 1u);
  if ( VidSchIsVSyncAvailable(a1, (unsigned int)v5, v10, v11) )
    v4 = VidSchiResumeVSync(a1);
  ExReleaseResourceLite(v9);
  return v4;
}
