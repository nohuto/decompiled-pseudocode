/*
 * XREFs of KdSendTraceData @ 0x1406AAE38
 * Callers:
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     EtwpSendTraceEvent @ 0x140210028 (EtwpSendTraceEvent.c)
 *     EtwpSendBufferToDebugger @ 0x140664B00 (EtwpSendBufferToDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 */

__int64 __fastcall KdSendTraceData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  _DWORD *v5; // rax
  __int64 result; // rax
  bool v7; // r14
  char *v8; // rbp
  const void **v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int16 v12; // [rsp+20h] [rbp-88h] BYREF
  int *v13; // [rsp+28h] [rbp-80h]
  __int16 v14; // [rsp+30h] [rbp-78h] BYREF
  void *v15; // [rsp+38h] [rbp-70h]
  int v16; // [rsp+40h] [rbp-68h] BYREF
  __int16 v17; // [rsp+44h] [rbp-64h]
  __int16 Number; // [rsp+46h] [rbp-62h]
  unsigned int v19; // [rsp+48h] [rbp-60h]

  v2 = 0;
  v3 = (unsigned int)a2;
  if ( (_DWORD)a2 )
  {
    v5 = (_DWORD *)(a1 + 8);
    a2 = (unsigned int)a2;
    do
    {
      v2 += *v5;
      v5 += 4;
      --a2;
    }
    while ( a2 );
  }
  result = (unsigned int)(KdTransportMaxPacketSize - 64);
  if ( v2 <= (unsigned int)result )
  {
    v7 = KdEnterDebugger(0LL);
    v8 = (char *)&KdpMessageBuffer;
    if ( (_DWORD)v3 )
    {
      v9 = (const void **)(a1 + 8);
      do
      {
        memmove(v8, *(v9 - 1), *(unsigned int *)v9);
        v10 = *(unsigned int *)v9;
        v9 += 2;
        v8 += v10;
        --v3;
      }
      while ( v3 );
    }
    v17 = KeProcessorLevel;
    v16 = 13104;
    Number = KeGetPcr()->Prcb.Number;
    v12 = 64;
    v13 = &v16;
    v19 = v2;
    v14 = v2;
    v15 = &KdpMessageBuffer;
    KdSendPacket(9LL, &v12, &v14, &KdpContext);
    LOBYTE(v11) = v7;
    return KdExitDebugger(v11);
  }
  return result;
}
