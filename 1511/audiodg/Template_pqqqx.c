/*
 * XREFs of Template_pqqqx @ 0x14003C204
 * Callers:
 *     ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140017D00 (-AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRE.c)
 * Callees:
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 */

ULONG __fastcall Template_pqqqx(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-60h] BYREF
  int *v9; // [rsp+30h] [rbp-50h]
  __int64 v10; // [rsp+38h] [rbp-48h]
  char *v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  char *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  char *v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF
  int v18; // [rsp+A8h] [rbp+28h] BYREF

  v18 = a4;
  v17 = a3;
  UserData.Ptr = (ULONGLONG)&v17;
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = &v18;
  v10 = 4LL;
  v11 = &a5;
  v12 = 4LL;
  v13 = &a6;
  v15 = &a7;
  v14 = 4LL;
  v16 = 8LL;
  return EventWrite(Microsoft_Windows_AudioHandle, &AudioCore_CPCapture_Add_Packet, 5u, &UserData);
}
