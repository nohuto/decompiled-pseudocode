/*
 * XREFs of KdpReportLoadSymbolsStateChange @ 0x1406F25CC
 * Callers:
 *     KdpSymbol @ 0x1406F227C (KdpSymbol.c)
 * Callees:
 *     KdpSetCommonState @ 0x1400841C8 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 *     KdpSetContextState @ 0x1406F2C74 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportLoadSymbolsStateChange(unsigned __int16 *a1, __int64 *a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  __int16 *v9; // r8
  __int64 result; // rax
  __int16 v11; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v12; // [rsp+38h] [rbp-C8h]
  __int16 v13; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v14; // [rsp+48h] [rbp-B8h]
  _BYTE v15[32]; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h]
  int v20; // [rsp+8Ch] [rbp-74h]
  char v21; // [rsp+90h] [rbp-70h]

  do
  {
    KdpSetCommonState(12337, a4, (__int64)v15);
    KdpSetContextState(v15, a4);
    v17 = *a2;
    v18 = *((unsigned int *)a2 + 2);
    v19 = *((_DWORD *)a2 + 4);
    v20 = *((_DWORD *)a2 + 5);
    v21 = a3;
    if ( a1 )
    {
      KdpCopyMemoryChunks(*((_QWORD *)a1 + 1), (unsigned int)KdpPathBuffer, *a1, 0, 4, (__int64)&v16);
      ++v16;
      v9 = &v11;
      v11 = v16;
      v12 = KdpPathBuffer;
      KdpPathBuffer[(unsigned __int16)v16 - 1] = 0;
    }
    else
    {
      v16 = 0;
      v9 = 0LL;
    }
    v13 = 240;
    v14 = v15;
    result = KdpSendWaitContinue(v8, &v13, v9, a4);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
