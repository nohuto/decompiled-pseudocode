/*
 * XREFs of ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x18003E488
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x18003D6D0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x180041048 (RmpActivityHostOnAppliedResourceSetChange.c)
 *     RmpActivityHostSetProcessResourceSet @ 0x18004136C (RmpActivityHostSetProcessResourceSet.c)
 */

char __fastcall ExecutionModel::ResourceManager::UnapplyResourceSet_Legacy(
        const struct _TlgProvider_t *a1,
        ExecutionModel::ResourceSet **a2,
        char a3)
{
  __int64 v5; // rbx
  int v6; // r14d
  ExecutionModel::ResourceSet *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  ExecutionModel::ResourceSet *v10; // rcx
  int v11; // eax
  int v12; // eax
  ExecutionModel::ResourceSet *v13; // rbx
  __int64 (__fastcall *v14)(ExecutionModel::ResourceSet *); // rdi
  int v16; // [rsp+30h] [rbp-49h] BYREF
  int v17; // [rsp+34h] [rbp-45h] BYREF
  int v18; // [rsp+38h] [rbp-41h] BYREF
  ExecutionModel::ResourceSet *v19; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  ExecutionModel::ResourceSet **v21; // [rsp+70h] [rbp-9h]
  int v22; // [rsp+78h] [rbp-1h]
  int v23; // [rsp+7Ch] [rbp+3h]
  int *v24; // [rsp+80h] [rbp+7h]
  int v25; // [rsp+88h] [rbp+Fh]
  int v26; // [rsp+8Ch] [rbp+13h]
  int *v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]
  int *v30; // [rsp+A0h] [rbp+27h]
  int v31; // [rsp+A8h] [rbp+2Fh]
  int v32; // [rsp+ACh] [rbp+33h]

  v5 = *((_QWORD *)*a2 + 175);
  v6 = *((_DWORD *)*a2 + 2);
  if ( v5 )
  {
    QueryUnbiasedInterruptTime((PULONGLONG)(v5 + 928));
    RmpActivityHostSetProcessResourceSet(v5, 0LL);
    RmpObjectRelease((volatile signed __int32 *)v5);
    *((_QWORD *)*a2 + 175) = 0LL;
  }
  *((_DWORD *)*a2 + 460) = v6;
  *((_DWORD *)*a2 + 2) = 0;
  v7 = *a2;
  *((_BYTE *)*a2 + 12) = 0;
  if ( v5 )
    LOBYTE(v7) = RmpActivityHostOnAppliedResourceSetChange(a1, v5, *a2, 1LL);
  if ( a3 && (*((_BYTE *)*a2 + 1920) & 4) != 0 )
    LOBYTE(v7) = (*(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, __int64))(*(_QWORD *)*a2 + 32LL))(*a2, 1LL);
  if ( (unsigned int)dword_180071060 > 4 )
  {
    LOBYTE(v7) = TlgKeywordOn(a1, 9uLL);
    if ( (_BYTE)v7 )
    {
      v10 = *a2;
      v23 = 0;
      v26 = 0;
      v21 = &v19;
      v24 = &v17;
      v19 = v10;
      v22 = 8;
      v17 = v6;
      v25 = 4;
      v11 = *((_DWORD *)v10 + 352);
      v29 = 0;
      v18 = v11;
      v27 = &v18;
      v28 = 4;
      v12 = (*((unsigned __int8 *)v10 + 1920) >> 1) & 1;
      v31 = 4;
      v32 = 0;
      v16 = v12;
      v30 = &v16;
      LOBYTE(v7) = TlgWrite(v10, &unk_180062100, v8, v9, 6u, &pData);
    }
  }
  v13 = *a2;
  if ( *a2 )
  {
    v14 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v13 + 16LL);
    if ( v14 == ExecutionModel::ResourceSet::Release )
      LOBYTE(v7) = ExecutionModel::ResourceSet::Release(v13);
    else
      LOBYTE(v7) = v14(v13);
  }
  return (char)v7;
}
