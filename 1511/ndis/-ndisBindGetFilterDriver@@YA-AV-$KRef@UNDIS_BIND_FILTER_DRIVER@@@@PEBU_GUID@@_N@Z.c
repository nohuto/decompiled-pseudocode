/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A6664
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001EE40 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A5E24 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A6B74 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A7870 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A78A4 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 */

_QWORD *__fastcall ndisBindGetFilterDriver(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v14; // rsi
  __int128 v15; // xmm0
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  KLockHolder v19; // [rsp+28h] [rbp-18h] BYREF
  _WORD *v20; // [rsp+88h] [rbp+48h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v19, (struct KPushLockBase *)(qword_1C00837F0 + 8));
  v6 = qword_1C00837F0;
  v7 = 0LL;
  v8 = *(_DWORD *)(qword_1C00837F0 + 40);
  while ( (_DWORD)v7 != v8 )
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 40) )
      __fastfail(0xBAD0FFu);
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8 * v7);
    v18 = v9;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 80));
      v9 = v18;
    }
    v10 = *(_QWORD *)(v9 + 40) - *a2;
    if ( !v10 )
      v10 = *(_QWORD *)(v9 + 48) - a2[1];
    if ( !v10 )
    {
      if ( !a3 || ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)(v9 + 8)) )
      {
        v18 = 0LL;
        *a1 = v9;
      }
      else
      {
        *a1 = 0LL;
      }
      v11 = &v18;
      goto LABEL_13;
    }
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v18);
    v7 = (unsigned int)(v7 + 1);
  }
  v20 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x446C4642u);
  v11 = (__int64 *)&v20;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_15:
    *a1 = 0LL;
    goto LABEL_13;
  }
  PoolWithTag[8] = 0;
  *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 12;
  *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 12;
  *((_DWORD *)PoolWithTag + 14) = 0;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_DWORD *)PoolWithTag + 20) = 1;
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v20);
  v15 = *(_OWORD *)a2;
  v20 = v14;
  *(_OWORD *)(v14 + 20) = v15;
  if ( !ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)(v14 + 4))
    || (v16 = qword_1C00837F0,
        !(unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::grow(
                            qword_1C00837F0 + 32,
                            (unsigned int)(*(_DWORD *)(qword_1C00837F0 + 40) + 1))) )
  {
    v11 = (__int64 *)&v20;
    goto LABEL_15;
  }
  v17 = (_QWORD *)(*(_QWORD *)(v16 + 48) + 8LL * *(unsigned int *)(v16 + 40));
  if ( v17 )
  {
    *v17 = v14;
    _InterlockedAdd((volatile signed __int32 *)v14 + 20, 1u);
  }
  ++*(_DWORD *)(v16 + 40);
  v11 = (__int64 *)&v20;
  v20 = 0LL;
  *a1 = v14;
LABEL_13:
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(v11);
  KLockHolder::~KLockHolder(&v19);
  return a1;
}
