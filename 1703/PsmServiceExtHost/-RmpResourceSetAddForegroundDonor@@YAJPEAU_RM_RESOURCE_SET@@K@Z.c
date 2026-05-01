/*
 * XREFs of ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x18002D6D8
 * Callers:
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180002F70 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002B30 (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180016718 (-RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpResourceSetAddForegroundDonor(struct _RM_RESOURCE_SET *a1)
{
  __int64 v2; // rsi
  const struct _TlgProvider_t *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 result; // rax
  struct _RM_ACTIVITY_HOST ***ForegroundSet; // rax
  const struct _TlgProvider_t *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  struct _RM_PSM_APP_FAMILY *v15; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 1392LL);
  if ( (int)RmpPsmAppFamilyTableFindByActivityHost((struct _RM_ACTIVITY_HOST *)v2, &v15) < 0
    || (v4 = (_QWORD *)((char *)v15 + 560), v15 == (struct _RM_PSM_APP_FAMILY *)-560LL) )
  {
LABEL_6:
    if ( (unsigned int)dword_18004D030 > 4 )
    {
      if ( TlgKeywordOn(v3, 1uLL) )
        TlgWrite(v6, &unk_1800410FF, v7, v8, 2u, &pData);
    }
    return 2147747081LL;
  }
  while ( 1 )
  {
    v5 = *(v4 - 1);
    if ( *(_DWORD *)(v5 + 600) == 2 && !_wcsicmp((const wchar_t *)(v5 + 64), (const wchar_t *)(v2 + 64)) )
      break;
    v4 = (_QWORD *)*v4;
    if ( !v4 )
      goto LABEL_6;
  }
  ForegroundSet = (struct _RM_ACTIVITY_HOST ***)RmpActivityHostGetForegroundSet((struct _RM_ACTIVITY_HOST *)v5);
  if ( !ForegroundSet )
  {
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v11, 1uLL) )
      TlgWrite(v12, &unk_180041200, v13, v14, 2u, &pData);
    return 2147747081LL;
  }
  result = RmpResourceSetAddRecipient(ForegroundSet, a1, 7);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
