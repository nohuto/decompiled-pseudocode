/*
 * XREFs of ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980
 * Callers:
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800020C0 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x1800170F8 (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x180018468 (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180019420 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x18002D6D8 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180010B7C (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180017224 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x1800187E0 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z @ 0x180018B6C (-RmpResourceSetGetHostId@@YA_KPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ??$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z @ 0x180018B88 (--$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z.c)
 *     ??$RmpArrayFindElementIndex@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@KPEAU0@@Z @ 0x180018CD0 (--$RmpArrayFindElementIndex@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@KPEAU0@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpResourceSetAddRecipient(struct _RM_ACTIVITY_HOST ***a1, struct _RM_RESOURCE_SET *a2, char a3)
{
  int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // eax
  int v9; // r8d
  unsigned __int64 HostId; // rax
  int v11; // edx
  unsigned __int64 v12; // rax
  int v13; // edx
  TraceLoggingHProvider v14; // rcx
  LPCGUID cData; // r8
  LPCGUID v16; // r9
  unsigned int Element; // eax
  unsigned int v19; // edx
  int HasMemoryForFGSharing; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST **v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *p_HasMemoryForFGSharing; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  int v28; // [rsp+8Ch] [rbp-74h]
  struct _RM_ACTIVITY_HOST ***v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  unsigned __int64 *v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]
  unsigned __int64 *v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  char *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  char *v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]

  if ( (a3 & 0x10) != 0
    && (Element = RmpArrayFindElementIndex<_RM_RESOURCE_SET *>(*((_QWORD *)a2 + 12), *((unsigned int *)a2 + 26), a1),
        Element < v19) )
  {
    v7 = 0LL;
    HasMemoryForFGSharing = 0;
  }
  else
  {
    HasMemoryForFGSharing = ExecutionModel::ResourceSet::HasMemoryForFGSharing(a1[5], *((_QWORD *)a2 + 11));
    if ( HasMemoryForFGSharing < 0 )
      goto LABEL_14;
    RmpObjectAddRef(a2);
    v6 = RmpArrayInsertAtEnd<_RM_RESOURCE_SET *>(a1 + 9, (char *)a1 + 84, a1 + 10, a2);
    v7 = (unsigned int)v6;
    if ( v6 < 0
      || (RmpObjectAddRef((struct _RM_OBJECT_HEADER *)a1),
          v8 = RmpArrayInsertAtEnd<_RM_RESOURCE_SET *>((char *)a2 + 96, (char *)a2 + 108, (char *)a2 + 104, a1),
          v7 = (unsigned int)v8,
          v8 < 0) )
    {
      LODWORD(v7) = v7 | 0x10000000;
    }
    else
    {
      RmpResourceSetUpdateDonatedCommmit((struct _RM_RESOURCE_SET *)a1, a3);
      v7 = 0LL;
    }
    HasMemoryForFGSharing = v7;
    if ( (v7 & 0x80000000) != 0LL )
    {
LABEL_14:
      RmpResourceSetRemoveRecipient((struct _RM_RESOURCE_SET *)a1, a2, 0);
      v7 = (unsigned int)HasMemoryForFGSharing;
    }
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v7, 9uLL) )
  {
    v28 = 0;
    v31 = 0;
    v34 = 0;
    p_HasMemoryForFGSharing = &HasMemoryForFGSharing;
    v21 = a1[3];
    v29 = &v21;
    v22 = *((_QWORD *)a2 + 3);
    v32 = &v22;
    v27 = 4;
    v30 = v9 - 1;
    v33 = v9 - 1;
    HostId = RmpResourceSetGetHostId((struct _RM_RESOURCE_SET *)a1);
    v37 = 0;
    v23 = HostId;
    v35 = &v23;
    v36 = v11;
    v12 = RmpResourceSetGetHostId(a2);
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v24 = v12;
    v38 = &v24;
    v41 = (char *)(a1 + 7);
    v44 = (char *)(a1 + 8);
    v39 = v13;
    v42 = v13;
    v45 = v13;
    TlgWrite(v14, &unk_180041237, cData, v16, (UINT32)cData, &pData);
    LODWORD(v7) = HasMemoryForFGSharing;
  }
  return (unsigned int)v7;
}
