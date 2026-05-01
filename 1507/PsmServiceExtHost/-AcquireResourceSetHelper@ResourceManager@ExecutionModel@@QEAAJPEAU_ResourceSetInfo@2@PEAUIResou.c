/*
 * XREFs of ?AcquireResourceSetHelper@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180013970
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180002010 (-AcquireResourceSetFromSponsorProcess@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@2@PEAPEAU52@@Z @ 0x180013C90 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSet.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEBU_GUID@@PEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180034310 (-AcquireResourceSet@ResourceManager@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@PEA_ea_180034310.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18000ADDC (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     _TlgCreateSid @ 0x18002F820 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x18002F848 (_TlgCreateWsz.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSetHelper(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        union _RM_SID *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  struct ExecutionModel::IResourceSet **v13; // r15
  wchar_t *v15; // r10
  union _RM_SID *v17; // rdx
  bool *v18; // r12
  struct ExecutionModel::IResourceSet *v19; // r14
  bool v20; // cc
  unsigned int v21; // eax
  _DWORD *v22; // rcx
  unsigned int v23; // ebx
  unsigned int v24; // edx
  __int64 v25; // r8
  char *v26; // r14
  const SID *v27; // r11
  unsigned __int8 v28; // r10
  TraceLoggingHProvider v29; // rcx
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  int v33; // [rsp+70h] [rbp-90h] BYREF
  LPCWSTR pwsz; // [rsp+78h] [rbp-88h] BYREF
  union _RM_SID *v35; // [rsp+80h] [rbp-80h] BYREF
  struct ExecutionModel::IResourceSetCallback *v36; // [rsp+88h] [rbp-78h] BYREF
  void *v37; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  char *v40; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+110h] [rbp+10h] BYREF
  unsigned int *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  struct ExecutionModel::IResourceSetCallback **v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  void **v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  union _RM_SID **v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  char **v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  LPCWSTR *p_pwsz; // [rsp+180h] [rbp+80h]
  __int64 v62; // [rsp+188h] [rbp+88h]

  v13 = a13;
  v15 = a5;
  v17 = a6;
  v18 = a11;
  v19 = a12;
  *a13 = 0LL;
  v20 = *(_DWORD *)a2 <= 0x38u;
  v37 = a4;
  v36 = a3;
  pwsz = a5;
  v35 = a6;
  *((_DWORD *)a2 + 2) = 1;
  v39 = -1LL;
  if ( v20 )
  {
    v33 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, struct ExecutionModel::_ResourceSetInfo *, LPCWSTR, _QWORD, unsigned __int64 *))(*(_QWORD *)this + 360LL))(
            this,
            a2,
            pwsz,
            a8,
            &v39);
    if ( v33 >= 0 && v39 && v39 <= *((_QWORD *)a2 + 6) )
      ExecutionModel::_ResourceSetInfo::SetAmount((__int64)a2, 1, v39);
    v15 = (wchar_t *)pwsz;
    a3 = v36;
    a4 = v37;
    v17 = v35;
  }
  v21 = 0;
  v22 = (_DWORD *)((char *)a2 + 64);
  while ( 1 )
  {
    v23 = a10;
    if ( *v22 != v21 )
      break;
    ++v21;
    v22 += 6;
    if ( v21 >= 3 )
    {
      v24 = ExecutionModel::ResourceManager::AcquireResourceSetHelperPhase2(
              this,
              a2,
              a3,
              a4,
              v15,
              v17,
              a7,
              a8,
              a9,
              a10,
              v18,
              v19,
              v13);
      v33 = v24;
      goto LABEL_12;
    }
  }
  v24 = -2147024809;
  v33 = -2147024809;
LABEL_12:
  v25 = (__int64)*v13 - 1368;
  if ( !*v13 )
    v25 = 0LL;
  if ( v19 )
    v26 = (char *)v19 - 1368;
  else
    v26 = 0LL;
  if ( (unsigned int)dword_1800690A0 > 4 && (qword_1800690B0 & 9) != 0 && (qword_1800690B8 & 9) == qword_1800690B8 )
  {
    v43 = &v33;
    v44 = 4LL;
    v45 = &v41;
    v41 = v25;
    v46 = 8LL;
    TlgCreateWsz(&pDesc, pwsz);
    TlgCreateSid(&v48, v27);
    v38 = a7;
    v49 = &v38;
    LODWORD(v36) = a8;
    v51 = &v36;
    v53 = &a9;
    v55 = &v37;
    LODWORD(v35) = *(_DWORD *)a2;
    v57 = &v35;
    v59 = &v40;
    LODWORD(pwsz) = v28;
    p_pwsz = &pwsz;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 8LL;
    LODWORD(v37) = v23;
    v56 = 4LL;
    v58 = 4LL;
    v40 = v26;
    v60 = 8LL;
    v62 = 4LL;
    TlgWrite(v29, &unk_18005A6EF, v30, v31, 0xDu, &pData);
    return (unsigned int)v33;
  }
  return v24;
}
