/*
 * XREFs of PopDiagTraceFxComponentWake @ 0x140208558
 * Callers:
 *     PoFxSetComponentWake @ 0x1402020E0 (PoFxSetComponentWake.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxComponentWake(__int64 a1, int a2, unsigned __int8 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  int v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int *v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+10h] BYREF
  int v17; // [rsp+88h] [rbp+18h] BYREF

  v3 = &retaddr;
  v17 = a2;
  v16 = a1;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_WAKE);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v7 = a3;
      UserData.Ptr = (ULONGLONG)&v16;
      v10 = 4;
      v9 = &v17;
      v12 = &v7;
      v13 = 4;
      UserData.Size = 8;
      LOBYTE(v3) = EtwWrite(v5, &POP_ETW_EVENT_COMPONENT_WAKE, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
