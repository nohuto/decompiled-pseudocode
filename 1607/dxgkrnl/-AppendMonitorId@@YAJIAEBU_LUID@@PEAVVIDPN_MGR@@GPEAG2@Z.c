/*
 * XREFs of ?AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C00B97A4
 * Callers:
 *     ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00B9818 (-CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C000A308 (RtlStringCchLengthW.c)
 *     ?GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C00B9704 (-GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 */

__int64 __fastcall AppendMonitorId(
        unsigned int a1,
        const struct _LUID *a2,
        struct VIDPN_MGR *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5,
        unsigned __int16 *psz)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  size_t pcchLength[3]; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v9) = GetMonitorIdFromTargetId(a1, a2, a3, a4, psz);
  if ( (int)v9 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = 274LL;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    v10 = RtlStringCchLengthW(psz, a4, pcchLength);
    v9 = v10;
    if ( v10 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11);
      v14[6] = a2->HighPart;
      v14[7] = a2->LowPart;
      v14[3] = v9;
      v14[4] = psz;
      v14[5] = a4;
      WdLogEvent5_WdAssertion(v14);
    }
    else
    {
      *a5 = pcchLength[0];
    }
  }
  return (unsigned int)v9;
}
