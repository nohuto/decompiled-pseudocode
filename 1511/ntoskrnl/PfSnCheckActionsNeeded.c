/*
 * XREFs of PfSnCheckActionsNeeded @ 0x1404D78A0
 * Callers:
 *     PfSnBeginScenario @ 0x1404D6D78 (PfSnBeginScenario.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x14007A034 (MmGetDefaultPagePriority.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MmQueryMemoryListInformation @ 0x1400FCAC0 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1404D7B88 (PfSnPrefetchCacheEntryGet.c)
 *     PfpGetPageListCount @ 0x1404D99F8 (PfpGetPageListCount.c)
 */

__int64 __fastcall PfSnCheckActionsNeeded(__int64 a1, __int64 a2, __int64 a3, int *a4, int *a5)
{
  unsigned int v5; // ebx
  int v6; // edi
  unsigned int v7; // edx
  int v8; // r8d
  unsigned __int8 *v9; // r9
  unsigned int DefaultPagePriority; // r14d
  unsigned __int8 *v11; // r8
  __int64 v12; // rbp
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  __int64 v17; // r8
  unsigned __int64 v18; // r12
  __int64 v19; // r8
  __int64 PageListCount; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v22; // r14
  _DWORD *v23; // rax
  _DWORD *v24; // rcx
  unsigned int v25; // edx
  int v26; // esi
  int v28; // eax
  int v29; // [rsp+20h] [rbp-128h] BYREF
  __int64 v30; // [rsp+28h] [rbp-120h]
  int *v31; // [rsp+30h] [rbp-118h]
  int *v32; // [rsp+38h] [rbp-110h]
  int v33[4]; // [rsp+40h] [rbp-108h] BYREF
  __int128 v34[6]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v35[72]; // [rsp+B8h] [rbp-90h] BYREF

  v5 = 3;
  v32 = a5;
  v31 = a4;
  v30 = a1;
  v6 = 23;
  if ( (dword_140305730 & 8) != 0 )
  {
    v26 = 22;
    goto LABEL_27;
  }
  PsGetPagePriorityThread(a3);
  DefaultPagePriority = MmGetDefaultPagePriority();
  if ( v7 > DefaultPagePriority - 1 )
    v7 = DefaultPagePriority;
  if ( v7 <= DefaultPagePriority - 1 )
  {
    v26 = 2;
LABEL_27:
    v6 = v26;
    goto LABEL_17;
  }
  if ( (dword_1403059D0 & 0x10) != 0 && !v8 )
  {
    v5 = 1;
    v6 = 14;
  }
  v11 = v9;
  v12 = 314159LL;
  v13 = 8LL;
  do
  {
    v14 = *v11;
    v11 += 8;
    v12 = *(v11 - 1)
        + 37
        * (*(v11 - 2)
         + 37
         * (*(v11 - 3)
          + 37 * (*(v11 - 4) + 37 * (*(v11 - 5) + 37 * (*(v11 - 6) + 37 * (*(v11 - 7) + 37 * (v14 + 37 * v12)))))));
    --v13;
  }
  while ( v13 );
  v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  MmQueryMemoryListInformation(v34, 0xB0u, (__int64)v11, v33);
  v16 = (unsigned __int64)(PfpGetPageListCount(v35, 0LL, 7LL) << 12) >> 18;
  v18 = (unsigned __int64)(PfpGetPageListCount(v35, DefaultPagePriority, v17) << 12) >> 18;
  PageListCount = PfpGetPageListCount(v35, DefaultPagePriority - 1, v19);
  CurrentThread = KeGetCurrentThread();
  v22 = (unsigned __int64)(PageListCount << 12) >> 18;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_140305960, 1u);
  v23 = (_DWORD *)PfSnPrefetchCacheEntryGet(&unk_140305938, v30, v12, &v29);
  v24 = v23;
  if ( v23 )
  {
    if ( v29 )
    {
      v26 = 13;
      if ( (v5 & 2) != 0 )
        v6 = 13;
    }
    else
    {
      v25 = v15 - v23[27];
      v26 = 4;
      if ( v25 < v23[28] )
      {
        v5 &= ~1u;
        v26 = 5;
      }
      if ( (v5 & 2) != 0 )
      {
        v6 = 4;
        if ( v25 >= v23[29] )
        {
          if ( (dword_140305730 & 2) == 0 )
          {
            if ( v25 >= 0x1B7740 )
            {
              if ( v25 >= 0x36EE80 )
                v28 = v16 - v23[26];
              else
                v28 = v22 - v23[25];
            }
            else
            {
              v28 = v18 - v23[24];
            }
            if ( !v28 )
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
    v24[27] = v15;
    v24[24] = v18;
    v24[25] = v22;
    v24[26] = v16;
  }
  else
  {
    v6 = 3;
    v26 = 3;
  }
  ExReleaseResourceLite(&stru_140305960);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_17:
  *v31 = v26;
  *v32 = v6;
  return v5;
}
