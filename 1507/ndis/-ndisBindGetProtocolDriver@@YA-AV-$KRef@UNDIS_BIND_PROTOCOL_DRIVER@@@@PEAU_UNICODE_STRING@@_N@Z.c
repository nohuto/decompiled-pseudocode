/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A596C
 * Callers:
 *     _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A56AC (_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_--operator().c)
 *     NdisRegisterProtocolDriver @ 0x1C00ADE90 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00D02D0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A09FC (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00A5B68 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00AD754 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

_QWORD *__fastcall ndisBindGetProtocolDriver(_QWORD *a1, const struct _UNICODE_STRING *a2, char a3)
{
  KPushLockBase *m_Lock; // r14
  __int64 v6; // r13
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  _WORD *PoolWithTag; // rax
  _WORD *v14; // rdi
  struct Rtl::KString *v15; // rax
  struct Rtl::KString *v16; // rcx
  struct Rtl::KString *v17; // r14
  __int64 v18; // rsi
  _QWORD *v19; // rdx
  KLockHolder v20; // [rsp+20h] [rbp-20h] BYREF
  _WORD *v22; // [rsp+98h] [rbp+58h] BYREF

  m_Lock = (KPushLockBase *)(qword_1C0085818 + 8);
  v20.m_Lock = (KPushLockBase *)(qword_1C0085818 + 8);
  KeEnterCriticalRegion();
  v20.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
  v6 = qword_1C0085818;
  v7 = 0LL;
  v20.m_State = Exclusive;
  v8 = *(_DWORD *)(qword_1C0085818 + 64);
  LODWORD(v22) = v8;
  while ( 1 )
  {
    if ( (_DWORD)v7 == v8 )
    {
      v22 = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x44745042u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_27;
      PoolWithTag[8] = 0;
      *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 12;
      *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 12;
      *((_QWORD *)PoolWithTag + 5) = 0LL;
      *((_DWORD *)PoolWithTag + 12) = 0;
      *((_QWORD *)PoolWithTag + 7) = 0LL;
      *((_DWORD *)PoolWithTag + 16) = 1;
      v22 = PoolWithTag;
      v15 = Rtl::KString::Initialize(a2);
      v16 = (struct Rtl::KString *)*((_QWORD *)v14 + 5);
      v17 = v15;
      if ( v15 != v16 )
      {
        if ( v16 )
          ExFreePoolWithTag(v16, 0x7274534Bu);
        *((_QWORD *)v14 + 5) = v17;
      }
      if ( *((_QWORD *)v14 + 5)
        && ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)(v14 + 4))
        && (v18 = qword_1C0085818,
            (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>>::grow(
                               qword_1C0085818 + 56,
                               (unsigned int)(*(_DWORD *)(qword_1C0085818 + 64) + 1))) )
      {
        v19 = (_QWORD *)(*(_QWORD *)(v18 + 72) + 8LL * *(unsigned int *)(v18 + 64));
        if ( v19 )
        {
          *v19 = v14;
          _InterlockedAdd((volatile signed __int32 *)v14 + 16, 1u);
        }
        ++*(_DWORD *)(v18 + 64);
        v22 = 0LL;
        *a1 = v14;
      }
      else
      {
LABEL_27:
        *a1 = 0LL;
      }
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v22);
      goto LABEL_24;
    }
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 64) )
      __fastfail(0xBAD0FFu);
    v9 = *(_QWORD *)(v6 + 72);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8 * v7) + 40LL);
    if ( *(_WORD *)(v10 + 8) == a2->Length
      && !_wcsnicmp(*(const wchar_t **)(v10 + 16), a2->Buffer, (unsigned __int64)*(unsigned __int16 *)(v10 + 8) >> 1) )
    {
      break;
    }
    v8 = (int)v22;
    v7 = (unsigned int)(v7 + 1);
  }
  if ( a3
    && !ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)(*(_QWORD *)(v9 + 8 * v7) + 8LL)) )
  {
    *a1 = 0LL;
LABEL_24:
    KLockHolder::~KLockHolder(&v20);
    return a1;
  }
  v11 = *(_QWORD *)(v9 + 8 * v7);
  *a1 = v11;
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 64));
    m_Lock = v20.m_Lock;
  }
  ExReleasePushLockExclusiveEx(m_Lock, 0LL);
  KeLeaveCriticalRegion();
  return a1;
}
