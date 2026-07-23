/*
 * XREFs of KdpCreateRemoteFile @ 0x1406F20D0
 * Callers:
 *     KdPullRemoteFile @ 0x1406F2000 (KdPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCreateRemoteFile(_QWORD *a1, __int64 *a2, unsigned __int16 *a3)
{
  char v6; // r14
  _QWORD *v7; // rcx
  unsigned int i; // ebx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-89h]
  __int64 v16; // [rsp+28h] [rbp-81h]
  __int16 v17; // [rsp+30h] [rbp-79h] BYREF
  _WORD v18[4]; // [rsp+38h] [rbp-71h] BYREF
  void *v19; // [rsp+40h] [rbp-69h]
  int v20; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v21; // [rsp+50h] [rbp-59h]
  __int64 v22; // [rsp+60h] [rbp-49h] BYREF
  int v23; // [rsp+68h] [rbp-41h]
  int v24; // [rsp+6Ch] [rbp-3Dh]
  int v25; // [rsp+70h] [rbp-39h]
  __int64 v26; // [rsp+74h] [rbp-35h]
  __int64 v27; // [rsp+80h] [rbp-29h]
  unsigned __int64 v28; // [rsp+88h] [rbp-21h]

  if ( *a3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
    return 3221225485LL;
  if ( (_BYTE)KdDebuggerNotPresent )
    return 3221226324LL;
  v6 = KdEnterDebugger(0LL);
  v7 = KdpRemoteFiles;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( !*v7 )
      break;
    ++v7;
  }
  if ( i >= 0x10 )
  {
    HIDWORD(v22) = -1073741801;
  }
  else
  {
    while ( 1 )
    {
      v9 = *a3;
      v21 = &v22;
      v10 = *((_QWORD *)a3 + 1);
      v22 = 13360LL;
      v23 = 1179785;
      v24 = 128;
      v25 = 1;
      v26 = 1LL;
      v20 = 4194368;
      KdpCopyMemoryChunks(v10, (unsigned int)&KdpMessageBuffer, v9, 0, 4, (__int64)&v17);
      v19 = &KdpMessageBuffer;
      v18[0] = v17 + 2;
      *(_WORD *)((char *)&KdpMessageBuffer + (unsigned __int16)(v17 + 2) - 2) = 0;
      KdSendPacket(11LL, &v20, v18, &KdpContext, v15, v16);
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      v18[1] = 4096;
      v19 = &KdpMessageBuffer;
      v11 = KdReceivePacket(11LL, &v20, v18, &v17, &KdpContext);
      v7 = &KdpMessageBuffer;
      if ( !v11 )
      {
        v12 = HIDWORD(v22);
        goto LABEL_9;
      }
    }
    v12 = -1073740972;
    HIDWORD(v22) = -1073740972;
LABEL_9:
    if ( v12 >= 0 )
    {
      KdpRemoteFiles[i] = v27;
      v7 = (_QWORD *)(i + 1);
      *a1 = v7;
      if ( a2 )
      {
        v14 = v28;
        if ( v28 >= 0x10000000 )
          v14 = 4096LL;
        *a2 = v14;
      }
    }
  }
  LOBYTE(v7) = v6;
  KdExitDebugger(v7);
  return HIDWORD(v22);
}
