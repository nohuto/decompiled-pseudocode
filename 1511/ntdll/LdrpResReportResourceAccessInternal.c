/*
 * XREFs of LdrpResReportResourceAccessInternal @ 0x18005246C
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x18003BEB0 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003C440 (LdrpGetRcConfig.c)
 *     _TlgWrite @ 0x180047838 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18004F12C (_TlgKeywordOn.c)
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     _TlgCreateWsz @ 0x180086510 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

char __fastcall LdrpResReportResourceAccessInternal(PVOID BaseOfImage, ULONG64 a2, __int64 *a3, int a4)
{
  const struct _TlgProvider_t *RcConfig; // rax
  __int64 v9; // rdx
  char v10; // r8
  unsigned int v11; // r14d
  ULONGLONG v12; // rdx
  const struct _TlgProvider_t *v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r9
  TraceLoggingHProvider v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r9
  TraceLoggingHProvider v21; // rcx
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  const struct _TlgProvider_t *v24; // rcx
  const GUID *v25; // r9
  __int16 v27; // [rsp+30h] [rbp-D0h] BYREF
  GUID pActivityId; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  unsigned __int8 *Data4; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  GUID *p_pActivityId; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  GUID *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  GUID *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int16 *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v47[2]; // [rsp+F0h] [rbp-10h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF

  LODWORD(RcConfig) = RtlRunOnceExecuteOnce(
                        &RunOnce,
                        (PRTL_RUN_ONCE_INIT_FN)LdrpResReportResourceAccessInternalInitOnce,
                        0LL,
                        0LL);
  if ( (int)RcConfig >= 0 )
  {
    v10 = dword_180145ED4;
    LOBYTE(RcConfig) = ++dword_180145ED4;
    if ( !v10 )
    {
      if ( a2 )
      {
        *(_QWORD *)&pActivityId.Data1 = 0LL;
        v11 = 1;
        LODWORD(RcConfig) = LdrResGetRCConfig((__int64)BaseOfImage, a2, (__int64 *)&pActivityId, 4096, 0);
        if ( (int)RcConfig < 0 )
          v13 = 0LL;
        else
          v13 = *(const struct _TlgProvider_t **)&pActivityId.Data1;
      }
      else
      {
        v11 = 0;
        RcConfig = (const struct _TlgProvider_t *)LdrpGetRcConfig(BaseOfImage, v9, 0, 1);
        v13 = RcConfig;
      }
      if ( v13 )
      {
        if ( a4 < 2 )
        {
          if ( (unsigned int)dword_180142170 > 5 )
          {
            LOBYTE(RcConfig) = TlgKeywordOn(v13, v12);
            if ( (_BYTE)RcConfig )
            {
              TlgCreateWsz(&pDesc, L"ResIdCount less than 2.");
              LOBYTE(RcConfig) = TlgWrite(v21, &unk_180111CD9, v22, v23, 3u, v47);
            }
          }
        }
        else if ( a4 == 2 )
        {
          if ( (unsigned int)dword_180142170 > 5 )
          {
            LOBYTE(RcConfig) = TlgKeywordOn(v13, v12);
            if ( (_BYTE)RcConfig )
            {
              v29 = *a3;
              *(_QWORD *)pActivityId.Data4 = a3[1];
              v27 = 4;
              v38 = 4LL;
              v39 = (GUID *)&v27;
              v33 = (unsigned __int8 *)&v29;
              v41 = (GUID *)((char *)v24 + 28);
              pActivityId.Data1 = v11;
              v34 = 8LL;
              Data4 = pActivityId.Data4;
              v36 = 8LL;
              p_pActivityId = &pActivityId;
              v40 = (__int64)v25;
              v42 = 16LL;
              LOBYTE(RcConfig) = TlgWrite(v24, &unk_180111D84, (LPCGUID)pActivityId.Data4, v25, 7u, &pData);
            }
          }
        }
        else if ( a4 == 3 )
        {
          if ( (unsigned int)dword_180142170 > 5 )
          {
            LOBYTE(RcConfig) = TlgKeywordOn(v13, v12);
            if ( (_BYTE)RcConfig )
            {
              *(_QWORD *)pActivityId.Data4 = *a3;
              v29 = a3[1];
              v30 = a3[2];
              v27 = 4;
              v40 = 4LL;
              Data4 = (unsigned __int8 *)&v29;
              v41 = (GUID *)&v27;
              v33 = pActivityId.Data4;
              p_pActivityId = (GUID *)&v30;
              v43 = (__int16 *)((char *)v14 + 28);
              pActivityId.Data1 = v11;
              v34 = 8LL;
              v36 = 8LL;
              v38 = 8LL;
              v39 = &pActivityId;
              v42 = (__int64)v15;
              v44 = 16LL;
              LOBYTE(RcConfig) = TlgWrite(v14, &unk_180111D15, &pActivityId, v15, 8u, &pData);
            }
          }
        }
        else if ( (unsigned int)dword_180142170 > 5 )
        {
          LOBYTE(RcConfig) = TlgKeywordOn(v13, v12);
          if ( (_BYTE)RcConfig )
          {
            v30 = *a3;
            *(_QWORD *)pActivityId.Data4 = a3[1];
            v29 = a3[2];
            v31 = a3[3];
            v27 = 4;
            v42 = 4LL;
            Data4 = pActivityId.Data4;
            v43 = &v27;
            v33 = (unsigned __int8 *)&v30;
            p_pActivityId = (GUID *)&v29;
            v45 = (char *)v19 + 28;
            pActivityId.Data1 = v11;
            v34 = 8LL;
            v36 = 8LL;
            v38 = 8LL;
            v39 = (GUID *)&v31;
            v40 = 8LL;
            v41 = &pActivityId;
            v44 = (__int64)v20;
            v46 = 16LL;
            LOBYTE(RcConfig) = TlgWrite(v19, &unk_180111C11, (LPCGUID)&v31, v20, 9u, &pData);
          }
        }
      }
      else if ( (unsigned int)dword_180142170 > 5 )
      {
        LOBYTE(RcConfig) = TlgKeywordOn(0LL, v12);
        if ( (_BYTE)RcConfig )
        {
          TlgCreateWsz(&pDesc, L"Failed to retrieve service checksum.");
          LOBYTE(RcConfig) = TlgWrite(v16, &unk_180111C90, v17, v18, 3u, v47);
        }
      }
    }
  }
  return (char)RcConfig;
}
