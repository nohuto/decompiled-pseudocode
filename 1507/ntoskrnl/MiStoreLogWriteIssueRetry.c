/*
 * XREFs of MiStoreLogWriteIssueRetry @ 0x14023193C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 */

void __fastcall MiStoreLogWriteIssueRetry(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 *v10; // r11
  __int64 v11; // rax
  int v12; // [rsp+30h] [rbp-61h] BYREF
  int v13; // [rsp+34h] [rbp-5Dh] BYREF
  int v14; // [rsp+38h] [rbp-59h] BYREF
  int v15; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v16; // [rsp+40h] [rbp-51h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-41h] BYREF
  __int64 *v19; // [rsp+70h] [rbp-21h]
  int v20; // [rsp+78h] [rbp-19h]
  int v21; // [rsp+7Ch] [rbp-15h]
  __int64 *v22; // [rsp+80h] [rbp-11h]
  int v23; // [rsp+88h] [rbp-9h]
  int v24; // [rsp+8Ch] [rbp-5h]
  int *v25; // [rsp+90h] [rbp-1h]
  int v26; // [rsp+98h] [rbp+7h]
  int v27; // [rsp+9Ch] [rbp+Bh]
  int *v28; // [rsp+A0h] [rbp+Fh]
  int v29; // [rsp+A8h] [rbp+17h]
  int v30; // [rsp+ACh] [rbp+1Bh]
  int *v31; // [rsp+B0h] [rbp+1Fh]
  int v32; // [rsp+B8h] [rbp+27h]
  int v33; // [rsp+BCh] [rbp+2Bh]
  int *v34; // [rsp+C0h] [rbp+2Fh]
  int v35; // [rsp+C8h] [rbp+37h]
  int v36; // [rsp+CCh] [rbp+3Bh]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v11 = *v10;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v16 = v11;
      v17 = v10[1];
      v12 = a5;
      v19 = &v16;
      v22 = &v17;
      v25 = &v13;
      v28 = &v15;
      v31 = &v14;
      v34 = &v12;
      v13 = a2;
      v15 = a3;
      v14 = v8;
      v20 = 8;
      v23 = 8;
      v26 = 4;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      MmTlgWrite(v9, (unsigned __int8 *)dword_1402A4644, v7, v8, 8u, &v18);
    }
  }
}
