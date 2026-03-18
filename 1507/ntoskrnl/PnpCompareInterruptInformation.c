/*
 * XREFs of PnpCompareInterruptInformation @ 0x140582570
 * Callers:
 *     PnpGetDevicePropertyData @ 0x1404DB80C (PnpGetDevicePropertyData.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     _TlgCreateSz @ 0x1401FB4C0 (_TlgCreateSz.c)
 */

char __fastcall PnpCompareInterruptInformation(__int64 a1, const void *a2, unsigned int a3)
{
  SIZE_T v3; // rax
  __int64 v4; // rdi
  _DWORD *v5; // rcx
  int v6; // r9d
  const void *v7; // rdx
  int *v8; // rcx
  int v9; // r9d
  int v11; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v12[3]; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  int *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  v3 = *(_QWORD *)(a1 + 312);
  v4 = a3;
  v5 = *(_DWORD **)(v3 + 88);
  if ( v5 )
  {
    if ( *v5 == a3 )
    {
      v3 = RtlCompareMemory(v5 + 1, a2, a3);
      if ( v3 != v4 && stru_14031EF20.LevelPlus1 > 5 )
      {
        LOBYTE(v3) = TlgKeywordOn(&stru_14031EF20, 0x800000000000uLL);
        if ( (_BYTE)v3 )
        {
          v11 = v9;
          v12[0] = v4;
          TlgCreateSz(&pDesc, "Compare Failed");
          v15 = &v11;
          v7 = &unk_1402A3FD0;
          v8 = v12;
          goto LABEL_14;
        }
      }
    }
    else if ( stru_14031EF20.LevelPlus1 > 5 )
    {
      LOBYTE(v3) = TlgKeywordOn(&stru_14031EF20, 0x800000000000uLL);
      if ( (_BYTE)v3 )
      {
        v12[0] = v6;
        v11 = v4;
        TlgCreateSz(&pDesc, "Size Mismatch");
        v15 = v12;
        v7 = &unk_1402A4015;
        v8 = &v11;
LABEL_14:
        v17 = 0;
        v20 = 0;
        v19 = 4;
        v16 = 4;
        v18 = v8;
        LOBYTE(v3) = TlgWrite(&stru_14031EF20, v7, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else if ( stru_14031EF20.LevelPlus1 > 5 )
  {
    LOBYTE(v3) = TlgKeywordOn(&stru_14031EF20, 0x800000000000uLL);
    if ( (_BYTE)v3 )
    {
      TlgCreateSz(&pDesc, "Not Found");
      LOBYTE(v3) = TlgWrite(&stru_14031EF20, &unk_1402A405A, 0LL, 0LL, 3u, &pData);
    }
  }
  return v3;
}
