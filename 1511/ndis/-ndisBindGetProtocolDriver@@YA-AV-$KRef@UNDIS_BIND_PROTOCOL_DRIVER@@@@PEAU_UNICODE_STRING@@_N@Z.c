/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A22E4
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@PEAU_UNICODE_STRING@@@Z @ 0x1C00A5D40 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_B.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A70D0 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00C96E0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A210C (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00A216C (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52FC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A58C0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A6A9C (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A7A04 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 */

_QWORD *__fastcall ndisBindGetProtocolDriver(_QWORD *a1, const struct _UNICODE_STRING *a2, char a3)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  _WORD *PoolWithTag; // rax
  _WORD *v14; // rsi
  struct Rtl::KString *v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  KLockHolder v18; // [rsp+20h] [rbp-20h] BYREF
  _WORD *v19; // [rsp+88h] [rbp+48h] BYREF

  v18.m_State = Unlocked;
  v18.m_Region.m_Entered = 0;
  v18.m_Lock = (KPushLockBase *)(qword_1C00837F0 + 8);
  KLockHolder::AcquireExclusive(&v18);
  v6 = qword_1C00837F0;
  v7 = 0LL;
  v8 = *(_DWORD *)(qword_1C00837F0 + 64);
  LODWORD(v19) = v8;
  while ( (_DWORD)v7 != v8 )
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 64) )
      __fastfail(0xBAD0FFu);
    v9 = *(_QWORD *)(v6 + 72);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8 * v7) + 40LL);
    if ( *(_WORD *)(v10 + 8) == a2->Length
      && !_wcsnicmp(*(const wchar_t **)(v10 + 16), a2->Buffer, (unsigned __int64)*(unsigned __int16 *)(v10 + 8) >> 1) )
    {
      if ( !a3
        || ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)(*(_QWORD *)(v9 + 8 * v7) + 8LL)) )
      {
        v11 = *(_QWORD *)(v9 + 8 * v7);
        *a1 = v11;
        if ( v11 )
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 64));
      }
      else
      {
        *a1 = 0LL;
      }
      goto LABEL_10;
    }
    v8 = (int)v19;
    v7 = (unsigned int)(v7 + 1);
  }
  v19 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x44745042u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_12;
  PoolWithTag[8] = 0;
  *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 12;
  *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 12;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  *((_DWORD *)PoolWithTag + 12) = 0;
  *((_QWORD *)PoolWithTag + 7) = 0LL;
  *((_DWORD *)PoolWithTag + 16) = 1;
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v19);
  v19 = v14;
  v15 = Rtl::KString::Initialize(a2);
  KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset((void **)v14 + 5, v15);
  if ( !*((_QWORD *)v14 + 5) )
    goto LABEL_12;
  if ( ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)(v14 + 4))
    && (v16 = qword_1C00837F0,
        (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>>::grow(
                           qword_1C00837F0 + 56,
                           (unsigned int)(*(_DWORD *)(qword_1C00837F0 + 64) + 1))) )
  {
    v17 = (_QWORD *)(*(_QWORD *)(v16 + 72) + 8LL * *(unsigned int *)(v16 + 64));
    if ( v17 )
    {
      *v17 = v14;
      _InterlockedAdd((volatile signed __int32 *)v14 + 16, 1u);
    }
    ++*(_DWORD *)(v16 + 64);
    v19 = 0LL;
    *a1 = v14;
  }
  else
  {
LABEL_12:
    *a1 = 0LL;
  }
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v19);
LABEL_10:
  KLockHolder::~KLockHolder(&v18);
  return a1;
}
