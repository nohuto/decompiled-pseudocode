/*
 * XREFs of _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A56AC
 * Callers:
 *     ??$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@Z @ 0x1C00A5324 (--$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8a.c)
 * Callees:
 *     ?reserve@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A5880 (-reserve@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A596C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6FE0 (-append@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A7130 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C00B08E8 (Ndis--sortProtocolsByPointer.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00D00EC (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator()(__int64 *a1, const WCHAR *a2)
{
  volatile signed __int32 *v3; // rbx
  PVOID *ProtocolDriver; // rax
  PVOID v5; // rcx
  _QWORD *PoolWithTag; // rax
  char *v7; // rdi
  volatile signed __int32 **v8; // rsi
  volatile signed __int32 *v9; // rcx
  char *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdi
  char v13; // al
  unsigned int v14; // edi
  PVOID v16; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  PVOID v18; // [rsp+78h] [rbp+38h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  if ( !*a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, a2);
  RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  v3 = 0LL;
  v18 = 0LL;
  ProtocolDriver = (PVOID *)ndisBindGetProtocolDriver(&v16, &DestinationString, 0LL);
  if ( &v18 != ProtocolDriver )
  {
    v3 = (volatile signed __int32 *)*ProtocolDriver;
    v18 = *ProtocolDriver;
    *ProtocolDriver = 0LL;
  }
  v5 = v16;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 16, 0xFFFFFFFF) == 1 && v5 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v5);
    v3 = (volatile signed __int32 *)v18;
  }
  if ( v3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4C745042u);
    v7 = (char *)PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = 0LL;
      *((_WORD *)PoolWithTag + 12) = 0;
      *((_BYTE *)PoolWithTag + 26) = 0;
      PoolWithTag[4] = 0LL;
      PoolWithTag[5] = 0LL;
      *((_DWORD *)PoolWithTag + 12) = 2;
      *(_QWORD *)((char *)PoolWithTag + 52) = 1LL;
      *(_QWORD *)((char *)PoolWithTag + 68) = 0LL;
      PoolWithTag[10] = 0LL;
      Rtl::KArray<void *>::reserve(PoolWithTag + 8, 4LL);
      *((_QWORD *)v7 + 12) = v7 + 88;
      *((_QWORD *)v7 + 11) = v7 + 88;
      *((_QWORD *)v7 + 13) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v8 = (volatile signed __int32 **)(v7 + 104);
      if ( v7 + 104 != (char *)&v18 )
      {
        v9 = *v8;
        if ( v3 != *v8 )
        {
          if ( v9 )
          {
            if ( _InterlockedExchangeAdd(v9 + 16, 0xFFFFFFFF) == 1 )
              KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v9);
            v3 = (volatile signed __int32 *)v18;
          }
          *v8 = v3;
          _InterlockedIncrement(v3 + 16);
          v3 = (volatile signed __int32 *)v18;
        }
      }
      P = v7;
    }
    else
    {
      P = 0LL;
    }
    if ( _InterlockedExchangeAdd(v3 + 16, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v18);
  }
  else
  {
    P = 0LL;
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v18);
  }
  v10 = (char *)P;
  if ( !P )
    goto LABEL_40;
  v11 = *a1;
  v12 = 0LL;
  if ( *(_DWORD *)(*a1 + 16) )
  {
    while ( (unsigned __int8)Ndis::sortProtocolsByPointer(*(_QWORD *)(v11 + 24) + 8 * v12, &P) )
    {
      if ( ++v12 >= (unsigned __int64)*(unsigned int *)(v11 + 16) )
        goto LABEL_20;
    }
    if ( !(unsigned __int8)Ndis::sortProtocolsByPointer(&P, *(_QWORD *)(v11 + 24) + 8 * v12) )
      goto LABEL_24;
    v13 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(v11 + 8, v12, &P);
  }
  else
  {
LABEL_20:
    v13 = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::append(v11 + 8, &P);
  }
  if ( !v13 )
  {
    v10 = (char *)P;
LABEL_40:
    v14 = -1073741670;
    goto LABEL_25;
  }
LABEL_24:
  v14 = 0;
  ++*(_DWORD *)(*a1 + 136);
  v10 = (char *)P;
LABEL_25:
  if ( v10 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v10 + 104);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v10 + 8));
    ExFreePoolWithTag(v10, 0x4C745042u);
  }
  return v14;
}
