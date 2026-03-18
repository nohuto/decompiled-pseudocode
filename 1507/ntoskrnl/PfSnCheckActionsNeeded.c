/*
 * XREFs of PfSnCheckActionsNeeded @ 0x1404FDC54
 * Callers:
 *     PfSnBeginScenario @ 0x1404FD948 (PfSnBeginScenario.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140013C30 (MmQueryMemoryListInformation.c)
 *     MmGetMinWsPagePriority @ 0x140043E34 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x140043E3C (MmGetDefaultPagePriority.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PfpGetPageListCount @ 0x14042E01C (PfpGetPageListCount.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1404FDF8C (PfSnPrefetchCacheEntryGet.c)
 */

__int64 __fastcall PfSnCheckActionsNeeded(__int64 a1, __int64 a2, __int64 a3, int *a4, int *a5)
{
  unsigned int v5; // ebx
  int v6; // edi
  unsigned int DefaultPagePriority; // eax
  unsigned int v8; // edx
  unsigned __int8 *v9; // r9
  int v10; // r10d
  unsigned int v11; // r14d
  unsigned __int8 *v12; // r8
  __int64 v13; // rbp
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned int v18; // r8d
  unsigned __int64 v19; // r12
  unsigned int v20; // r8d
  __int64 PageListCount; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v23; // r14
  _DWORD *v24; // rax
  _DWORD *v25; // rcx
  unsigned int v26; // edx
  int v27; // esi
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  int v31; // eax
  int v32; // [rsp+20h] [rbp-128h] BYREF
  __int64 v33; // [rsp+28h] [rbp-120h]
  int *v34; // [rsp+30h] [rbp-118h]
  int *v35; // [rsp+38h] [rbp-110h]
  int v36[4]; // [rsp+40h] [rbp-108h] BYREF
  __int128 v37[6]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v38[72]; // [rsp+B8h] [rbp-90h] BYREF

  v5 = 3;
  v35 = a5;
  v34 = a4;
  v33 = a1;
  v6 = 23;
  if ( (dword_1403534A0 & 8) != 0 )
  {
    v27 = 22;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 772LL) & 0x100000) != 0 )
    MmGetMinWsPagePriority();
  DefaultPagePriority = MmGetDefaultPagePriority();
  v11 = DefaultPagePriority;
  if ( v8 > DefaultPagePriority - 1 )
    v8 = DefaultPagePriority;
  if ( v8 <= DefaultPagePriority - 1 )
  {
    v27 = 2;
LABEL_30:
    v6 = v27;
    goto LABEL_20;
  }
  if ( (dword_140353740 & 0x10) != 0 && !v10 )
  {
    v5 = 1;
    v6 = 14;
  }
  v12 = v9;
  v13 = 314159LL;
  v14 = 8LL;
  do
  {
    v15 = *v12;
    v12 += 8;
    v13 = *(v12 - 1)
        + 37
        * (*(v12 - 2)
         + 37
         * (*(v12 - 3)
          + 37 * (*(v12 - 4) + 37 * (*(v12 - 5) + 37 * (*(v12 - 6) + 37 * (*(v12 - 7) + 37 * (v15 + 37 * v13)))))));
    --v14;
  }
  while ( v14 );
  v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  MmQueryMemoryListInformation(v37, 0xB0u, (__int64)v12, v36);
  v17 = (unsigned __int64)(PfpGetPageListCount((__int64)v38, 0, 7u) << 12) >> 18;
  v19 = (unsigned __int64)(PfpGetPageListCount((__int64)v38, v11, v18) << 12) >> 18;
  PageListCount = PfpGetPageListCount((__int64)v38, v11 - 1, v20);
  CurrentThread = KeGetCurrentThread();
  v23 = (unsigned __int64)(PageListCount << 12) >> 18;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_1403536D0, 1u);
  v24 = (_DWORD *)PfSnPrefetchCacheEntryGet(&unk_1403536A8, v33, v13, &v32);
  v25 = v24;
  if ( v24 )
  {
    if ( v32 )
    {
      v27 = 13;
      if ( (v5 & 2) != 0 )
        v6 = 13;
    }
    else
    {
      v26 = v16 - v24[27];
      v27 = 4;
      if ( v26 < v24[28] )
      {
        v5 &= ~1u;
        v27 = 5;
      }
      if ( (v5 & 2) != 0 )
      {
        v6 = 4;
        if ( v26 >= v24[29] )
        {
          if ( (dword_1403534A0 & 2) == 0 )
          {
            if ( v26 >= 0x1B7740 )
              v31 = v26 >= 0x36EE80 ? v17 - v24[26] : (int)v23 - v24[25];
            else
              v31 = v19 - v24[24];
            if ( !v31 )
            {
              v5 &= ~2u;
              v6 = 7;
            }
          }
        }
        else
        {
          v5 &= ~2u;
          v6 = 6;
        }
      }
    }
    v25[27] = v16;
    v25[24] = v19;
    v25[25] = v23;
    v25[26] = v17;
  }
  else
  {
    v6 = 3;
    v27 = 3;
  }
  ExReleaseResourceLite(&stru_1403536D0);
  v28 = KeGetCurrentThread();
  v29 = v28->KernelApcDisable + 1;
  v28->KernelApcDisable = v29;
  if ( !v29
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
    && !v28->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
LABEL_20:
  *v34 = v27;
  *v35 = v6;
  return v5;
}
