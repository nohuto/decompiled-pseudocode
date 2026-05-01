/*
 * XREFs of ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180038730
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003F1E8 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAvailabilityCheck(
        _QWORD *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v9; // edi
  unsigned int *v10; // r14
  int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  _BYTE v16[4]; // [rsp+40h] [rbp-71h] BYREF
  int v17; // [rsp+44h] [rbp-6Dh] BYREF
  unsigned int v18; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-65h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-51h] BYREF
  int *v22; // [rsp+80h] [rbp-31h]
  const struct _TlgProvider_t *v23; // [rsp+88h] [rbp-29h]
  int *v24; // [rsp+90h] [rbp-21h]
  const struct _TlgProvider_t *v25; // [rsp+98h] [rbp-19h]
  int *v26; // [rsp+A0h] [rbp-11h]
  const struct _TlgProvider_t *v27; // [rsp+A8h] [rbp-9h]
  int *v28; // [rsp+B0h] [rbp-1h]
  const struct _TlgProvider_t *v29; // [rsp+B8h] [rbp+7h]

  v5 = a4;
  v18 = a4;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v17 = 0;
  v16[0] = 0;
  if ( a3 )
  {
    v9 = 0;
    if ( a2 )
    {
      v10 = a3;
      while ( 1 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 152LL))(a1, *v10, a5);
        if ( v17 < 0 )
          break;
        ++v9;
        v10 += 6;
        if ( v9 >= a2 )
        {
          v5 = v18;
          goto LABEL_8;
        }
      }
      v5 = v18;
    }
    else
    {
LABEL_8:
      v11 = ExecutionModel::ExternalResourceSet::AvailabilityCheck(a1, a1[22], a2, a3, v5, a5, v16);
      v17 = v11;
      if ( v11 >= 0 )
      {
        if ( !v16[0] )
          v11 = -2147467259;
        v17 = v11;
      }
    }
  }
  else
  {
    v17 = -2147024882;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v23 = v12;
    v22 = &v17;
    v24 = (int *)&v18;
    v26 = (int *)&v20;
    v28 = (int *)&v19;
    v18 = a5;
    v25 = v12;
    v20 = a2;
    v27 = v12;
    v19 = v5;
    v29 = v12;
    TlgWrite(v12, &unk_18005A3FB, v13, v14, 6u, &pData);
  }
  return (unsigned int)v17;
}
