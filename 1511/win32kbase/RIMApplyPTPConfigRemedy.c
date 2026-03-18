/*
 * XREFs of RIMApplyPTPConfigRemedy @ 0x1C00D1390
 * Callers:
 *     rimInputApc @ 0x1C007C160 (rimInputApc.c)
 * Callees:
 *     UserLogError @ 0x1C0009DD0 (UserLogError.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C000FE08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0045FB0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0049E20 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C004A48C (_TlgWrite.c)
 *     RIMConfigurePointerDevice @ 0x1C007BDB4 (RIMConfigurePointerDevice.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00C3DAC (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00CE68C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C00CE858 (ApiSetIsPTPInputEnabled.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C00CE8D0 (ApiSetSetUserPTPEnabledPreference.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00D2B90 (WPP_RECORDER_SF_qqd.c)
 */

void __fastcall RIMApplyPTPConfigRemedy(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // r8d
  unsigned __int8 v5; // cl
  _QWORD *v6; // rsi
  __int64 v7; // r14
  const GUID *v8; // r9
  const GUID *v9; // r9
  int v10; // edx
  int v11; // r8d
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v13[8]; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  __int64 v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h] BYREF
  int v20; // [rsp+8Ch] [rbp+3h]
  _DWORD *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  __int64 v24; // [rsp+A0h] [rbp+17h]
  _DWORD v25[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  if ( !*(_BYTE *)(a2 + 48) && (*(_DWORD *)(a2 + 176) & 0x400000) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v13, 1);
    if ( (unsigned int)ApiSetIsPTPInputEnabled() && (*(_DWORD *)(a2 + 176) & 0x800000) != 0 )
    {
      WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v3, v4, 19);
      v5 = *(_BYTE *)(a2 + 197);
      *(_BYTE *)(a2 + 197) = v5 + 1;
      if ( v5 >= 0x14u )
      {
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
        {
          v17 = 0;
          v20 = 0;
          v15 = &v19;
          v18 = *(_QWORD *)(a2 + 208);
          v19 = *(unsigned __int16 *)(a2 + 200);
          v16 = 2;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EDBEC, 0LL, v9, 4u, &pData);
        }
        UserLogError(-1073741550);
        *(_DWORD *)(a2 + 176) &= ~0x800000u;
        WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 20);
      }
      else
      {
        Object = 0LL;
        RIMFindReferencedSiblingPointerDeviceForMouseDevice(a2, (struct _LIST_ENTRY **)&Object);
        v6 = Object;
        if ( Object )
        {
          v7 = *((_QWORD *)Object + 50);
          RIMLockExclusive(v7 + 96);
          if ( *(_BYTE *)(a2 + 197) == 1 && hProvider > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
            {
              v17 = 0;
              v20 = 0;
              v23 = 0;
              v25[1] = 0;
              v15 = &v19;
              v18 = *(_QWORD *)(a2 + 208);
              v19 = *(unsigned __int16 *)(a2 + 200);
              v21 = v25;
              v24 = v6[34];
              v25[0] = *((unsigned __int16 *)v6 + 132);
              v16 = 2;
              v22 = 2;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00EDC25, 0LL, v8, 6u, &pData);
            }
          }
          RIMConfigurePointerDevice(v7, (__int64)(v6 + 8), v6[58]);
          ApiSetSetUserPTPEnabledPreference();
          RIMUnlockExclusive(v7 + 96);
          CompositionObject::Release(v6);
        }
      }
    }
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v13);
  }
}
