/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A106C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00141F0 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A377C (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_.c)
 * Callees:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A12AC (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A12E0 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A1440 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?allocate@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C00A14C0 (-allocate@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

_QWORD *__fastcall ndisBindGetFilterDriver(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct NDIS_BIND_FILTER_DRIVER *v12; // rcx
  __int64 v13; // rsi
  _QWORD *v14; // rdx
  __int64 *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-20h] BYREF
  KLockThisExclusive v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v18, (struct KPushLockBase *)(qword_1C0089678 + 8));
  v6 = qword_1C0089678;
  v7 = 0LL;
  v8 = *(_DWORD *)(qword_1C0089678 + 40);
  while ( (_DWORD)v7 != v8 )
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 40) )
      __fastfail(0xBAD0FFu);
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8 * v7);
    v17 = v9;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 80));
      v9 = v17;
    }
    v10 = *(_QWORD *)(v9 + 40) - *a2;
    if ( !v10 )
      v10 = *(_QWORD *)(v9 + 48) - a2[1];
    if ( !v10 )
    {
      if ( !a3 || ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)(v9 + 8)) )
      {
        v17 = 0LL;
        *a1 = v9;
      }
      else
      {
        *a1 = 0LL;
      }
      v15 = &v17;
      goto LABEL_17;
    }
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v17);
    v7 = (unsigned int)(v7 + 1);
  }
  v19 = 0LL;
  if ( (unsigned __int8)KRef<NDIS_BIND_FILTER_DRIVER>::allocate(&v19)
    && (v11 = v19,
        v12 = (struct NDIS_BIND_FILTER_DRIVER *)(v19 + 8),
        *(_OWORD *)(v19 + 40) = *(_OWORD *)a2,
        ndisBindReadFilterDriverConfiguration(v12))
    && (v13 = qword_1C0089678,
        (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::grow(
                           qword_1C0089678 + 32,
                           (unsigned int)(*(_DWORD *)(qword_1C0089678 + 40) + 1))) )
  {
    v14 = (_QWORD *)(*(_QWORD *)(v13 + 48) + 8LL * *(unsigned int *)(v13 + 40));
    if ( v14 )
    {
      *v14 = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 80));
      v11 = v19;
    }
    ++*(_DWORD *)(v13 + 40);
    v19 = 0LL;
    *a1 = v11;
  }
  else
  {
    *a1 = 0LL;
  }
  v15 = &v19;
LABEL_17:
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(v15);
  KLockHolder::~KLockHolder(&v18);
  return a1;
}
