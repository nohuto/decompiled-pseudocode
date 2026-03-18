/*
 * XREFs of qsort @ 0x14014DF60
 * Callers:
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     KiIntSteerCalculateDistribution @ 0x1400D6DA0 (KiIntSteerCalculateDistribution.c)
 *     MiInsertTbFlushEntry @ 0x1400E0240 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiFillNoReservationCluster @ 0x140123700 (MiFillNoReservationCluster.c)
 *     HvlStartBootLogicalProcessors @ 0x140139734 (HvlStartBootLogicalProcessors.c)
 *     $$121 @ 0x140157ECC ($$121.c)
 *     PpmCheckComputeHeteroResponse @ 0x14020AC4C (PpmCheckComputeHeteroResponse.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14021EED0 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     SymCryptParallelHashProcess @ 0x14023754C (SymCryptParallelHashProcess.c)
 *     PspBuildCreateProcessContext @ 0x1404599E8 (PspBuildCreateProcessContext.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1404A475C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     PipSortDeviceObjectList @ 0x1404C4B6C (PipSortDeviceObjectList.c)
 *     PnpAllocateResources @ 0x1404C82A4 (PnpAllocateResources.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052D4FC (EtwpUpdateDisallowedGuids.c)
 *     MmFreeBootRegistry @ 0x14054E110 (MmFreeBootRegistry.c)
 *     IopRearrangeReqList @ 0x140577BAC (IopRearrangeReqList.c)
 *     MiRemoveMdlPages @ 0x1406589E8 (MiRemoveMdlPages.c)
 *     MiProcessCrcList @ 0x140663DC8 (MiProcessCrcList.c)
 *     EtwpGetTraceGroupInfo @ 0x1406A0190 (EtwpGetTraceGroupInfo.c)
 *     sub_1406AF038 @ 0x1406AF038 (sub_1406AF038.c)
 *     ExpParseFastCacheHelper @ 0x1406AF5FC (ExpParseFastCacheHelper.c)
 *     AdtpBuildObjectTypeStrings @ 0x1406D1B10 (AdtpBuildObjectTypeStrings.c)
 *     MiInitializeNumaGraph @ 0x14078F41C (MiInitializeNumaGraph.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 *     MiCreateFreePfns @ 0x140796948 (MiCreateFreePfns.c)
 *     MiAssignTopLevelRanges @ 0x1407AACF4 (MiAssignTopLevelRanges.c)
 *     PpmInitPolicyConfiguration @ 0x1407B6F10 (PpmInitPolicyConfiguration.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     shortsort @ 0x14014E270 (shortsort.c)
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
