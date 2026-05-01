/*
 * XREFs of ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180003F40
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 * Callees:
 *     ?OnAcquired@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z @ 0x180003CA0 (-OnAcquired@ResourceSetImpl@ExecutionModel@@UEAAJPEAX@Z.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180045324 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::OnAcquired(ExecutionModel::ResourceSet *this)
{
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(struct IUnknown *, __int64); // rsi
  int v5; // eax
  unsigned int v6; // edi
  int v7; // r9d
  bool IsLegacy; // al
  LPCGUID v9; // r9
  int v10; // edx
  LPCGUID v11; // r8
  unsigned int (__fastcall *v12)(ExecutionModel::ResourceSet *__hidden); // rsi
  int v14; // [rsp+30h] [rbp-49h] BYREF
  BOOL v15; // [rsp+34h] [rbp-45h] BYREF
  ExecutionModel::ResourceSet *v16; // [rsp+38h] [rbp-41h] BYREF
  ExecutionModel::ResourceSet *v17; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  ExecutionModel::ResourceSet **v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]
  BOOL *v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]
  char *v28; // [rsp+A0h] [rbp+27h]
  int v29; // [rsp+A8h] [rbp+2Fh]
  int v30; // [rsp+ACh] [rbp+33h]

  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v17,
    this);
  if ( (*((_BYTE *)this + 1920) & 1) != 0 )
    __fastfail(0x8000FFFF);
  if ( *((_QWORD *)this + 227) )
  {
    if ( *((_QWORD *)this + 221) )
      __fastfail(0x8000FFFF);
    ExecutionModel::ResourceSet::CompleteAcquireAdditionalResources(this, 3u);
    goto LABEL_7;
  }
  v3 = *((_QWORD *)this + 221);
  if ( !v3
    || ((v4 = *(__int64 (__fastcall **)(struct IUnknown *, __int64))(*(_QWORD *)v3 + 32LL),
         v4 != ExecutionModel::ResourceSetImpl::OnAcquired)
      ? (v5 = v4(*((struct IUnknown **)this + 221), *((_QWORD *)this + 222)))
      : (v5 = ExecutionModel::ResourceSetImpl::OnAcquired(*((struct IUnknown **)this + 221), *((_QWORD *)this + 222))),
        v14 = v5,
        v6 = v5,
        v5 >= 0) )
  {
LABEL_7:
    *((_BYTE *)this + 1920) |= 1u;
    v6 = 0;
    v14 = 0;
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v2, 9uLL) )
  {
    v21 = 0;
    v24 = 0;
    v19 = &v14;
    v20 = v7;
    v22 = &v16;
    v16 = this;
    v23 = v7 + 4;
    IsLegacy = ExecutionModel::ResourceSet::IsLegacy(this);
    v27 = 0;
    v30 = 0;
    v25 = &v15;
    v28 = (char *)this + 1776;
    v15 = IsLegacy;
    v26 = (int)v9;
    v29 = v10;
    TlgWrite((TraceLoggingHProvider)IsLegacy, &unk_1800645F3, v11, v9, 6u, &pData);
    v6 = v14;
  }
  if ( v17 )
  {
    v12 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v17 + 16LL);
    if ( v12 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v17);
    else
      v12(v17);
  }
  return v6;
}
