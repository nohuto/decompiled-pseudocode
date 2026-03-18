/*
 * XREFs of KdpReportLoadSymbolsStateChange @ 0x1406AB758
 * Callers:
 *     KdpSymbol @ 0x1406AD058 (KdpSymbol.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KdpSetCommonState @ 0x1401C22D0 (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x1406ABDDC (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x1406AD31C (KdpSetContextState.c)
 *     KdpCopyMemoryChunks @ 0x1406AD60C (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReportLoadSymbolsStateChange(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  __int16 *v9; // r8
  __int64 result; // rax
  __int16 v11; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v12; // [rsp+38h] [rbp-C8h]
  __int16 v13; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v14; // [rsp+48h] [rbp-B8h]
  _BYTE v15[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16[3]; // [rsp+70h] [rbp-90h] BYREF
  int v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+8Ch] [rbp-74h]
  char v19; // [rsp+90h] [rbp-70h]

  do
  {
    KdpSetCommonState(12337, a4, (__int64)v15);
    KdpSetContextState(v15, a4);
    v16[1] = *(_QWORD *)a2;
    v16[2] = *(unsigned int *)(a2 + 8);
    v17 = *(_DWORD *)(a2 + 16);
    v18 = *(_DWORD *)(a2 + 20);
    v19 = a3;
    if ( a1 )
    {
      KdpCopyMemoryChunks(*(PVOID *)(a1 + 8), 4, (__int64)v16);
      ++LODWORD(v16[0]);
      v9 = &v13;
      v14 = KdpPathBuffer;
      v13 = v16[0];
      KdpPathBuffer[LOWORD(v16[0]) - 1] = 0;
    }
    else
    {
      LODWORD(v16[0]) = 0;
      v9 = 0LL;
    }
    v11 = 240;
    v12 = v15;
    result = KdpSendWaitContinue(v8, &v11, v9, a4);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
