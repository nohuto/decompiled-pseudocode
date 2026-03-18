/*
 * XREFs of ?AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C005F29C
 * Callers:
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005F000 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C0008474 (RtlStringCchLengthW.c)
 *     ?GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C005F310 (-GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 */

__int64 __fastcall AppendMonitorId(
        unsigned int a1,
        struct _LUID *a2,
        struct VIDPN_MGR *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5,
        unsigned __int16 *psz)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  size_t pcchLength[3]; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v9) = GetMonitorIdFromTargetId(a1, a2, a3, a4, psz);
  if ( (int)v9 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v16 + 24) = 279LL;
    WdLogEvent5_WdError(v16);
  }
  else
  {
    v10 = RtlStringCchLengthW(psz, a4, pcchLength);
    v9 = v10;
    if ( v10 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      v17[6] = a2->HighPart;
      v17[7] = a2->LowPart;
      v17[3] = v9;
      v17[4] = psz;
      v17[5] = a4;
      WdLogEvent5_WdAssertion(v17);
    }
    else
    {
      *a5 = pcchLength[0];
    }
  }
  return (unsigned int)v9;
}
