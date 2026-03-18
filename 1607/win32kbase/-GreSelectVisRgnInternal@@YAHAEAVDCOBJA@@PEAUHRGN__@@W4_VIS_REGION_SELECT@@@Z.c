/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x1C00382B0 (GreSelectVisRgnShared.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C002AF70 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?_IsEntryInUse@GdiHandleEntryTable@@AEAA_NI@Z @ 0x1C002B1B0 (-_IsEntryInUse@GdiHandleEntryTable@@AEAA_NI@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C002B250 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002BAFC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C002D3A0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C002E1E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0031720 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0036900 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0036A00 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB930 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(struct DC **a1, HRGN a2, int a3)
{
  __int64 result; // rax
  GdiHandleManager *v7; // rsi
  struct _ERESOURCE *v8; // rbx
  struct DC *v9; // rax
  _QWORD *DeferredContext; // rdi
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // edx
  signed int v15; // ecx
  __int64 v16; // r10
  unsigned int v17; // ecx
  __int64 v18; // rdi
  unsigned int v19; // eax
  struct DC *EntryObject; // rax
  __int64 v21; // r8
  unsigned int *v22; // r13
  _QWORD *v23; // rdi
  __int64 v24; // r12
  unsigned int v25; // eax
  __int64 v26; // r11
  unsigned int v27; // r9d
  unsigned int v28; // edx
  signed int v29; // ecx
  GdiHandleEntryTable *v30; // r11
  unsigned int v31; // r9d
  __int64 v32; // r10
  _QWORD *v33; // r11
  int v34; // r15d
  int v35; // r15d
  struct DC *v36; // rdi
  struct _ENTRY *EntryFromObject; // rax
  struct REGION *v38; // rcx
  __int64 v39; // rcx
  GdiHandleEntryDirectory *v40; // [rsp+38h] [rbp-59h] BYREF
  struct DC *v41; // [rsp+40h] [rbp-51h] BYREF
  GdiHandleManager *v42; // [rsp+48h] [rbp-49h] BYREF
  struct GdiHandleEntryTable *v43; // [rsp+50h] [rbp-41h] BYREF
  GdiHandleManager *v44; // [rsp+58h] [rbp-39h] BYREF
  int v45; // [rsp+60h] [rbp-31h]
  _BYTE v46[8]; // [rsp+68h] [rbp-29h] BYREF
  struct REGION *v47; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v48[40]; // [rsp+78h] [rbp-19h] BYREF
  int v49; // [rsp+A0h] [rbp+Fh]
  struct _RECTL v50; // [rsp+A8h] [rbp+17h] BYREF
  unsigned int v51; // [rsp+F8h] [rbp+67h]
  unsigned int v52; // [rsp+110h] [rbp+7Fh] BYREF

  result = 0LL;
  v7 = 0LL;
  if ( !*a1 )
    return result;
  v8 = ghsemVisRgnPublish;
  if ( ghsemVisRgnPublish )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  v9 = *a1;
  v41 = v9;
  v51 = 1;
  *((_DWORD *)v9 + 9) |= 0x10u;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v11 = (unsigned __int16)*(_DWORD *)v9 | (*(_DWORD *)v9 >> 8) & 0xFF0000;
  v42 = (GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext;
  v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, v11);
  v13 = DeferredContext[2];
  v40 = (GdiHandleEntryDirectory *)v13;
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v14 + ((*(unsigned __int16 *)(v13 + 2) - 1) << 16) )
    goto LABEL_15;
  if ( v12 < v14 )
  {
    v15 = 0;
    goto LABEL_8;
  }
  v15 = ((v12 - v14) >> 16) + 1;
  if ( (v12 - v14) >> 16 == -2 )
  {
LABEL_15:
    v18 = 0LL;
    goto LABEL_16;
  }
LABEL_8:
  v16 = *(_QWORD *)(v13 + 8LL * v15 + 8);
  if ( v15 )
    v17 = v12 - ((v15 - 1) << 16) - v14;
  else
    v17 = v12;
  v18 = 0LL;
  if ( v17 < *(_DWORD *)(v16 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v17 >> 8))
                 + 16LL * (unsigned __int8)v17
                 + 8) )
  {
    v18 = *(_QWORD *)v16 + 24LL * v17;
  }
LABEL_16:
  v43 = 0LL;
  v52 = 0;
  v19 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v42, v12);
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v40, v19, &v43, &v52) )
    EntryObject = GdiHandleEntryTable::GetEntryObject(v43, v52);
  else
    EntryObject = 0LL;
  LODWORD(v40) = 1;
  if ( EntryObject != v41 )
    v18 = 0LL;
  *(_BYTE *)(v18 + 15) |= 4u;
  if ( a2 )
  {
    PsGetCurrentProcessId();
    LOBYTE(v21) = 4;
    HmgSetOwner(a2, 0LL, v21);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v47, a2, 0, 0);
    v22 = (unsigned int *)v47;
    if ( !v47 )
    {
      v7 = prgnDefault;
      goto LABEL_57;
    }
    v23 = WPP_MAIN_CB.Dpc.DeferredContext;
    v41 = *a1;
    v24 = *(_QWORD *)v41;
    v25 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
            (unsigned __int16)*(_QWORD *)v41 | ((unsigned int)*(_QWORD *)v41 >> 8) & 0xFF0000);
    v26 = v23[2];
    v27 = v25;
    v28 = *(_DWORD *)(v26 + 2056);
    if ( v25 >= v28 + ((*(unsigned __int16 *)(v26 + 2) - 1) << 16) )
      goto LABEL_35;
    if ( v25 >= v28 )
    {
      v29 = ((v25 - v28) >> 16) + 1;
      if ( (v25 - v28) >> 16 == -2 )
        goto LABEL_35;
    }
    else
    {
      v29 = 0;
    }
    v30 = *(GdiHandleEntryTable **)(v26 + 8LL * v29 + 8);
    if ( v29 )
      v27 = v25 - ((v29 - 1) << 16) - v28;
    if ( GdiHandleEntryTable::_IsEntryInUse(v30, v27) )
      v32 = *v33 + 24LL * v31;
    if ( v32
      && *(_BYTE *)(v32 + 14) == 1
      && *(_WORD *)(v32 + 12) == WORD1(v24)
      && (*(_DWORD *)(v32 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
LABEL_38:
      v34 = a3 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          if ( v35 == 2 )
          {
            AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v41, *a1);
            v7 = (GdiHandleManager *)*((_QWORD *)*a1 + 192);
            if ( !v7 )
              v7 = prgnDefault;
            if ( v7 == prgnDefault )
            {
              v51 = 0;
            }
            else
            {
              v42 = v7;
              RGNOBJAPI::bSwap((RGNOBJAPI *)&v47, (struct RGNOBJ *)&v42);
              v7 = v42;
              LODWORD(v40) = 0;
            }
            AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v41);
            if ( !(_DWORD)v40 )
              goto LABEL_61;
          }
        }
        else
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44, v22[20]);
          v7 = v44;
          if ( v44 )
            RGNOBJ::vCopy((RGNOBJ *)&v44, (struct RGNOBJ *)&v47);
          else
            v7 = prgnDefault;
          if ( v45 == 1 )
            RGNOBJ::vDeleteRGNOBJ((__int16 **)&v44);
        }
      }
      else
      {
        v7 = (GdiHandleManager *)v22;
        if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)&v47) )
        {
          v51 = 0;
LABEL_62:
          if ( !v49 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v47);
          if ( v47 )
            _InterlockedDecrement((volatile signed __int32 *)v47 + 3);
          UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v48);
          goto LABEL_68;
        }
        v47 = 0LL;
      }
LABEL_57:
      v36 = *a1;
      *((_DWORD *)v36 + 9) |= 0x10u;
      EntryFromObject = GdiHandleManager::GetEntryFromObject(
                          (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                          v36);
      *((_BYTE *)EntryFromObject + 15) |= 4u;
      AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v40, v36);
      v38 = (struct REGION *)*((_QWORD *)v36 + 192);
      if ( v38 && v38 != prgnDefault )
        FreeObject(v38, 4LL);
      *((_QWORD *)v36 + 192) = prgnDefault;
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v40);
LABEL_61:
      AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v46, *a1);
      *((_QWORD *)*a1 + 192) = v7;
      *((_DWORD *)v7 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v46);
      goto LABEL_62;
    }
LABEL_35:
    if ( !GrepValidateVisRgn(v41, (struct REGION *)v22, (struct ERECTL *)&v50) )
      RGNOBJ::vSet((RGNOBJ *)&v47, &v50);
    v22 = (unsigned int *)v47;
    goto LABEL_38;
  }
  DC::vReleaseVis(*a1);
  DC::bSetDefaultRegion(*a1);
LABEL_68:
  if ( v8 )
  {
    if ( gbLockEtw )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz((unsigned int)Microsoft_Windows_Win32kEnableBits, &LockRelease);
    }
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion(v39);
  }
  return v51;
}
