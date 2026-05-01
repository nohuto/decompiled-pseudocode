/*
 * XREFs of ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180031890
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpGameModeUnapplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v3; // eax
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // [rsp+38h] [rbp-39h] BYREF
  int v13; // [rsp+3Ch] [rbp-35h] BYREF
  int v14; // [rsp+40h] [rbp-31h] BYREF
  __int64 v15; // [rsp+48h] [rbp-29h] BYREF
  __int64 v16; // [rsp+50h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  int *v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  int *v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  int *v24; // [rsp+98h] [rbp+27h]
  int v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]

  if ( (*((_BYTE *)a1 + 76) & 1) == 0 )
  {
    v16 = 0LL;
    v15 = 0LL;
    HIDWORD(v16) = *((_DWORD *)a1 + 15);
    v3 = *((_DWORD *)a1 + 18);
    LODWORD(v15) = 16;
    LODWORD(v16) = v3;
    v12 = D3DKMTSetYieldPercentage(&v15);
    if ( v12 < 0 && (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v4, 0x400000000001uLL) )
    {
      v20 = 0;
      v23 = 0;
      v18 = &v12;
      v13 = *((_DWORD *)a1 + 15);
      v21 = &v13;
      v19 = 4;
      v22 = 4;
      TlgWrite(v5, &unk_180042010, v6, v7, 4u, &pData);
    }
    v16 = 0LL;
    v15 = 0LL;
    v16 = *((_QWORD *)a1 + 8);
    LODWORD(v15) = 16;
    v12 = D3DKMTSetMemoryBudgetTarget(&v15);
    if ( v12 < 0 && (unsigned int)dword_18004D030 > 4 )
    {
      if ( TlgKeywordOn(v8, 0x400000000001uLL) )
      {
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v18 = &v12;
        v13 = *((_DWORD *)a1 + 16);
        v21 = &v13;
        v14 = *((_DWORD *)a1 + 17);
        v24 = &v14;
        v19 = 4;
        v22 = 4;
        v25 = 4;
        TlgWrite(v9, &unk_180042347, v10, v11, 5u, &pData);
      }
    }
  }
}
