/*
 * XREFs of RIMResetPointerDevices @ 0x1C000CFF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMResetPointerDevices(__int64 a1)
{
  int v2; // edx
  int v3; // r14d
  _QWORD *v4; // rbx
  __int64 i; // rdi
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    131,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 0LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = Object;
    RIMLockExclusive((char *)Object + 96);
    if ( *((_BYTE *)v4 + 73) || *((_BYTE *)v4 + 74) )
    {
      v3 = -1073741637;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        3,
        132,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      RIMLockExclusive(v4 + 87);
      for ( i = v4[69]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 316) )
          RIMEndAllActiveContacts(v4, *(_QWORD *)(i + 480), 0LL);
      }
      RIMUnlockExclusive(v4 + 87);
    }
    RIMUnlockExclusive(v4 + 12);
    ObfDereferenceObject(v4);
  }
  LOBYTE(v2) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    4,
    133,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v3);
  return (unsigned int)v3;
}
