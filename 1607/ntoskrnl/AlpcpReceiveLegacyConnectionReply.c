/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x14049C9A4
 * Callers:
 *     NtSecureConnectPort @ 0x14049C42C (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140446B10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpGetDataFromMessage @ 0x14049D200 (AlpcpGetDataFromMessage.c)
 *     AlpcpQueryRemoteView @ 0x14049D8EC (AlpcpQueryRemoteView.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v10; // rsi
  int v11; // eax
  int RemoteView; // ebx
  __int64 v13; // rcx
  __int16 v14; // si
  unsigned int v15; // eax
  ULONG_PTR v17; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v18[16]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17 = 0LL;
  v10 = *a1;
  v11 = AlpcpReceiveSynchronousReply(a1, PreviousMode, &v17, 0, 0LL);
  RemoteView = v11;
  if ( !v11 )
  {
    if ( a4 )
    {
      RemoteView = AlpcpQueryRemoteView(v10, a4, v18);
      if ( RemoteView < 0 )
      {
LABEL_13:
        AlpcpUnlockMessage(v17);
        return (unsigned int)RemoteView;
      }
      *(_QWORD *)(a5 + 40) = v19;
    }
    if ( a6 )
    {
      v13 = *(_QWORD *)(v17 + 144);
      if ( v13 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 40LL);
      }
    }
    if ( a2 )
    {
      v14 = 0;
      v15 = *(unsigned __int16 *)(v17 + 232);
      if ( *(_DWORD *)a3 < v15 )
      {
        v14 = *(_WORD *)(v17 + 232);
        *(_WORD *)(v17 + 232) = *a3;
      }
      else
      {
        *(_DWORD *)a3 = v15;
      }
      AlpcpGetDataFromMessage(v17, a2);
      if ( v14 )
        *(_WORD *)(v17 + 232) = v14;
    }
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v10 + 416) & 0x10) != 0 || v11 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)RemoteView;
}
