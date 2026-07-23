/*
 * XREFs of EtwTraceSystemTimeChange @ 0x1403D23AC
 * Callers:
 *     PoNotifySystemTimeSet @ 0x140132370 (PoNotifySystemTimeSet.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall EtwTraceSystemTimeChange(__int64 *a1, _QWORD *a2, int a3)
{
  _UNKNOWN **v3; // rax
  int v6; // r9d
  __int64 v7; // rax
  int v9; // [rsp+38h] [rbp-59h] BYREF
  __int64 v10; // [rsp+40h] [rbp-51h] BYREF
  __int64 v11; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-41h] BYREF
  _QWORD *v13; // [rsp+60h] [rbp-31h]
  int v14; // [rsp+68h] [rbp-29h]
  int v15; // [rsp+6Ch] [rbp-25h]
  int *v16; // [rsp+70h] [rbp-21h]
  int v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+7Ch] [rbp-15h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-9h] BYREF
  __int64 *v20; // [rsp+A8h] [rbp+17h]
  int v21; // [rsp+B0h] [rbp+1Fh]
  int v22; // [rsp+B4h] [rbp+23h]
  __int64 *v23; // [rsp+B8h] [rbp+27h]
  int v24; // [rsp+C0h] [rbp+2Fh]
  int v25; // [rsp+C4h] [rbp+33h]
  int *v26; // [rsp+C8h] [rbp+37h]
  int v27; // [rsp+D0h] [rbp+3Fh]
  int v28; // [rsp+D4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF
  int v30; // [rsp+108h] [rbp+77h] BYREF

  v3 = &retaddr;
  v30 = a3;
  if ( stru_1402F3680.LevelPlus1 > 5 )
  {
    LOBYTE(v3) = TlgKeywordOn(&stru_1402F3680, 0x400000000000uLL);
    if ( (_BYTE)v3 )
    {
      v7 = *a1;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v10 = v7;
      v11 = *a2;
      v20 = &v10;
      v23 = &v11;
      v26 = &v9;
      v9 = v6;
      v21 = 8;
      v24 = 8;
      v27 = 4;
      LOBYTE(v3) = TlgWrite(&stru_1402F3680, &unk_14027E7F8, 0LL, 0LL, 5u, &pData);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    UserData.Reserved = 0;
    v15 = 0;
    v18 = 0;
    v16 = &v30;
    UserData.Ptr = (ULONGLONG)a1;
    UserData.Size = 8;
    v13 = a2;
    v14 = 8;
    v17 = 4;
    LOBYTE(v3) = EtwWrite(EtwKernelProvRegHandle, &KernelSystemTimeChangeWithReason, 0LL, 3u, &UserData);
  }
  return (char)v3;
}
