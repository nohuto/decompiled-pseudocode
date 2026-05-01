/*
 * XREFs of ?UnapplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18003E654
 * Callers:
 *     ?ForceReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x1800454E0 (-ForceReleaseResources@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     _TlgCreateWsz @ 0x180019D30 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgCreateSid @ 0x18001CD1C (_TlgCreateSid.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpActivityHostGetAppliedResourceSetCount @ 0x18001F004 (RmpActivityHostGetAppliedResourceSetCount.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::UnapplyResourceSet_Modern(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2)
{
  __int64 v3; // rdx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // r10
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // r10
  UINT32 cData; // r11d
  struct ExecutionModel::ResourceSet **v11; // rax
  __int64 v13; // rdi
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // r10
  unsigned int v17; // [rsp+30h] [rbp-79h] BYREF
  int v18; // [rsp+34h] [rbp-75h] BYREF
  int v19; // [rsp+38h] [rbp-71h] BYREF
  __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  struct ExecutionModel::ResourceSet *v21; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  unsigned int *v23; // [rsp+70h] [rbp-39h]
  __int64 v24; // [rsp+78h] [rbp-31h]
  struct ExecutionModel::ResourceSet **v25; // [rsp+80h] [rbp-29h]
  __int64 v26; // [rsp+88h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+A0h] [rbp-9h] BYREF
  int *v29; // [rsp+B0h] [rbp+7h]
  __int64 v30; // [rsp+B8h] [rbp+Fh]
  int *v31; // [rsp+C0h] [rbp+17h]
  __int64 v32; // [rsp+C8h] [rbp+1Fh]
  struct ExecutionModel::ResourceSet **v33; // [rsp+D0h] [rbp+27h]
  __int64 v34; // [rsp+D8h] [rbp+2Fh]

  if ( ExecutionModel::ResourceSet::IsLegacy(a2) )
  {
    v17 = -2147024809;
    goto LABEL_3;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 1368) + 88LL))(v3 + 1368) )
  {
    v17 = -2147220216;
    goto LABEL_3;
  }
  v13 = *((_QWORD *)a2 + 175);
  LOBYTE(v14) = RmpActivityHostGetAppliedResourceSetCount(v13);
  if ( v14 >= 2 )
  {
    v15 = (*(__int64 (__fastcall **)(struct ExecutionModel::ResourceSet *, __int64))(*(_QWORD *)a2 + 32LL))(a2, 1LL);
    if ( v15 >= 0 )
      v15 = 0;
    v17 = v15;
  }
  else
  {
    v17 = -2147220221;
  }
  if ( !v13 )
  {
LABEL_3:
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v4, 9uLL) )
    {
      v24 = v5;
      v23 = &v17;
      v21 = a2;
      v25 = &v21;
      v26 = 8LL;
      TlgCreateWsz(&pDesc, 0LL);
      TlgCreateSid(&v28, (const SID *)((char *)RmSvcGlobals + 1952));
      v20 = -1LL;
      v29 = &v18;
      v18 = 0;
      v31 = &v19;
      v11 = (struct ExecutionModel::ResourceSet **)&v20;
      v19 = 0;
LABEL_6:
      v34 = 8LL;
      v33 = v11;
      v32 = v9;
      v30 = v9;
      TlgWrite(v6, &unk_1800622C5, v7, v8, cData, &pData);
      return v17;
    }
    return v17;
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v4, 9uLL) )
  {
    v24 = v16;
    v23 = &v17;
    v20 = (__int64)a2;
    v25 = (struct ExecutionModel::ResourceSet **)&v20;
    v26 = 8LL;
    TlgCreateWsz(&pDesc, (LPCWSTR)(v13 + 48));
    TlgCreateSid(&v28, (const SID *)(v13 + 512));
    v6 = (const struct _TlgProvider_t *)*(unsigned int *)(v13 + 580);
    v29 = &v19;
    v18 = *(_DWORD *)(v13 + 584);
    v31 = &v18;
    v21 = *(struct ExecutionModel::ResourceSet **)(v13 + 24);
    v11 = &v21;
    v19 = (int)v6;
    goto LABEL_6;
  }
  return v17;
}
