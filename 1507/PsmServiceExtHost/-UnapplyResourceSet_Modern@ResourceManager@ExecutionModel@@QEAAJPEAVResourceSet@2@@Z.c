/*
 * XREFs of ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x1800390F0
 * Callers:
 *     ?ForceReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180040500 (-ForceReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetAggregateCpuCategory@ModernActivationResourceInfo@ExecutionModel@@QEBA?AW4CpuCategory@2@PEAUIResourceSet@2@PEAK@Z @ 0x18002EF10 (-GetAggregateCpuCategory@ModernActivationResourceInfo@ExecutionModel@@QEBA-AW4CpuCategory@2@PEAU.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036734 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UnapplyResourceSet_Modern(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r10
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // r10
  UINT32 cData; // r11d
  struct ExecutionModel::ResourceSet **v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r10
  int v21; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-85h] BYREF
  int v23; // [rsp+48h] [rbp-81h] BYREF
  int v24; // [rsp+4Ch] [rbp-7Dh] BYREF
  __int64 v25; // [rsp+50h] [rbp-79h] BYREF
  struct ExecutionModel::ResourceSet *v26; // [rsp+58h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  int *v28; // [rsp+80h] [rbp-49h]
  __int64 v29; // [rsp+88h] [rbp-41h]
  struct ExecutionModel::ResourceSet **v30; // [rsp+90h] [rbp-39h]
  __int64 v31; // [rsp+98h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+B0h] [rbp-19h] BYREF
  unsigned int *v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]
  unsigned int *v36; // [rsp+D0h] [rbp+7h]
  __int64 v37; // [rsp+D8h] [rbp+Fh]
  struct ExecutionModel::ResourceSet **v38; // [rsp+E0h] [rbp+17h]
  __int64 v39; // [rsp+E8h] [rbp+1Fh]

  v23 = -1;
  v21 = 0;
  v22 = 0;
  if ( ExecutionModel::ResourceSet::IsLegacy(a2) )
  {
    v5 = 2147942487LL;
LABEL_5:
    v21 = v5;
    if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v5, 9uLL) )
    {
      v29 = v6;
      v28 = &v21;
      v26 = a2;
      v30 = &v26;
      v31 = 8LL;
      TlgCreateWsz(&pDesc, 0LL);
      TlgCreateSid(&v33, (const SID *)((char *)RmSvcGlobals + 1936));
      v25 = -1LL;
      v34 = &v22;
      v22 = 0;
      v36 = (unsigned int *)&v24;
      v12 = (struct ExecutionModel::ResourceSet **)&v25;
      v24 = 0;
LABEL_26:
      v39 = 8LL;
      v38 = v12;
      v37 = v10;
      v35 = v10;
      TlgWrite(v7, &unk_18005A998, v8, v9, cData, &pData);
      LODWORD(v5) = v21;
      return (unsigned int)v5;
    }
    return (unsigned int)v5;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 1368) + 88LL))(v4 + 1368) )
  {
    v5 = 2147747080LL;
    goto LABEL_5;
  }
  v13 = *((_QWORD *)a2 + 175);
  v14 = *(_QWORD *)(v13 + 600);
  if ( *(_QWORD *)(v14 + 40) + *(_QWORD *)(v14 + 64) < 2uLL )
  {
    v5 = 2147747075LL;
    v21 = -2147220221;
    goto LABEL_23;
  }
  v21 = ExecutionModel::ResourceSet::PerformReleaseResources(a2);
  v5 = (unsigned int)v21;
  if ( v21 < 0 )
    goto LABEL_23;
  v15 = ExecutionModel::ModernActivationResourceInfo::GetAggregateCpuCategory(v14, 0LL, (int *)&v22) - 1;
  if ( v15 )
  {
    v16 = v15 - 2;
    if ( !v16 )
    {
      v17 = v22;
      if ( v22 >= 0x64 )
      {
        v17 = 100;
LABEL_19:
        v23 = 100 * v17;
        goto LABEL_21;
      }
LABEL_16:
      v23 = v17;
      if ( v17 == -1 )
        goto LABEL_21;
      goto LABEL_19;
    }
    if ( v16 != 1 )
    {
      v17 = 1;
      goto LABEL_16;
    }
  }
  v23 = -1;
LABEL_21:
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 15)
                                                                                          + 64LL))(
          *((_QWORD *)this + 15),
          v13,
          &v23,
          0LL,
          0LL,
          0LL,
          0LL);
  v5 = (unsigned int)v21;
  if ( v21 >= 0 )
  {
    v18 = ExecutionModel::ResourceManager::MemoryLimitNotification(this, (struct _RM_ACTIVITY_HOST *)v13);
    v5 = v18;
    v21 = v18;
  }
LABEL_23:
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v5, 9uLL) )
  {
    v29 = v19;
    v28 = &v21;
    v25 = (__int64)a2;
    v30 = (struct ExecutionModel::ResourceSet **)&v25;
    v31 = 8LL;
    TlgCreateWsz(&pDesc, (LPCWSTR)(v13 + 48));
    TlgCreateSid(&v33, (const SID *)(v13 + 512));
    v7 = (const struct _TlgProvider_t *)*(unsigned int *)(v13 + 580);
    v34 = (unsigned int *)&v24;
    v22 = *(_DWORD *)(v13 + 584);
    v36 = &v22;
    v26 = *(struct ExecutionModel::ResourceSet **)(v13 + 24);
    v12 = &v26;
    v24 = (int)v7;
    goto LABEL_26;
  }
  return (unsigned int)v5;
}
