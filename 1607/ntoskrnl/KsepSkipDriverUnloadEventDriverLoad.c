/*
 * XREFs of KsepSkipDriverUnloadEventDriverLoad @ 0x1401DE0D4
 * Callers:
 *     KseSkipDriverUnloadHookDriverTargeted @ 0x1401DE0A4 (KseSkipDriverUnloadHookDriverTargeted.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall KsepSkipDriverUnloadEventDriverLoad(unsigned __int16 *a1, __int64 a2, int a3, int a4, char a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v6; // rbx
  ULONGLONG v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-21h] BYREF
  __int64 *v11; // [rsp+48h] [rbp-11h]
  int v12; // [rsp+50h] [rbp-9h]
  int v13; // [rsp+54h] [rbp-5h]
  int *v14; // [rsp+58h] [rbp-1h]
  int v15; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+64h] [rbp+Bh]
  int *v17; // [rsp+68h] [rbp+Fh]
  int v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+74h] [rbp+1Bh]
  char *v20; // [rsp+78h] [rbp+1Fh]
  int v21; // [rsp+80h] [rbp+27h]
  int v22; // [rsp+84h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+67h] BYREF
  int v25; // [rsp+C8h] [rbp+6Fh] BYREF
  int v26; // [rsp+D0h] [rbp+77h] BYREF

  v5 = &retaddr;
  v26 = a4;
  v25 = a3;
  v24 = a2;
  v6 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v5) = EtwEventEnabled(KseEtwHandle, &KseSkipDriverUnloadEventDriverLoad);
    if ( (_BYTE)v5 )
    {
      v8 = *((_QWORD *)a1 + 1);
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      UserData.Ptr = v8;
      LODWORD(v8) = *a1;
      v15 = 4;
      UserData.Size = v8 + 2;
      v11 = &v24;
      v14 = &v25;
      v17 = &v26;
      v20 = &a5;
      v18 = 4;
      v21 = 4;
      v12 = 8;
      LOBYTE(v5) = EtwWrite(v6, &KseSkipDriverUnloadEventDriverLoad, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
