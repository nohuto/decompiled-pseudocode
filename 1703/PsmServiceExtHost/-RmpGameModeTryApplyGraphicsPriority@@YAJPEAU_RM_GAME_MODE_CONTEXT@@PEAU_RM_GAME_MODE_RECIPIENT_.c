/*
 * XREFs of ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180031550
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeTryApplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  char v2; // bl
  __int64 v5; // rcx
  int v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  int hProvider; // [rsp+30h] [rbp-59h] BYREF
  int hProvider_4; // [rsp+34h] [rbp-55h] BYREF
  int v12; // [rsp+38h] [rbp-51h] BYREF
  int v13; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *p_hProvider; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+78h] [rbp-11h]
  int v19; // [rsp+7Ch] [rbp-Dh]
  int *p_hProvider_4; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+8Ch] [rbp+3h]
  int *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  int *v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]

  v2 = 0;
  if ( (*((_BYTE *)a1 + 76) & 1) != 0 )
  {
    v5 = 3221225659LL;
LABEL_6:
    hProvider = v5;
    goto LABEL_7;
  }
  v15 = 0LL;
  v14 = 0LL;
  v6 = *((_DWORD *)a2 + 20);
  LODWORD(v15) = 1;
  LODWORD(v14) = 16;
  HIDWORD(v15) = v6;
  hProvider = D3DKMTSetYieldPercentage(&v14);
  v5 = (unsigned int)hProvider;
  if ( hProvider >= 0 )
  {
    v15 = 0LL;
    v2 = 1;
    v14 = 0LL;
    v15 = *(_QWORD *)((char *)a2 + 84);
    LODWORD(v14) = 16;
    hProvider = D3DKMTSetMemoryBudgetTarget(&v14);
    v5 = (unsigned int)hProvider;
    if ( hProvider >= 0 )
    {
      v2 = 0;
      v5 = 0LL;
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( (v2 & 1) != 0 )
  {
    v15 = 0LL;
    v14 = 0LL;
    HIDWORD(v15) = *((_DWORD *)a1 + 15);
    LODWORD(v15) = *((_DWORD *)a1 + 18);
    LODWORD(v14) = 16;
    D3DKMTSetYieldPercentage(&v14);
    v5 = (unsigned int)hProvider;
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v5, 1uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    p_hProvider = &hProvider;
    hProvider_4 = *((_DWORD *)a2 + 20);
    p_hProvider_4 = &hProvider_4;
    v12 = *((_DWORD *)a2 + 21);
    v23 = &v12;
    v13 = *((_DWORD *)a2 + 22);
    v26 = &v13;
    v18 = (int)v7;
    v21 = (int)v7;
    v24 = (int)v7;
    v27 = (int)v7;
    TlgWrite((TraceLoggingHProvider)v5, &unk_18004212D, v7, v8, 6u, &pData);
    LODWORD(v5) = hProvider;
  }
  return (unsigned int)v5;
}
