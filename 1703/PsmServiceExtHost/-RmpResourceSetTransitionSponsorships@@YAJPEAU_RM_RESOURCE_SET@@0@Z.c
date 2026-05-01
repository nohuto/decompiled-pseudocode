/*
 * XREFs of ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x1800170F8
 * Callers:
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001754C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180017224 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800174E4 (-RmpResourceSetRemoveAllDonors@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180017518 (-RmpResourceSetRemoveAllRecipients@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180017778 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpResourceSetTransitionSponsorships(struct _RM_RESOURCE_SET *a1, struct _RM_RESOURCE_SET *a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  const struct _TlgProvider_t *v6; // rcx
  __int64 v8; // rsi
  int v9; // edx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // [rsp+30h] [rbp-69h] BYREF
  __int64 v13; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v15[16]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v16; // [rsp+58h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  int *v18; // [rsp+90h] [rbp-9h]
  int v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+9Ch] [rbp+3h]
  __int64 *v21; // [rsp+A0h] [rbp+7h]
  int v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+ACh] [rbp+13h]
  __int64 *v24; // [rsp+B0h] [rbp+17h]
  int v25; // [rsp+B8h] [rbp+1Fh]
  int v26; // [rsp+BCh] [rbp+23h]

  v2 = *((_QWORD *)a2 + 5);
  v3 = 0LL;
  if ( *((_DWORD *)a1 + 20) )
  {
    while ( 1 )
    {
      v12 = RmpResourceSetAddRecipient(a2, *(struct _RM_RESOURCE_SET **)(*((_QWORD *)a1 + 9) + 8 * v3), 0x30u);
      v6 = (const struct _TlgProvider_t *)(unsigned int)v12;
      if ( v12 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)a1 + 20) )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    if ( (*(_BYTE *)(v2 + 1450) & 7u) - 2 > 2 || (v8 = 0LL, !*((_DWORD *)a1 + 26)) )
    {
LABEL_3:
      if ( *((_DWORD *)a2 + 26) && (*(_BYTE *)(v2 + 1450) & 7) != 4 )
      {
        RmpResourceSetGetReportedCommitThresholds(a2, (struct _RM_COMMIT_THRESHOLDS *)v15);
        *((_QWORD *)a2 + 11) = v16;
      }
      RmpResourceSetRemoveAllRecipients(a1);
      RmpResourceSetRemoveAllDonors(a1);
      RmpResourceSetUpdateDonatedCommmit(a2, 5u);
      LODWORD(v6) = 0;
      return (unsigned int)v6;
    }
    while ( 1 )
    {
      v12 = RmpResourceSetAddRecipient(*(struct _RM_RESOURCE_SET **)(*((_QWORD *)a1 + 12) + 8 * v8), a2, 0x30u);
      v6 = (const struct _TlgProvider_t *)(unsigned int)v12;
      if ( v12 < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)a1 + 26) )
        goto LABEL_3;
    }
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v6, 9uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = &v12;
    v13 = *((_QWORD *)a2 + 3);
    v21 = &v13;
    v14 = *((_QWORD *)a1 + 3);
    v24 = &v14;
    v19 = 4;
    v22 = v9 - 1;
    v25 = v9 - 1;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v9 - 1), &unk_1800411A1, v10, v11, 5u, &pData);
    LODWORD(v6) = v12;
  }
  return (unsigned int)v6;
}
