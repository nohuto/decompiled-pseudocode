/*
 * XREFs of KsepDsEventDriverStartIo @ 0x1401DD804
 * Callers:
 *     KseDsCallbackHookDriverStartIo @ 0x1401DCE40 (KseDsCallbackHookDriverStartIo.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall KsepDsEventDriverStartIo(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-30h]
  int v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-24h]
  __int64 *v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+10h] BYREF
  __int64 v15; // [rsp+88h] [rbp+18h] BYREF
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF

  v3 = &retaddr;
  v16 = a3;
  v15 = a2;
  v14 = a1;
  v4 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v3) = EtwEventEnabled(KseEtwHandle, &KseDsEventStartIo);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v14;
      UserData.Size = 8;
      v7 = &v15;
      v10 = &v16;
      v8 = 8;
      v11 = 8;
      LOBYTE(v3) = EtwWrite(v4, &KseDsEventStartIo, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
