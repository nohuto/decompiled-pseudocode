/*
 * XREFs of LdrpResReportResourceAccessInternal @ 0x180082730
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     LdrResGetRCConfig @ 0x18003A810 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003F1C4 (LdrpGetRcConfig.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800D1D28 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1D64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1D90 (_TlgWrite.c)
 */

char __fastcall LdrpResReportResourceAccessInternal(PVOID BaseOfImage, ULONG64 a2, __int64 *a3, int a4)
{
  _DWORD *RcConfig; // rax
  __int64 v9; // rdx
  int v10; // r15d
  __int64 v11; // r9
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // r10
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // r10
  const GUID *v22; // r8
  const GUID *v23; // r9
  __int64 v24; // r10
  __int16 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int16 *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData[2]; // [rsp+F0h] [rbp-10h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF

  LODWORD(RcConfig) = RtlRunOnceExecuteOnce(&stru_180153138, LdrpResReportResourceAccessInternalInitOnce, 0LL, 0LL);
  if ( (int)RcConfig >= 0 )
  {
    LODWORD(RcConfig) = (unsigned __int16)dword_180152FE0++;
    if ( !(_DWORD)RcConfig )
    {
      if ( a2 )
      {
        v27 = 0LL;
        v10 = 1;
        LODWORD(RcConfig) = LdrResGetRCConfig((__int64)BaseOfImage, a2, &v27, 4096, 0);
        if ( (int)RcConfig >= 0 )
          v11 = v27;
        else
          v11 = 0LL;
      }
      else
      {
        v10 = 0;
        RcConfig = LdrpGetRcConfig(BaseOfImage, v9, 0, 1);
        v11 = (__int64)RcConfig;
      }
      if ( v11 )
      {
        if ( a4 >= 2 )
        {
          if ( a4 == 2 )
          {
            if ( dword_18014C4C0 > 5u )
            {
              LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18014C4C0, 0x800000000000uLL);
              if ( (_BYTE)RcConfig )
              {
                v28 = *a3;
                v29 = a3[1];
                v26 = 4;
                v38 = 4LL;
                v39 = (__int64 *)&v26;
                v33 = &v28;
                v41 = (__int64 *)&v17[1].Data4[4];
                LODWORD(v27) = v10;
                v34 = 8LL;
                v35 = &v29;
                v36 = 8LL;
                v37 = &v27;
                v40 = v18;
                v42 = 16LL;
                LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18014C4C0, &unk_18011C4C0, v16, v17, 7u, &v32);
              }
            }
          }
          else if ( a4 == 3 )
          {
            if ( dword_18014C4C0 > 5u )
            {
              LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18014C4C0, 0x800000000000uLL);
              if ( (_BYTE)RcConfig )
              {
                v29 = *a3;
                v28 = a3[1];
                v30 = a3[2];
                v26 = 4;
                v40 = 4LL;
                v35 = &v28;
                v41 = (__int64 *)&v26;
                v33 = &v29;
                v37 = &v30;
                v43 = (__int16 *)&v20[1].Data4[4];
                LODWORD(v27) = v10;
                v34 = 8LL;
                v36 = 8LL;
                v38 = 8LL;
                v39 = &v27;
                v42 = v21;
                v44 = 16LL;
                LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18014C4C0, &unk_18011C405, v19, v20, 8u, &v32);
              }
            }
          }
          else if ( dword_18014C4C0 > 5u )
          {
            LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18014C4C0, 0x800000000000uLL);
            if ( (_BYTE)RcConfig )
            {
              v30 = *a3;
              v29 = a3[1];
              v28 = a3[2];
              v31 = a3[3];
              v26 = 4;
              v42 = 4LL;
              v35 = &v29;
              v43 = &v26;
              v33 = &v30;
              v37 = &v28;
              v45 = &v23[1].Data4[4];
              LODWORD(v27) = v10;
              v34 = 8LL;
              v36 = 8LL;
              v38 = 8LL;
              v39 = &v31;
              v40 = 8LL;
              v41 = &v27;
              v44 = v24;
              v46 = 16LL;
              LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18014C4C0, &unk_18011C33D, v22, v23, 9u, &v32);
            }
          }
        }
        else if ( dword_18014C4C0 > 5u )
        {
          LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18014C4C0, 0x800000000000uLL);
          if ( (_BYTE)RcConfig )
          {
            TlgCreateWsz(&pDesc, L"ResIdCount less than 2.");
            LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18014C4C0, &unk_18011C301, v14, v15, 3u, pData);
          }
        }
      }
      else if ( dword_18014C4C0 > 5u )
      {
        LOBYTE(RcConfig) = TlgKeywordOn((TraceLoggingHProvider)&dword_18014C4C0, 0x800000000000uLL);
        if ( (_BYTE)RcConfig )
        {
          TlgCreateWsz(&pDesc, L"Failed to retrieve service checksum.");
          LOBYTE(RcConfig) = TlgWrite((TraceLoggingHProvider)&dword_18014C4C0, &unk_18011C3BC, v12, v13, 3u, pData);
        }
      }
    }
  }
  return (char)RcConfig;
}
