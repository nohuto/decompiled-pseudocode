/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A738C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001CB10 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A12BC (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00AD638 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B1894 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00CEFA8 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall ndisBindGetFilterDriver(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  __int64 v8; // rsi
  int v9; // r13d
  char *v10; // rbx
  __int64 v11; // rcx
  PVOID *p_P; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v15; // rsi
  __int128 v16; // xmm0
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  PVOID P; // [rsp+20h] [rbp-20h] BYREF
  KLockHolder v20; // [rsp+28h] [rbp-18h] BYREF
  _WORD *v21; // [rsp+88h] [rbp+48h] BYREF

  v4 = qword_1C0085818 + 8;
  v20.m_Lock = (KPushLockBase *)(qword_1C0085818 + 8);
  KeEnterCriticalRegion();
  v20.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  v7 = qword_1C0085818;
  v8 = 0LL;
  v20.m_State = Exclusive;
  v9 = *(_DWORD *)(qword_1C0085818 + 40);
  while ( (_DWORD)v8 != v9 )
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 40) )
      __fastfail(0xBAD0FFu);
    v10 = *(char **)(*(_QWORD *)(v7 + 48) + 8 * v8);
    P = v10;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 20);
      v10 = (char *)P;
    }
    v11 = *((_QWORD *)v10 + 5) - *a2;
    if ( !v11 )
      v11 = *((_QWORD *)v10 + 6) - a2[1];
    if ( !v11 )
    {
      if ( !a3 || ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)(v10 + 8)) )
      {
        P = 0LL;
        *a1 = v10;
      }
      else
      {
        *a1 = 0LL;
      }
      p_P = &P;
      goto LABEL_16;
    }
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 20, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(P);
    }
    v8 = (unsigned int)(v8 + 1);
  }
  v21 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x446C4642u);
  p_P = (PVOID *)&v21;
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_27:
    *a1 = 0LL;
    goto LABEL_16;
  }
  PoolWithTag[8] = 0;
  *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 12;
  *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 12;
  *((_DWORD *)PoolWithTag + 14) = 0;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_DWORD *)PoolWithTag + 20) = 1;
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v21);
  v16 = *(_OWORD *)a2;
  v21 = v15;
  *(_OWORD *)(v15 + 20) = v16;
  if ( !ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)(v15 + 4))
    || (v17 = qword_1C0085818,
        !(unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::grow(
                            qword_1C0085818 + 32,
                            (unsigned int)(*(_DWORD *)(qword_1C0085818 + 40) + 1))) )
  {
    p_P = (PVOID *)&v21;
    goto LABEL_27;
  }
  v18 = (_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL * *(unsigned int *)(v17 + 40));
  if ( v18 )
  {
    *v18 = v15;
    _InterlockedAdd((volatile signed __int32 *)v15 + 20, 1u);
  }
  ++*(_DWORD *)(v17 + 40);
  p_P = (PVOID *)&v21;
  v21 = 0LL;
  *a1 = v15;
LABEL_16:
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(p_P);
  KLockHolder::~KLockHolder(&v20);
  return a1;
}
