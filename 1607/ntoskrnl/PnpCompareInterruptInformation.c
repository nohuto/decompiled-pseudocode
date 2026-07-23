/*
 * XREFs of PnpCompareInterruptInformation @ 0x140546810
 * Callers:
 *     PnpGetDevicePropertyData @ 0x1404DA59C (PnpGetDevicePropertyData.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 */

char __fastcall PnpCompareInterruptInformation(__int64 a1, const void *a2, unsigned int a3)
{
  SIZE_T v3; // rax
  __int64 v4; // rdi
  _DWORD *v5; // rcx
  __int64 v6; // rsi
  int *v7; // rax
  int v8; // r9d
  const void *v9; // rdx
  int *v10; // rcx
  int v11; // r9d
  int v13; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v14[3]; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  int *v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+7Ch] [rbp+3h]
  int *v20; // [rsp+80h] [rbp+7h]
  int v21; // [rsp+88h] [rbp+Fh] BYREF
  int v22; // [rsp+8Ch] [rbp+13h]
  _DWORD *v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+98h] [rbp+1Fh]
  int v25; // [rsp+9Ch] [rbp+23h]
  __int64 v26; // [rsp+A0h] [rbp+27h]
  _DWORD v27[2]; // [rsp+A8h] [rbp+2Fh] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  v4 = a3;
  v5 = *(_DWORD **)(v3 + 88);
  v6 = *(_QWORD *)(v3 + 40);
  if ( v5 )
  {
    if ( *v5 == a3 )
    {
      v3 = RtlCompareMemory(v5 + 1, a2, a3);
      if ( v3 != v4 && stru_1402F3230.LevelPlus1 > 5 )
      {
        LOBYTE(v3) = TlgKeywordOn(&stru_1402F3230, 0x400000000000uLL);
        if ( (_BYTE)v3 )
        {
          v14[0] = v11;
          v13 = v4;
          TlgCreateSz(&pDesc, "Compare Failed");
          v17 = v14;
          v9 = &unk_14027BC25;
          v10 = &v13;
          goto LABEL_14;
        }
      }
    }
    else if ( stru_1402F3230.LevelPlus1 > 5 )
    {
      LOBYTE(v3) = TlgKeywordOn(&stru_1402F3230, 0x400000000000uLL);
      if ( (_BYTE)v3 )
      {
        v13 = v8;
        v14[0] = v4;
        TlgCreateSz(&pDesc, "Size Mismatch");
        v17 = &v13;
        v9 = &unk_14027BC7C;
        v10 = v14;
LABEL_14:
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v27[1] = 0;
        v18 = 4;
        v21 = 4;
        v23 = v27;
        v26 = *(_QWORD *)(v6 + 48);
        v27[0] = *(unsigned __int16 *)(v6 + 40);
        v24 = 2;
        v20 = v10;
        LOBYTE(v3) = TlgWrite(&stru_1402F3230, v9, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  else if ( stru_1402F3230.LevelPlus1 > 5 )
  {
    LOBYTE(v3) = TlgKeywordOn(&stru_1402F3230, 0x400000000000uLL);
    if ( (_BYTE)v3 )
    {
      TlgCreateSz(&pDesc, "Not Found");
      v7 = *(int **)(v6 + 48);
      v19 = 0;
      v22 = 0;
      v20 = v7;
      v21 = *(unsigned __int16 *)(v6 + 40);
      v17 = &v21;
      v18 = 2;
      LOBYTE(v3) = TlgWrite(&stru_1402F3230, &unk_14027BCD3, 0LL, 0LL, 5u, &pData);
    }
  }
  return v3;
}
