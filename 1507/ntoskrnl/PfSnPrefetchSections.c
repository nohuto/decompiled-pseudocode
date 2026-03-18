/*
 * XREFs of PfSnPrefetchSections @ 0x140420658
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140456B0C (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmPrefetchPagesEx @ 0x14049D750 (MmPrefetchPagesEx.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404F58F0 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnLogGetReadListsStop @ 0x140555C10 (PfSnLogGetReadListsStop.c)
 *     PfSnLogGetReadListsStart @ 0x140555C8C (PfSnLogGetReadListsStart.c)
 */

__int64 __fastcall PfSnPrefetchSections(_QWORD *a1, int a2, int a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // r14
  REGHANDLE v7; // rdi
  __int64 v8; // r15
  int v9; // r13d
  _QWORD *v10; // r12
  unsigned int Count; // esi
  char v12; // di
  unsigned int v13; // esi
  unsigned int *v14; // rbx
  int v15; // r15d
  WORK_QUEUE_TYPE v16; // r13d
  int v17; // edi
  unsigned int *v18; // rbx
  unsigned __int64 v19; // rtt
  unsigned __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // r8
  __int64 v24; // rax
  char v25; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  int v29; // [rsp+50h] [rbp-B8h]
  unsigned int Ptr_high; // [rsp+54h] [rbp-B4h]
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+70h] [rbp-98h] BYREF
  int v35; // [rsp+78h] [rbp-90h]
  unsigned int v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h]
  unsigned __int64 v38; // [rsp+90h] [rbp-78h]
  WORK_QUEUE_TYPE QueueType; // [rsp+98h] [rbp-70h]
  struct _EX_RUNDOWN_REF RunRef[6]; // [rsp+A0h] [rbp-68h] BYREF
  void *v41; // [rsp+D0h] [rbp-38h]
  _QWORD *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-10h]
  int v46; // [rsp+100h] [rbp-8h]
  int v47; // [rsp+104h] [rbp-4h]
  __int64 v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  __int64 v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  int *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  int *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  char *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+158h] [rbp+50h] BYREF
  __int64 v59; // [rsp+168h] [rbp+60h]
  int v60; // [rsp+170h] [rbp+68h]
  int v61; // [rsp+174h] [rbp+6Ch]
  __int64 v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  __int64 v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  int *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  int *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]
  __int16 *v70; // [rsp+1B8h] [rbp+B0h]
  __int64 v71; // [rsp+1C0h] [rbp+B8h]
  __int64 *v72; // [rsp+1C8h] [rbp+C0h]
  __int64 v73; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v74; // [rsp+1D8h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+D8h]

  v5 = *a1;
  v7 = RegHandle;
  v8 = -1LL;
  v29 = a3;
  v9 = a2;
  v35 = a2;
  v10 = a1;
  v42 = a1;
  Count = 0;
  v38 = a5;
  Ptr_high = 0;
  v25 = 0;
  v33 = a2;
  v32 = a3;
  if ( v5 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Start) )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_WORD *)(v5 + 16 + 2 * v24) );
    LOWORD(v27) = v24;
    UserData.Ptr = (ULONGLONG)&v27;
    v46 = 2 * (unsigned __int16)v24;
    v45 = v5 + 16;
    v48 = v5 + 76;
    *(_QWORD *)&UserData.Size = 2LL;
    v50 = v5 + 80;
    v52 = &v32;
    v54 = &v33;
    v56 = &v25;
    v47 = 0;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 1LL;
    EtwWrite(v7, &PfSnEvt_PrefetchSections_Start, 0LL, 7u, &UserData);
    v7 = RegHandle;
  }
  if ( a3 >= 1 << *(_DWORD *)(*v10 + 124LL) )
    goto LABEL_38;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v12 = 1;
      goto LABEL_8;
    }
LABEL_38:
    v21 = -1073741811;
    goto LABEL_29;
  }
  v12 = 0;
LABEL_8:
  v13 = *(_DWORD *)(v5 + 88);
  v41 = (void *)v10[22];
  memset(v41, 0, 8LL * v13);
  v14 = (unsigned int *)v10[25];
  memset(v14, 0, 0x600uLL);
  memset(RunRef, 0, sizeof(RunRef));
  RunRef[0].Count = 0LL;
  RunRef[2].Count = v38;
  RunRef[1].Count = (unsigned __int64)v10;
  LODWORD(RunRef[4].Count) = v13;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( v13 > 0x20 )
    v13 = 32;
  PfSnLogGetReadListsStart(v5, v13);
  if ( v13 )
  {
    v15 = v29;
    v16 = QueueType;
    v17 = v12 & 1;
    v18 = v14 + 11;
    v37 = v13;
    do
    {
      *(v18 - 1) = v15;
      *(_QWORD *)(v18 - 3) = RunRef;
      *v18 = v17 | *v18 & 0xFFFFFFFE;
      *(_QWORD *)(v18 - 11) = 0LL;
      *(_QWORD *)(v18 - 7) = PfSnPopulateReadList;
      *(_QWORD *)(v18 - 5) = v18 - 11;
      _m_prefetchw(RunRef);
      v19 = RunRef[0].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v19 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)RunRef,
                    (RunRef[0].Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                    RunRef[0].Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfAcquireRundownProtection(RunRef);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v18 - 11), v16);
      v18 += 12;
      --v37;
    }
    while ( v37 );
    v10 = v42;
    v8 = -1LL;
    v9 = v35;
  }
  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
  if ( v20 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)RunRef, v20);
  PfSnLogGetReadListsStop(v5);
  Count = RunRef[3].Count;
  v21 = RunRef[5].Count;
  if ( SLODWORD(RunRef[5].Count) < 0 )
    goto LABEL_24;
  Ptr_high = HIDWORD(RunRef[4].Ptr);
  if ( LODWORD(RunRef[3].Count) )
  {
    if ( HIDWORD(RunRef[4].Ptr) )
    {
      v21 = MmPrefetchPagesEx(LODWORD(RunRef[3].Count), v41, v10 + 27);
      if ( v21 >= 0 && !v10[27] )
        v21 = -2147483622;
    }
    else
    {
      v21 = -1073741823;
    }
LABEL_24:
    if ( Count )
    {
      v22 = Count;
      if ( Count > 0x20 )
        v22 = 32LL;
      PfSnPrefetchSectionsCleanup(v10, Count, v22, v38);
    }
    goto LABEL_28;
  }
  v21 = 0;
LABEL_28:
  v7 = RegHandle;
LABEL_29:
  v36 = Count;
  v31 = v29;
  v43 = Ptr_high;
  LOBYTE(v26) = 0;
  v34 = v9;
  if ( v5 && v7 && EtwEventEnabled(v7, &PfSnEvt_PrefetchSections_Stop) )
  {
    do
      ++v8;
    while ( *(_WORD *)(v5 + 16 + 2 * v8) );
    v59 = v5 + 16;
    v58.Ptr = (ULONGLONG)&v28;
    LOWORD(v28) = v8;
    v60 = 2 * (unsigned __int16)v8;
    *(_QWORD *)&v58.Size = 2LL;
    v62 = v5 + 76;
    v61 = 0;
    v64 = v5 + 80;
    v66 = &v31;
    v68 = &v34;
    v70 = &v26;
    v72 = &v43;
    v74 = &v36;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 1LL;
    v73 = 8LL;
    v75 = 4LL;
    EtwWrite(v7, &PfSnEvt_PrefetchSections_Stop, 0LL, 9u, &v58);
  }
  return (unsigned int)v21;
}
