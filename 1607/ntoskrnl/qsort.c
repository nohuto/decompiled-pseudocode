/*
 * XREFs of qsort @ 0x14014E520
 * Callers:
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     KiIntSteerCalculateDistribution @ 0x1400D4C40 (KiIntSteerCalculateDistribution.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiFillNoReservationCluster @ 0x140123C70 (MiFillNoReservationCluster.c)
 *     HvlStartBootLogicalProcessors @ 0x140139CA4 (HvlStartBootLogicalProcessors.c)
 *     $$121 @ 0x14015843C ($$121.c)
 *     PpmCheckComputeHeteroResponse @ 0x14020AA78 (PpmCheckComputeHeteroResponse.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14021ECFC (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     SymCryptParallelHashProcess @ 0x140237378 (SymCryptParallelHashProcess.c)
 *     PspBuildCreateProcessContext @ 0x1404588B8 (PspBuildCreateProcessContext.c)
 *     PipSortDeviceObjectList @ 0x140486544 (PipSortDeviceObjectList.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14051CB5C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052DA3C (EtwpUpdateDisallowedGuids.c)
 *     MmFreeBootRegistry @ 0x14054E4B0 (MmFreeBootRegistry.c)
 *     IopRearrangeReqList @ 0x1405780EC (IopRearrangeReqList.c)
 *     MiRemoveMdlPages @ 0x140658ACC (MiRemoveMdlPages.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 *     EtwpGetTraceGroupInfo @ 0x1406A02C8 (EtwpGetTraceGroupInfo.c)
 *     sub_1406AF170 @ 0x1406AF170 (sub_1406AF170.c)
 *     ExpParseFastCacheHelper @ 0x1406AF734 (ExpParseFastCacheHelper.c)
 *     AdtpBuildObjectTypeStrings @ 0x1406D1C48 (AdtpBuildObjectTypeStrings.c)
 *     MiInitializeNumaGraph @ 0x14078F41C (MiInitializeNumaGraph.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 *     MiCreateFreePfns @ 0x140796948 (MiCreateFreePfns.c)
 *     MiAssignTopLevelRanges @ 0x1407AACF4 (MiAssignTopLevelRanges.c)
 *     PpmInitPolicyConfiguration @ 0x1407B6F10 (PpmInitPolicyConfiguration.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     shortsort @ 0x14014E830 (shortsort.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v7; // r12
  char *v8; // r15
  __int64 v9; // r13
  size_t v10; // rsi
  char *v11; // rsi
  size_t v12; // r8
  char *v13; // rdx
  char *v14; // r9
  char v15; // cl
  size_t v16; // r8
  char *v17; // rdx
  char *v18; // r9
  char v19; // cl
  size_t v20; // r8
  char *v21; // rdx
  signed __int64 v22; // r9
  char v23; // cl
  char *v24; // rbx
  char *v25; // rdi
  char *v26; // rdx
  __int64 v27; // r9
  char v28; // cl
  char *v29; // rdi
  _QWORD v30[124]; // [rsp+30h] [rbp-438h]

  v7 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      xHalFreeMessageTarget();
      v8 = &v7[SizeOfElements * (NumOfElements - 1)];
      v9 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - v7) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            shortsort(v7, v8, SizeOfElements, PtFuncCompare);
            goto LABEL_10;
          }
          v11 = &v7[SizeOfElements * (v10 >> 1)];
          if ( ((int (__fastcall *)(char *, char *))PtFuncCompare)(v7, v11) > 0 )
          {
            v12 = SizeOfElements;
            v13 = v11;
            if ( v7 != v11 )
            {
              v14 = (char *)(v7 - v11);
              do
              {
                v15 = v13[(_QWORD)v14];
                v13[(_QWORD)v14] = *v13;
                *v13++ = v15;
                --v12;
              }
              while ( v12 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v7, v8, v12) > 0 )
          {
            v16 = SizeOfElements;
            v17 = v8;
            if ( v7 != v8 )
            {
              v18 = (char *)(v7 - v8);
              do
              {
                v19 = v17[(_QWORD)v18];
                v17[(_QWORD)v18] = *v17;
                *v17++ = v19;
                --v16;
              }
              while ( v16 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v11, v8, v16) > 0 )
          {
            v20 = SizeOfElements;
            v21 = v8;
            if ( v11 != v8 )
            {
              v22 = v11 - v8;
              do
              {
                v23 = v21[v22];
                v21[v22] = *v21;
                *v21++ = v23;
                --v20;
              }
              while ( v20 );
            }
          }
          v24 = v7;
          v25 = v8;
          while ( 1 )
          {
            if ( v11 > v24 )
            {
              while ( 1 )
              {
                v24 += SizeOfElements;
                if ( v24 >= v11 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v24, v11, v20) > 0 )
                {
                  if ( v11 > v24 )
                    goto LABEL_31;
                  goto LABEL_29;
                }
              }
            }
            do
LABEL_29:
              v24 += SizeOfElements;
            while ( v24 <= v8 && ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v24, v11, v20) <= 0 );
            do
LABEL_31:
              v25 -= SizeOfElements;
            while ( v25 > v11 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v25, v11) > 0 );
            if ( v25 < v24 )
              break;
            v20 = SizeOfElements;
            v26 = v25;
            if ( v24 != v25 )
            {
              v27 = v24 - v25;
              do
              {
                v28 = v26[v27];
                v26[v27] = *v26;
                *v26++ = v28;
                --v20;
              }
              while ( v20 );
            }
            if ( v11 == v25 )
              v11 = v24;
          }
          v29 = &v25[SizeOfElements];
          if ( v11 < v29 )
          {
            while ( 1 )
            {
              v29 -= SizeOfElements;
              if ( v29 <= v11 )
                break;
              if ( ((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v29, v11) )
              {
                if ( v11 < v29 )
                  goto LABEL_45;
                goto LABEL_43;
              }
            }
          }
          do
LABEL_43:
            v29 -= SizeOfElements;
          while ( v29 > v7 && !((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v29, v11) );
LABEL_45:
          if ( v29 - v7 >= v8 - v24 )
            break;
          if ( v24 < v8 )
          {
            v30[v9] = v24;
            v30[v9++ + 62] = v8;
          }
          if ( v7 >= v29 )
          {
LABEL_10:
            if ( --v9 < 0 )
              return;
            v7 = (char *)v30[v9];
            v8 = (char *)v30[v9 + 62];
          }
          else
          {
            v8 = v29;
          }
        }
        if ( v7 < v29 )
        {
          v30[v9] = v7;
          v30[v9++ + 62] = v29;
        }
        if ( v24 >= v8 )
          goto LABEL_10;
        v7 = v24;
      }
    }
  }
  else
  {
    xHalFreeMessageTarget();
  }
}
