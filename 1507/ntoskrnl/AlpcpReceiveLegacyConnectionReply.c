/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x140529BA4
 * Callers:
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpReadMessageData @ 0x14047A100 (AlpcpReadMessageData.c)
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpQueryRemoteView @ 0x14052AA30 (AlpcpQueryRemoteView.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14052F9E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        char *a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int RemoteView; // r14d
  ULONG_PTR v13; // rdi
  __int64 v14; // rcx
  __int16 v15; // si
  unsigned int v16; // eax
  int v17; // esi
  char v18; // cl
  signed __int64 v19; // rcx
  int v21; // esi
  ULONG_PTR v22; // rdi
  char v23; // cl
  signed __int64 BugCheckParameter4; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v26[16]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter2 = 0LL;
  v10 = *a1;
  v11 = AlpcpReceiveSynchronousReply(a1, PreviousMode, (__int64 *)&BugCheckParameter2, 0, 0LL);
  RemoteView = v11;
  if ( v11 )
  {
    if ( (*(_DWORD *)(v10 + 416) & 0x10) != 0 || v11 == -1073740031 )
      return (unsigned int)-1073741759;
    return RemoteView;
  }
  if ( !a4 )
    goto LABEL_5;
  RemoteView = AlpcpQueryRemoteView(v10, a4, v26);
  if ( (RemoteView & 0x80000000) == 0 )
  {
    *(_QWORD *)(a5 + 40) = v27;
LABEL_5:
    v13 = BugCheckParameter2;
    if ( a6 )
    {
      v14 = *(_QWORD *)(BugCheckParameter2 + 144);
      if ( v14 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v14 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 40LL);
      }
    }
    if ( a2 )
    {
      v15 = 0;
      v16 = *(unsigned __int16 *)(v13 + 224);
      if ( *(_DWORD *)a3 < v16 )
      {
        v15 = *(_WORD *)(v13 + 224);
        *(_WORD *)(v13 + 224) = *a3;
      }
      else
      {
        *(_DWORD *)a3 = v16;
      }
      if ( *(_QWORD *)(v13 + 168) )
        AlpcpGetDataFromUserVaSafe(v13, a2);
      else
        AlpcpReadMessageData(v13, a2);
      if ( v15 )
        *(_WORD *)(v13 + 224) = v15;
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v13);
    v17 = 0;
    v18 = *(_BYTE *)(v13 - 32);
    if ( (v18 & 1) != 0 )
    {
      v17 = 0x10000 - *(__int16 *)(v13 - 30);
      *(_BYTE *)(v13 - 32) = v18 & 0xFE;
      *(_WORD *)(v13 - 30) = 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v13 - 16));
    KeAbPostRelease(v13 - 16);
    if ( v17 > 0 )
    {
      v19 = -v17 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), -v17);
      if ( v19 <= 0 )
      {
        if ( v19 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, v19);
LABEL_25:
        AlpcpDestroyBlob(BugCheckParameter2);
        return RemoteView;
      }
    }
    return RemoteView;
  }
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  v21 = 0;
  v22 = BugCheckParameter2;
  v23 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v23 & 1) != 0 )
  {
    v21 = 0x10000 - *(__int16 *)(BugCheckParameter2 - 30);
    *(_BYTE *)(BugCheckParameter2 - 32) = v23 & 0xFE;
    *(_WORD *)(v22 - 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v22 - 16));
  KeAbPostRelease(v22 - 16);
  if ( v21 > 0 )
  {
    BugCheckParameter4 = -v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 24), -v21);
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
      goto LABEL_25;
    }
  }
  return RemoteView;
}
