/*
 * XREFs of RIMGetDownContactCount @ 0x1C00CF090
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMGetDownContactCount(void *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  int v4; // esi
  _DWORD *v5; // rdi
  int v6; // edx
  int v8; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    106,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  *v2 = 0;
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
        107,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 174));
      *v2 = v5[150];
      RIMUnlockExclusive((__int64)(v5 + 174));
    }
    RIMUnlockExclusive((__int64)(v5 + 24));
    ObfDereferenceObject(v5);
  }
  v8 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x6Cu,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v8);
  return (unsigned int)v4;
}
