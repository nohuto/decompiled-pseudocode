/*
 * XREFs of KsepSkipDriverUnloadEventDriverUnload @ 0x1401DE1B8
 * Callers:
 *     KseSkipDriverUnloadCallbackHookDriverUnload @ 0x1401DE098 (KseSkipDriverUnloadCallbackHookDriverUnload.c)
 *     KseSkipDriverUnloadHookDriverUntargeted @ 0x1401DE0BC (KseSkipDriverUnloadHookDriverUntargeted.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall KsepSkipDriverUnloadEventDriverUnload(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  v2 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    if ( EtwEventEnabled(KseEtwHandle, &KseSkipDriverUnloadEventDriverUnload) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 8;
      v4 = &v8;
      v5 = 8;
      EtwWrite(v2, &KseSkipDriverUnloadEventDriverUnload, 0LL, 2u, &UserData);
    }
  }
}
