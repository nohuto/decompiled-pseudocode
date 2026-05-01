/*
 * XREFs of ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x180038EE0
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x180037430 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18002E9F0 (-SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     ?RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180037C2C (-RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@ExecutionModel@@.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x18003BD54 (RmpActivityHostOnAppliedResourceSetChange.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UnapplyResourceSet_Legacy(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet **a2,
        char a3)
{
  __int64 v5; // rdx
  __int64 v7; // r14
  int v8; // r15d
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  struct ExecutionModel::ResourceSet *v13; // rcx
  int v14; // eax
  int v15; // eax
  ExecutionModel::ResourceSet *v16; // rbx
  unsigned int v17; // esi
  __int64 (__fastcall *v18)(ExecutionModel::ResourceSet *); // rdi
  int v20; // [rsp+30h] [rbp-69h] BYREF
  int v21; // [rsp+34h] [rbp-65h] BYREF
  ExecutionModel::ResourceSet *v22; // [rsp+38h] [rbp-61h] BYREF
  int v23; // [rsp+40h] [rbp-59h] BYREF
  struct ExecutionModel::ResourceSet *v24; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v26; // [rsp+70h] [rbp-29h]
  int v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+7Ch] [rbp-1Dh]
  struct ExecutionModel::ResourceSet **v29; // [rsp+80h] [rbp-19h]
  int v30; // [rsp+88h] [rbp-11h]
  int v31; // [rsp+8Ch] [rbp-Dh]
  int *v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+98h] [rbp-1h]
  int v34; // [rsp+9Ch] [rbp+3h]
  int *v35; // [rsp+A0h] [rbp+7h]
  int v36; // [rsp+A8h] [rbp+Fh]
  int v37; // [rsp+ACh] [rbp+13h]
  ExecutionModel::ResourceSet **v38; // [rsp+B0h] [rbp+17h]
  int v39; // [rsp+B8h] [rbp+1Fh]
  int v40; // [rsp+BCh] [rbp+23h]

  v5 = (__int64)*a2;
  v7 = *(_QWORD *)(v5 + 1400);
  v8 = *(_DWORD *)(v5 + 8);
  ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
    &v22,
    v5);
  ExecutionModel::ResourceManager::RemoveResourceSet(v9, &v22);
  *((_DWORD *)*a2 + 458) = v8;
  *((_DWORD *)*a2 + 2) = 0;
  *((_BYTE *)*a2 + 12) = 0;
  if ( v7 )
    RmpActivityHostOnAppliedResourceSetChange(v10, v7, *a2, 1LL);
  if ( a3
    && (*((_BYTE *)*a2 + 1912) & 4) != 0
    && (v20 = (*(__int64 (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)*a2 + 32LL))(*a2), v20 < 0) )
  {
    *((_DWORD *)*a2 + 2) = v8;
    *((_DWORD *)*a2 + 458) = 0;
    *((_BYTE *)*a2 + 12) = 1;
    ExecutionModel::ResourceManager::SetResourceSetAsApplied(this, *a2);
    if ( v7 )
      RmpActivityHostOnAppliedResourceSetChange(v10, *((_QWORD *)*a2 + 175), *a2, 0LL);
  }
  else
  {
    v20 = 0;
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v10, 9uLL) )
  {
    v13 = *a2;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v26 = &v20;
    v29 = &v24;
    v32 = &v23;
    v27 = (int)v12;
    v24 = v13;
    v30 = 8;
    v23 = v8;
    v33 = (int)v12;
    v14 = *((_DWORD *)v13 + 352);
    v37 = 0;
    v21 = v14;
    v35 = &v21;
    v36 = (int)v12;
    v15 = (*((unsigned __int8 *)v13 + 1912) >> 1) & 1;
    v39 = (int)v12;
    v40 = 0;
    LODWORD(v22) = v15;
    v38 = &v22;
    TlgWrite(v13, &unk_18005A53E, v11, v12, 7u, &pData);
  }
  v16 = *a2;
  v17 = v20;
  if ( *a2 )
  {
    v18 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v16 + 16LL);
    if ( v18 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v16);
    else
      v18(v16);
  }
  return v17;
}
