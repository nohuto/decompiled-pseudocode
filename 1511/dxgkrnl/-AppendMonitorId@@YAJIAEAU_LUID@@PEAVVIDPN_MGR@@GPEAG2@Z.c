/*
 * XREFs of ?AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C005D194
 * Callers:
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005CEA4 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00011C8 (RtlStringCchLengthW.c)
 *     ?GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C005D5E4 (-GetMonitorIdFromTargetId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
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
  __int64 v11; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  size_t pcchLength[3]; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v9) = GetMonitorIdFromTargetId(a1, a2, a3, a4, psz);
  if ( (int)v9 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = 291LL;
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
