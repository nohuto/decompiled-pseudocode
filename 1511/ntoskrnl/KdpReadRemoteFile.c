/*
 * XREFs of KdpReadRemoteFile @ 0x1406AE690
 * Callers:
 *     KdPullRemoteFile @ 0x1406AE0E0 (KdPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 */

__int64 __fastcall KdpReadRemoteFile(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  int v6; // edi
  unsigned __int64 v11; // rcx
  bool v12; // r12
  __int64 v13; // rax
  unsigned int v14; // [rsp+30h] [rbp-71h] BYREF
  int v15; // [rsp+38h] [rbp-69h] BYREF
  int *v16; // [rsp+40h] [rbp-61h]
  _BYTE v17[2]; // [rsp+48h] [rbp-59h] BYREF
  __int16 v18; // [rsp+4Ah] [rbp-57h]
  __int64 v19; // [rsp+50h] [rbp-51h]
  int v20; // [rsp+60h] [rbp-41h] BYREF
  int v21; // [rsp+64h] [rbp-3Dh]
  __int64 v22; // [rsp+68h] [rbp-39h]
  __int64 v23; // [rsp+70h] [rbp-31h]
  unsigned int v24; // [rsp+78h] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  v6 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v12 = KdEnterDebugger(0LL);
  if ( KdpRemoteFiles[v5] )
  {
    v21 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v13 = KdpRemoteFiles[v5];
        v21 = 0;
        v22 = v13;
        v20 = 13361;
        v23 = a2;
        v24 = a4 <= (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 ? a4 : KdTransportMaxPacketSize - 64;
        v15 = 4194368;
        v16 = &v20;
        KdSendPacket(11LL, &v15, 0LL, &KdpContext);
        if ( (_BYTE)KdDebuggerNotPresent )
          break;
        v18 = v24;
        v19 = a3;
        if ( !(unsigned int)KdReceivePacket(11LL, &v15, v17, &v14, &KdpContext) )
        {
          if ( v21 < 0 )
            goto LABEL_16;
          v11 = v14;
          v6 += v14;
          a3 += v14;
          a2 += v14;
          a4 -= v14;
        }
        if ( !a4 )
          goto LABEL_16;
      }
      v21 = -1073740972;
    }
LABEL_16:
    *a5 = v6;
  }
  else
  {
    v21 = -1073741811;
  }
  LOBYTE(v11) = v12;
  KdExitDebugger(v11);
  return (unsigned int)v21;
}
