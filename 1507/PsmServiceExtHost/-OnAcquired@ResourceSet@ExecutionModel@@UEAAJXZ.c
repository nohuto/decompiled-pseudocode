/*
 * XREFs of ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180001B50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x1800401F0 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::OnAcquired(ExecutionModel::ResourceSet *this)
{
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // rsi
  unsigned int v4; // esi
  int v5; // r9d
  unsigned int (__fastcall *v6)(ExecutionModel::ResourceSet *__hidden); // rdi
  bool IsLegacy; // al
  LPCGUID v9; // r9
  int v10; // edx
  LPCGUID v11; // r8
  int v12; // [rsp+38h] [rbp-39h] BYREF
  BOOL v13; // [rsp+3Ch] [rbp-35h] BYREF
  ExecutionModel::ResourceSet *v14; // [rsp+40h] [rbp-31h] BYREF
  ExecutionModel::ResourceSet *v15; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  int *v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  ExecutionModel::ResourceSet **v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  BOOL *v23; // [rsp+98h] [rbp+27h]
  int v24; // [rsp+A0h] [rbp+2Fh]
  int v25; // [rsp+A4h] [rbp+33h]
  char *v26; // [rsp+A8h] [rbp+37h]
  int v27; // [rsp+B0h] [rbp+3Fh]
  int v28; // [rsp+B4h] [rbp+43h]

  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v15,
    this);
  if ( (*((_BYTE *)this + 1912) & 1) != 0 )
    __fastfail(0x8000FFFF);
  if ( *((_QWORD *)this + 226) )
  {
    if ( *((_QWORD *)this + 220) )
      __fastfail(0x8000FFFF);
    ExecutionModel::ResourceSet::CompleteAcquireAdditionalResources(this, 1);
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 32LL))(this);
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL))(this);
    goto LABEL_5;
  }
  v3 = *((_QWORD *)this + 220);
  if ( !v3
    || (v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v3 + 32LL))(
                *((_QWORD *)this + 220),
                *((_QWORD *)this + 221)),
        v4 = v12,
        v12 >= 0) )
  {
LABEL_5:
    *((_BYTE *)this + 1912) |= 1u;
    v4 = 0;
    v12 = 0;
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v2, 9uLL) )
  {
    v19 = 0;
    v22 = 0;
    v17 = &v12;
    v18 = v5;
    v20 = &v14;
    v14 = this;
    v21 = 8;
    IsLegacy = ExecutionModel::ResourceSet::IsLegacy(this);
    v25 = 0;
    v28 = 0;
    v23 = &v13;
    v26 = (char *)this + 1768;
    v13 = IsLegacy;
    v24 = (int)v9;
    v27 = v10;
    TlgWrite((TraceLoggingHProvider)IsLegacy, &unk_18005C8B4, v11, v9, 6u, &pData);
    v4 = v12;
  }
  if ( v15 )
  {
    v6 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v15 + 16LL);
    if ( v6 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v15);
    else
      v6(v15);
  }
  return v4;
}
