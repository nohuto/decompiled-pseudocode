/*
 * XREFs of PfSnPrefetchSections @ 0x1404DF6C8
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x1404DF16C (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmPrefetchPagesEx @ 0x1404D9B80 (MmPrefetchPagesEx.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404DF5E4 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnLogGetReadListsStop @ 0x1404DF97C (PfSnLogGetReadListsStop.c)
 *     PfSnLogGetReadListsStart @ 0x1404DF9F8 (PfSnLogGetReadListsStart.c)
 */

__int64 __fastcall PfSnPrefetchSections(_QWORD *a1, WORK_QUEUE_TYPE a2, int a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // r14
  REGHANDLE v7; // rdi
  __int64 v8; // r15
  WORK_QUEUE_TYPE v9; // r13d
  _QWORD *v10; // r12
  unsigned int Count; // esi
  char v12; // si
  unsigned int v13; // ebx
  unsigned int *v14; // rdi
  int v15; // r15d
  int v16; // esi
  WORK_QUEUE_TYPE v17; // r12d
  unsigned int *v18; // rdi
  __int64 v19; // r13
  int v20; // ebx
  unsigned int v21; // r8d
  __int64 v23; // rax
  char v24; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  WORK_QUEUE_TYPE QueueType; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+58h] [rbp-B0h] BYREF
  int v29; // [rsp+5Ch] [rbp-ACh]
  unsigned int Ptr_high; // [rsp+60h] [rbp-A8h]
  int v31; // [rsp+68h] [rbp-A0h] BYREF
  WORK_QUEUE_TYPE v32; // [rsp+70h] [rbp-98h] BYREF
  WORK_QUEUE_TYPE v33; // [rsp+78h] [rbp-90h]
  unsigned int v34; // [rsp+80h] [rbp-88h] BYREF
  int v35; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v36; // [rsp+90h] [rbp-78h]
  _QWORD *v37; // [rsp+98h] [rbp-70h]
  void *v38; // [rsp+A0h] [rbp-68h]
  __int64 v39; // [rsp+A8h] [rbp-60h] BYREF
  struct _EX_RUNDOWN_REF RunRef[7]; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]
  __int64 v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  __int64 v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  int *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  WORK_QUEUE_TYPE *p_QueueType; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  char *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+158h] [rbp+50h] BYREF
  __int64 v56; // [rsp+168h] [rbp+60h]
  int v57; // [rsp+170h] [rbp+68h]
  int v58; // [rsp+174h] [rbp+6Ch]
  __int64 v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  __int64 v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  int *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  WORK_QUEUE_TYPE *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  __int16 *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  __int64 *v69; // [rsp+1C8h] [rbp+C0h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v71; // [rsp+1D8h] [rbp+D0h]
  __int64 v72; // [rsp+1E0h] [rbp+D8h]

  v5 = *a1;
  v7 = RegHandle;
  v8 = -1LL;
  v29 = a3;
  v9 = a2;
  v33 = a2;
  v10 = a1;
  v37 = a1;
  Count = 0;
  v36 = a5;
  Ptr_high = 0;
  v24 = 0;
  QueueType = a2;
  v35 = a3;
  if ( v5 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Start) )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_WORD *)(v5 + 16 + 2 * v23) );
    LOWORD(v28) = v23;
    UserData.Ptr = (ULONGLONG)&v28;
    v43 = 2 * (unsigned __int16)v23;
    v42 = v5 + 16;
    v45 = v5 + 76;
    *(_QWORD *)&UserData.Size = 2LL;
    v47 = v5 + 80;
    v49 = &v35;
    p_QueueType = &QueueType;
    v53 = &v24;
    v44 = 0;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 1LL;
    EtwWrite(v7, &PfSnEvt_PrefetchSections_Start, 0LL, 7u, &UserData);
    v7 = RegHandle;
  }
  if ( a3 >= 1 << *(_DWORD *)(*v10 + 124LL) )
    goto LABEL_34;
  if ( v9 )
  {
    if ( v9 == DelayedWorkQueue )
    {
      v12 = 1;
      goto LABEL_8;
    }
LABEL_34:
    v20 = -1073741811;
    goto LABEL_25;
  }
  v12 = 0;
LABEL_8:
  v13 = *(_DWORD *)(v5 + 88);
  v38 = (void *)v10[8];
  memset(v38, 0, 8LL * v13);
  v14 = (unsigned int *)v10[11];
  memset(v14, 0, 0x600uLL);
  memset(RunRef, 0, 0x30uLL);
  RunRef[0].Count = 0LL;
  RunRef[2].Count = v36;
  RunRef[1].Count = (unsigned __int64)v10;
  LODWORD(RunRef[4].Count) = v13;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( v13 > 0x20 )
    v13 = 32;
  PfSnLogGetReadListsStart(v5, v13);
  if ( v13 )
  {
    v15 = v29;
    v16 = v12 & 1;
    v17 = QueueType;
    v18 = v14 + 11;
    v19 = v13;
    do
    {
      *(v18 - 1) = v15;
      *(_QWORD *)(v18 - 3) = RunRef;
      *v18 = v16 | *v18 & 0xFFFFFFFE;
      *(_QWORD *)(v18 - 11) = 0LL;
      *(_QWORD *)(v18 - 7) = PfSnPopulateReadList;
      *(_QWORD *)(v18 - 5) = v18 - 11;
      ExAcquireRundownProtection(RunRef);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v18 - 11), v17);
      v18 += 12;
      --v19;
    }
    while ( v19 );
    v10 = v37;
    v8 = -1LL;
    v9 = v33;
  }
  ExWaitForRundownProtectionRelease(RunRef);
  PfSnLogGetReadListsStop(v5);
  Count = RunRef[3].Count;
  v20 = RunRef[5].Count;
  if ( SLODWORD(RunRef[5].Count) < 0 )
    goto LABEL_20;
  Ptr_high = HIDWORD(RunRef[4].Ptr);
  if ( LODWORD(RunRef[3].Count) )
  {
    if ( HIDWORD(RunRef[4].Ptr) )
    {
      v20 = MmPrefetchPagesEx(RunRef[3].Count, (__int64)v38, v10 + 13);
      if ( v20 >= 0 && !v10[13] )
        v20 = -2147483622;
    }
    else
    {
      v20 = -1073741823;
    }
LABEL_20:
    if ( Count )
    {
      v21 = Count;
      if ( Count > 0x20 )
        v21 = 32;
      PfSnPrefetchSectionsCleanup((unsigned __int64)v10, Count, v21, v36);
    }
    goto LABEL_24;
  }
  v20 = 0;
LABEL_24:
  v7 = RegHandle;
LABEL_25:
  v34 = Count;
  v31 = v29;
  v39 = Ptr_high;
  LOBYTE(v25) = 0;
  v32 = v9;
  if ( v5 && v7 && EtwEventEnabled(v7, &PfSnEvt_PrefetchSections_Stop) )
  {
    do
      ++v8;
    while ( *(_WORD *)(v5 + 16 + 2 * v8) );
    v56 = v5 + 16;
    v55.Ptr = (ULONGLONG)&v26;
    LOWORD(v26) = v8;
    v57 = 2 * (unsigned __int16)v8;
    *(_QWORD *)&v55.Size = 2LL;
    v59 = v5 + 76;
    v58 = 0;
    v61 = v5 + 80;
    v63 = &v31;
    v65 = &v32;
    v67 = &v25;
    v69 = &v39;
    v71 = &v34;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 1LL;
    v70 = 8LL;
    v72 = 4LL;
    EtwWrite(v7, &PfSnEvt_PrefetchSections_Stop, 0LL, 9u, &v55);
  }
  return (unsigned int)v20;
}
