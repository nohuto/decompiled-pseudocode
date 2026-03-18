/*
 * XREFs of KdpCreateRemoteFile @ 0x1406AE498
 * Callers:
 *     KdPullRemoteFile @ 0x1406AE0E0 (KdPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 *     KdpCopyMemoryChunks @ 0x1406AD60C (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCreateRemoteFile(unsigned __int64 *a1, __int64 *a2, unsigned __int16 *a3)
{
  bool v7; // r14
  unsigned __int64 v8; // rcx
  unsigned int i; // ebx
  unsigned int v10; // r8d
  char *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-79h] BYREF
  _WORD v16[4]; // [rsp+38h] [rbp-71h] BYREF
  _BYTE *v17; // [rsp+40h] [rbp-69h]
  int v18; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v19; // [rsp+50h] [rbp-59h]
  __int64 v20; // [rsp+60h] [rbp-49h] BYREF
  int v21; // [rsp+68h] [rbp-41h]
  int v22; // [rsp+6Ch] [rbp-3Dh]
  int v23; // [rsp+70h] [rbp-39h]
  __int64 v24; // [rsp+74h] [rbp-35h]
  __int64 v25; // [rsp+80h] [rbp-29h]
  unsigned __int64 v26; // [rsp+88h] [rbp-21h]

  if ( *a3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
    return 3221225485LL;
  if ( (_BYTE)KdDebuggerNotPresent )
    return 3221226324LL;
  v7 = KdEnterDebugger(0LL);
  v8 = (unsigned __int64)KdpRemoteFiles;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( !*(_QWORD *)v8 )
      break;
    v8 += 8LL;
  }
  if ( i < 0x10 )
  {
    while ( 1 )
    {
      v10 = *a3;
      v19 = &v20;
      v11 = (char *)*((_QWORD *)a3 + 1);
      v20 = 13360LL;
      v21 = 1179785;
      v22 = 128;
      v23 = 1;
      v24 = 1LL;
      v18 = 4194368;
      KdpCopyMemoryChunks(v11, KdpMessageBuffer, v10, 0, 4u, &v15);
      v17 = KdpMessageBuffer;
      v16[0] = v15 + 2;
      *(_WORD *)&KdpMessageBuffer[(unsigned __int16)(v15 + 2) - 2] = 0;
      KdSendPacket(11LL, &v18, v16, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      v16[1] = 4096;
      v17 = KdpMessageBuffer;
      v12 = KdReceivePacket(11LL, &v18, v16, &v15, &KdpContext);
      v8 = (unsigned __int64)KdpMessageBuffer;
      if ( !v12 )
      {
        v13 = HIDWORD(v20);
        goto LABEL_14;
      }
    }
    v13 = -1073740972;
    HIDWORD(v20) = -1073740972;
LABEL_14:
    if ( v13 >= 0 )
    {
      KdpRemoteFiles[i] = v25;
      v8 = i + 1;
      *a1 = v8;
      if ( a2 )
      {
        v14 = v26;
        if ( v26 >= 0x10000000 )
          v14 = 4096LL;
        *a2 = v14;
      }
    }
  }
  else
  {
    HIDWORD(v20) = -1073741801;
  }
  LOBYTE(v8) = v7;
  KdExitDebugger(v8);
  return HIDWORD(v20);
}
