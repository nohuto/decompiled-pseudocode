/*
 * XREFs of ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18002E4FC
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@KW4Enum@Priority@2@W44PendType@2@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEA_N4PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18000E980 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJPEAU_RM_POLICY_REQUEST_BUFFER@@K.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180001D28 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18000E690 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x18002048C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckPoolResources(
        ExecutionModel::BaseResourceSet *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 *a8)
{
  __int64 v12; // r14
  ExecutionModel::_ResourceInfo *v13; // rax
  UCHAR v14; // dl
  const struct _TlgProvider_t *v15; // rcx
  ExecutionModel::_ResourceInfo *v16; // rdi
  int v17; // ebx
  __int64 v18; // rbp
  char *v19; // rsi
  const GUID *v20; // r8
  const GUID *v21; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-88h] BYREF
  __int64 v24; // [rsp+90h] [rbp-68h]
  int v25; // [rsp+98h] [rbp-60h]
  int v26; // [rsp+9Ch] [rbp-5Ch]
  char *v27; // [rsp+A0h] [rbp-58h]
  int v28; // [rsp+A8h] [rbp-50h]
  int v29; // [rsp+ACh] [rbp-4Ch]

  v12 = a2;
  v13 = (ExecutionModel::_ResourceInfo *)malloc(saturated_mul(a2, 0x18uLL));
  v16 = v13;
  if ( v13 )
    `vector constructor iterator'(v13, 24LL, a2, ExecutionModel::_ResourceInfo::_ResourceInfo);
  else
    v16 = 0LL;
  if ( v16 )
  {
    if ( a2 )
    {
      v18 = a3 + 8;
      v19 = (char *)v16 - a3;
      do
      {
        if ( TraceLoggingProviderEnabled(v15, v14, 0LL)
          && *(_DWORD *)a3 == 2
          && (unsigned int)dword_1800690A0 > 4
          && TlgKeywordOn(v15, 9uLL) )
        {
          v26 = 0;
          v29 = 0;
          v27 = (char *)this + 248;
          v24 = v18;
          v25 = 8;
          v28 = 8;
          TlgWrite(v15, &unk_18005C242, v20, v21, 4u, &pData);
        }
        v18 += 24LL;
        *(_OWORD *)&v19[a3] = *(_OWORD *)a3;
        *(_QWORD *)&v19[a3 + 16] = *(_QWORD *)(a3 + 16);
        a3 += 24LL;
        --v12;
      }
      while ( v12 );
    }
    v17 = ExecutionModel::BaseResourceSet::RecursiveVisit(this, 0, a2, (__int64)v16, a4, a5, a6, a7, a8, 0LL);
    if ( v17 >= 0 )
      v17 = 0;
    operator delete(v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v17;
}
