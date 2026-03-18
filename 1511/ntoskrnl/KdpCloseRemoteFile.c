/*
 * XREFs of KdpCloseRemoteFile @ 0x1406AE364
 * Callers:
 *     KdPullRemoteFile @ 0x1406AE0E0 (KdPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 */

__int64 __fastcall KdpCloseRemoteFile(int a1)
{
  __int64 v1; // rbx
  bool v3; // di
  unsigned __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+38h] [rbp-39h] BYREF
  int *v7; // [rsp+40h] [rbp-31h]
  _BYTE v8[8]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v9[2]; // [rsp+50h] [rbp-21h] BYREF
  __int16 v10; // [rsp+52h] [rbp-1Fh]
  _BYTE *v11; // [rsp+58h] [rbp-19h]
  int v12; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v13; // [rsp+6Ch] [rbp-5h]
  __int64 i; // [rsp+70h] [rbp-1h]

  v1 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v3 = KdEnterDebugger(0LL);
  v4 = KdpRemoteFiles[v1];
  if ( v4 )
  {
    for ( i = KdpRemoteFiles[v1]; ; i = KdpRemoteFiles[v1] )
    {
      v13 = 0;
      v12 = 13363;
      v6 = 4194368;
      v7 = &v12;
      KdSendPacket(11LL, &v6, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v5 = -1073740972;
        v13 = -1073740972;
        goto LABEL_10;
      }
      v10 = 4096;
      v11 = KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, &v6, v9, v8, &KdpContext) )
        break;
    }
    v5 = v13;
LABEL_10:
    if ( v5 >= 0 )
      KdpRemoteFiles[v1] = 0LL;
  }
  else
  {
    v13 = -1073741811;
  }
  LOBYTE(v4) = v3;
  KdExitDebugger(v4);
  return v13;
}
