/*
 * XREFs of ndisMediaDisconnectWorker @ 0x1C00D4820
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisRequestDeviceLowPower @ 0x1C009C64C (ndisRequestDeviceLowPower.c)
 */

void __fastcall ndisMediaDisconnectWorker(PVOID P, struct _TlgProvider_t *Context)
{
  enum _DEVICE_POWER_STATE AnnotationFunc; // eax
  enum _DEVICE_POWER_STATE KeywordAny_high; // ebx
  _BYTE v6[248]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v7[9]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v8; // [rsp+139h] [rbp+39h]
  __int16 v9; // [rsp+141h] [rbp+41h]
  char v10; // [rsp+143h] [rbp+43h]

  memset(v6, 0, sizeof(v6));
  memset(v7, 0, sizeof(v7));
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x15u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context);
  if ( (*(&Context[70].LevelPlus1 + 1) & 8) != 0 )
  {
    AnnotationFunc = (enum _DEVICE_POWER_STATE)Context[19].AnnotationFunc;
    KeywordAny_high = HIDWORD(Context[17].KeywordAny);
    *(_DWORD *)v7 = 1311360;
    *(_DWORD *)((char *)&v8 + 3) = 1;
    if ( AnnotationFunc < KeywordAny_high )
      KeywordAny_high = AnnotationFunc;
    memset(v6, 0, sizeof(v6));
    *(_DWORD *)&v6[88] |= 8u;
    *(_DWORD *)&v6[8] = 0;
    *(_QWORD *)&v6[104] = &ndisIntReqGeneric;
    *(_DWORD *)v6 = 15466902;
    *(_QWORD *)&v6[40] = v7;
    *(_DWORD *)&v6[32] = -50265847;
    *(_DWORD *)&v6[4] = 1;
    *(_DWORD *)&v6[48] = 20;
    if ( !(unsigned int)ndisQuerySetMiniport(Context, 0LL, (struct _NDIS_OID_REQUEST *)v6, 0LL, 0LL) )
    {
      HIDWORD(Context[20].CallbackContext) = HIDWORD(Context[19].CallbackContext);
      ndisRequestDeviceLowPower(
        Context,
        KeywordAny_high,
        (PREQUEST_POWER_COMPLETE)ndisMediaDisconnectComplete,
        Context,
        NdisMEventDx_D3DTimeout);
    }
    ExFreePoolWithTag(P, 0);
  }
  ndisDereferenceMiniport((__int64)Context);
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(0x16u, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, (__int64)Context);
}
