/*
 * XREFs of MiStoreLogWriteIssueFailure @ 0x140231800
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 */

void __fastcall MiStoreLogWriteIssueFailure(int a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 *v11; // r11
  __int64 v12; // rax
  int v13; // [rsp+30h] [rbp-89h] BYREF
  int v14; // [rsp+34h] [rbp-85h] BYREF
  int v15; // [rsp+38h] [rbp-81h] BYREF
  int v16; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v17; // [rsp+40h] [rbp-79h] BYREF
  __int64 v18; // [rsp+48h] [rbp-71h] BYREF
  __int64 v19; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-59h] BYREF
  int *v21; // [rsp+80h] [rbp-39h]
  int v22; // [rsp+88h] [rbp-31h]
  int v23; // [rsp+8Ch] [rbp-2Dh]
  __int64 *v24; // [rsp+90h] [rbp-29h]
  int v25; // [rsp+98h] [rbp-21h]
  int v26; // [rsp+9Ch] [rbp-1Dh]
  __int64 *v27; // [rsp+A0h] [rbp-19h]
  int v28; // [rsp+A8h] [rbp-11h]
  int v29; // [rsp+ACh] [rbp-Dh]
  int *v30; // [rsp+B0h] [rbp-9h]
  int v31; // [rsp+B8h] [rbp-1h]
  int v32; // [rsp+BCh] [rbp+3h]
  int *v33; // [rsp+C0h] [rbp+7h]
  int v34; // [rsp+C8h] [rbp+Fh]
  int v35; // [rsp+CCh] [rbp+13h]
  int *v36; // [rsp+D0h] [rbp+17h]
  int v37; // [rsp+D8h] [rbp+1Fh]
  int v38; // [rsp+DCh] [rbp+23h]
  int *v39; // [rsp+E0h] [rbp+27h]
  int v40; // [rsp+E8h] [rbp+2Fh]
  int v41; // [rsp+ECh] [rbp+33h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v12 = *v11;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v41 = 0;
      v18 = v12;
      v19 = v11[1];
      v13 = a5;
      v14 = a6;
      v21 = &v16;
      v24 = &v18;
      v27 = &v19;
      v30 = &v15;
      v33 = &v17;
      v36 = &v13;
      v39 = &v14;
      v16 = a1;
      v15 = a3;
      v17 = v9;
      v22 = 4;
      v25 = 8;
      v28 = 8;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      v40 = 4;
      MmTlgWrite(v10, (unsigned __int8 *)dword_1402A473F, v8, v9, 9u, &v20);
    }
  }
}
