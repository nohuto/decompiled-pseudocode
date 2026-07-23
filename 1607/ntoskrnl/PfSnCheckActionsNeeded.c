/*
 * XREFs of PfSnCheckActionsNeeded @ 0x1403E8FC4
 * Callers:
 *     PfSnBeginScenario @ 0x1403E8500 (PfSnBeginScenario.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     MmGetDefaultPagePriority @ 0x1400D1BB8 (MmGetDefaultPagePriority.c)
 *     PsGetPagePriorityThread @ 0x1400E5CA0 (PsGetPagePriorityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1403EA154 (PfSnPrefetchCacheEntryGet.c)
 *     PfpGetPageListCount @ 0x14042AAD8 (PfpGetPageListCount.c)
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
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v31; // eax
  int v32; // [rsp+20h] [rbp-118h] BYREF
  int v33; // [rsp+24h] [rbp-114h] BYREF
  __int64 v34; // [rsp+28h] [rbp-110h]
  int *v35; // [rsp+30h] [rbp-108h]
  int *v36; // [rsp+38h] [rbp-100h]
  __int128 v37[6]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v38[72]; // [rsp+A8h] [rbp-90h] BYREF

  v5 = 3;
  v36 = a5;
  v35 = a4;
  v34 = a1;
  v6 = 23;
  if ( (dword_140328570 & 8) != 0 )
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
  if ( (dword_140328810 & 0x10) != 0 && !v8 )
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
  MmQueryMemoryListInformation(v37, 0xB0u, (__int64)v11, &v33);
  v16 = (unsigned __int64)(PfpGetPageListCount(v38, 0LL, 7LL) << 12) >> 18;
  v18 = (unsigned __int64)(PfpGetPageListCount(v38, DefaultPagePriority, v17) << 12) >> 18;
  PageListCount = PfpGetPageListCount(v38, DefaultPagePriority - 1, v19);
  CurrentThread = KeGetCurrentThread();
  v22 = (unsigned __int64)(PageListCount << 12) >> 18;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_1403287A0, 1u);
  v23 = (_DWORD *)PfSnPrefetchCacheEntryGet(&unk_140328778, v34, v12, &v32);
  v24 = v23;
  if ( v23 )
  {
    if ( v32 )
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
          if ( (dword_140328570 & 2) == 0 )
          {
            if ( v25 >= 0x1B7740 )
            {
              if ( v25 < 0x36EE80 )
                v31 = v22 - v23[25];
              else
                v31 = v16 - v23[26];
            }
            else
            {
              v31 = v18 - v23[24];
            }
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
  ExReleaseResourceLite(&stru_1403287A0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
LABEL_17:
  *v35 = v26;
  *v36 = v6;
  return v5;
}
