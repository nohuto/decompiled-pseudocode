/*
 * XREFs of RIMIsPrimaryPointerDeviceDown @ 0x1C00CF860
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIsPrimaryPointerDeviceDown(void *a1, int *a2)
{
  int *v2; // r14
  int v4; // edi
  _QWORD *v5; // rbx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    103,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3,
        104,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 87));
      v7 = v5[76];
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 1576);
        if ( v8 )
          *v2 = (*(unsigned __int8 *)(v8 + 2620) >> 2) & 1;
      }
      RIMUnlockExclusive((__int64)(v5 + 87));
    }
    RIMUnlockExclusive((__int64)(v5 + 12));
    ObfDereferenceObject(v5);
  }
  v10 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x69u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v10);
  return (unsigned int)v4;
}
