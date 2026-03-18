/*
 * XREFs of qsort @ 0x140172BB0
 * Callers:
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     MiRevertValidPte @ 0x140091390 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     KiIntSteerCalculateDistribution @ 0x1400EA300 (KiIntSteerCalculateDistribution.c)
 *     MiFillNoReservationCluster @ 0x14013A3CC (MiFillNoReservationCluster.c)
 *     $$115 @ 0x14017CE80 ($$115.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 *     MiSortPartitionMdls @ 0x14021E170 (MiSortPartitionMdls.c)
 *     PpmCheckComputeHeteroResponse @ 0x14023FF64 (PpmCheckComputeHeteroResponse.c)
 *     ?StDmDeviceIoListBuild@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAXPEAU_PF_QUEUE@@PEAK@Z @ 0x140253F00 (-StDmDeviceIoListBuild@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KP.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x140255608 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     SymCryptParallelHashProcess @ 0x14026C988 (SymCryptParallelHashProcess.c)
 *     PspBuildCreateProcessContext @ 0x14044EA2C (PspBuildCreateProcessContext.c)
 *     PnpAllocateResources @ 0x14045C42C (PnpAllocateResources.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     sub_14051DAF8 @ 0x14051DAF8 (sub_14051DAF8.c)
 *     PipSortDeviceObjectList @ 0x1405357C0 (PipSortDeviceObjectList.c)
 *     EtwpGetTraceGroupInfo @ 0x14054EAA8 (EtwpGetTraceGroupInfo.c)
 *     EtwpUpdateDisallowedGuids @ 0x14055146C (EtwpUpdateDisallowedGuids.c)
 *     AdtpBuildObjectTypeStrings @ 0x140585F2C (AdtpBuildObjectTypeStrings.c)
 *     MmFreeBootRegistry @ 0x140598AF8 (MmFreeBootRegistry.c)
 *     ExpParseFastCacheHelper @ 0x1405A9894 (ExpParseFastCacheHelper.c)
 *     IopRearrangeReqList @ 0x1405B8994 (IopRearrangeReqList.c)
 *     MiRemoveMdlPages @ 0x1406A28CC (MiRemoveMdlPages.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 *     sub_1406ECEC4 @ 0x1406ECEC4 (sub_1406ECEC4.c)
 *     MiInitializeNumaGraph @ 0x1407C4618 (MiInitializeNumaGraph.c)
 *     MiCreateFreePfns @ 0x1407C4F18 (MiCreateFreePfns.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 *     KiComputeNumaCosts @ 0x1407DBBB8 (KiComputeNumaCosts.c)
 *     PpmInitPolicyConfiguration @ 0x1407E18E0 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     shortsort @ 0x140172EC0 (shortsort.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  _BYTE *v6; // r12
  char *v7; // r15
  __int64 v8; // r13
  size_t v9; // rsi
  char *v10; // rsi
  size_t v11; // r8
  char *v12; // rdx
  char *v13; // r9
  char v14; // cl
  size_t v15; // r8
  char *v16; // rdx
  __int64 v17; // r9
  char v18; // cl
  size_t v19; // r8
  char *v20; // rdx
  signed __int64 v21; // r9
  char v22; // cl
  unsigned __int64 v23; // rbx
  char *v24; // rdi
  char *v25; // rdx
  unsigned __int64 v26; // r9
  char v27; // cl
  char *v28; // rdi
  _QWORD v29[124]; // [rsp+30h] [rbp-438h]

  v6 = Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v8 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (v7 - v6) / SizeOfElements + 1;
          if ( v9 <= 8 )
          {
            shortsort(v6, v7, SizeOfElements, PtFuncCompare);
            goto LABEL_10;
          }
          v10 = &v6[SizeOfElements * (v9 >> 1)];
          if ( ((int (__fastcall *)(_BYTE *, char *))PtFuncCompare)(v6, v10) > 0 )
          {
            v11 = SizeOfElements;
            v12 = v10;
            if ( v6 != v10 )
            {
              v13 = (char *)(v6 - v10);
              do
              {
                v14 = v12[(_QWORD)v13];
                v12[(_QWORD)v13] = *v12;
                *v12++ = v14;
                --v11;
              }
              while ( v11 );
            }
          }
          if ( ((int (__fastcall *)(_BYTE *, char *, size_t))PtFuncCompare)(v6, v7, v11) > 0 )
          {
            v15 = SizeOfElements;
            v16 = v7;
            if ( v6 != v7 )
            {
              v17 = v6 - v7;
              do
              {
                v18 = v16[v17];
                v16[v17] = *v16;
                *v16++ = v18;
                --v15;
              }
              while ( v15 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v10, v7, v15) > 0 )
          {
            v19 = SizeOfElements;
            v20 = v7;
            if ( v10 != v7 )
            {
              v21 = v10 - v7;
              do
              {
                v22 = v20[v21];
                v20[v21] = *v20;
                *v20++ = v22;
                --v19;
              }
              while ( v19 );
            }
          }
          v23 = (unsigned __int64)v6;
          v24 = v7;
          while ( 1 )
          {
            if ( (unsigned __int64)v10 > v23 )
            {
              while ( 1 )
              {
                v23 += SizeOfElements;
                if ( v23 >= (unsigned __int64)v10 )
                  break;
                if ( ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v23, v10, v19) > 0 )
                {
                  if ( (unsigned __int64)v10 > v23 )
                    goto LABEL_31;
                  goto LABEL_29;
                }
              }
            }
            do
LABEL_29:
              v23 += SizeOfElements;
            while ( v23 <= (unsigned __int64)v7
                 && ((int (__fastcall *)(unsigned __int64, char *, size_t))PtFuncCompare)(v23, v10, v19) <= 0 );
            do
LABEL_31:
              v24 -= SizeOfElements;
            while ( v24 > v10 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v24, v10) > 0 );
            if ( (unsigned __int64)v24 < v23 )
              break;
            v19 = SizeOfElements;
            v25 = v24;
            if ( (char *)v23 != v24 )
            {
              v26 = v23 - (_QWORD)v24;
              do
              {
                v27 = v25[v26];
                v25[v26] = *v25;
                *v25++ = v27;
                --v19;
              }
              while ( v19 );
            }
            if ( v10 == v24 )
              v10 = (char *)v23;
          }
          v28 = &v24[SizeOfElements];
          if ( v10 < v28 )
          {
            while ( 1 )
            {
              v28 -= SizeOfElements;
              if ( v28 <= v10 )
                break;
              if ( ((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v28, v10) )
              {
                if ( v10 < v28 )
                  goto LABEL_45;
                goto LABEL_43;
              }
            }
          }
          do
LABEL_43:
            v28 -= SizeOfElements;
          while ( v28 > v6 && !((unsigned int (__fastcall *)(char *, char *))PtFuncCompare)(v28, v10) );
LABEL_45:
          if ( v28 - v6 >= (__int64)&v7[-v23] )
            break;
          if ( v23 < (unsigned __int64)v7 )
          {
            v29[v8] = v23;
            v29[v8++ + 62] = v7;
          }
          if ( v6 >= v28 )
          {
LABEL_10:
            if ( --v8 < 0 )
              return;
            v6 = (_BYTE *)v29[v8];
            v7 = (char *)v29[v8 + 62];
          }
          else
          {
            v7 = v28;
          }
        }
        if ( v6 < v28 )
        {
          v29[v8] = v6;
          v29[v8++ + 62] = v28;
        }
        if ( v23 >= (unsigned __int64)v7 )
          goto LABEL_10;
        v6 = (_BYTE *)v23;
      }
    }
  }
  else
  {
    PopPoCoalescinCallback();
  }
}
