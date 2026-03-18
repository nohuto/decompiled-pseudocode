/*
 * XREFs of CmUnRegisterCallback @ 0x1406527EC
 * Callers:
 *     EtwpRegTraceEnableCallback @ 0x1406E786C (EtwpRegTraceEnableCallback.c)
 *     VerifierCmUnRegisterCallback @ 0x140741B24 (VerifierCmUnRegisterCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 *     CmpUnlockCallbackList @ 0x1405BDF54 (CmpUnlockCallbackList.c)
 *     CmpLockCallbackListExclusive @ 0x1405BDFD4 (CmpLockCallbackListExclusive.c)
 *     CmpLockContextListExclusive @ 0x14065D8EC (CmpLockContextListExclusive.c)
 *     CmpUnlockContextList @ 0x14065DA74 (CmpUnlockContextList.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  char *NextElement; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 *v14; // rax
  char v15; // si
  char *i; // rbx
  char *v17; // r13
  char *v18; // r14
  char *v19; // rdx
  char **v20; // rcx
  __int64 v21; // rcx
  char **v22; // rax
  char **v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rcx
  PVOID *v26; // rbx
  char *v27; // rbx
  PSLIST_ENTRY v28; // rbx
  PSLIST_ENTRY v29; // rcx
  void *v30; // rcx
  char *v32; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v33[3]; // [rsp+38h] [rbp-80h] BYREF
  __int64 *v34; // [rsp+50h] [rbp-68h] BYREF
  char *v35; // [rsp+58h] [rbp-60h]
  __int64 v36; // [rsp+60h] [rbp-58h] BYREF
  __int64 v37; // [rsp+68h] [rbp-50h]
  __int64 v38; // [rsp+70h] [rbp-48h]
  __int64 v40; // [rsp+D0h] [rbp+18h] BYREF
  int v41; // [rsp+D8h] [rbp+20h]

  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v33[0] = 0LL;
  CmpLockCallbackListExclusive(Cookie.QuadPart, v1, v2, v3);
  while ( 1 )
  {
    do
    {
      NextElement = CmListGetNextElement(&CallbackListHead, v33, 0);
      v7 = NextElement;
      v33[1] = NextElement;
      if ( !NextElement )
      {
        CmpUnlockCallbackList(v6, v5);
        return -1073741811;
      }
    }
    while ( *((_QWORD *)NextElement + 3) != Cookie.QuadPart );
    v8 = *((unsigned int *)NextElement + 4);
    LODWORD(v40) = v8;
    if ( !(_DWORD)v8 )
      break;
    if ( (v8 & 0x80000000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)NextElement + 4, 0x80000000);
      CmpUnlockCallbackList(v8, v5);
      while ( 1 )
      {
        LODWORD(v40) = *((_DWORD *)v7 + 4);
        if ( (_DWORD)v40 == 0x80000000 )
          break;
        ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v7 + 2, &v40, 4uLL, 0LL);
      }
      CmpLockCallbackListExclusive(v10, v9, v11, v12);
      v13 = *(_QWORD *)v7;
      v14 = (__int64 *)*((_QWORD *)v7 + 1);
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (char *)*v14 != v7 )
        __fastfail(3u);
      goto LABEL_14;
    }
  }
  v13 = *(_QWORD *)NextElement;
  v14 = (__int64 *)*((_QWORD *)NextElement + 1);
  if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (char *)*v14 != v7 )
    __fastfail(3u);
LABEL_14:
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  CmpUnlockCallbackList(v13, v5);
  v41 = 0;
  v35 = (char *)&v34;
  v34 = (__int64 *)&v34;
  v15 = 0;
  CmpLockContextListExclusive();
  for ( i = (char *)*((_QWORD *)v7 + 8); ; i = v17 )
  {
    v32 = i;
    if ( i == v7 + 64 )
      break;
    v17 = *(char **)i;
    v18 = i - 16;
    if ( ObReferenceObjectSafe(*((_QWORD *)i + 4)) )
    {
      v19 = *(char **)i;
      v20 = (char **)*((_QWORD *)v18 + 3);
      if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v20 != i )
        __fastfail(3u);
      *v20 = v19;
      *((_QWORD *)v19 + 1) = v20;
      v21 = *(_QWORD *)v18;
      v22 = (char **)*((_QWORD *)v18 + 1);
      if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 || *v22 != v18 )
        __fastfail(3u);
      *v22 = (char *)v21;
      *(_QWORD *)(v21 + 8) = v22;
      v23 = (char **)v35;
      *(_QWORD *)i = &v34;
      *((_QWORD *)i + 1) = v23;
      if ( *v23 != (char *)&v34 )
        __fastfail(3u);
      *v23 = i;
      v35 = i;
    }
    else
    {
      v15 = 1;
    }
  }
  CmpUnlockContextList();
  while ( 1 )
  {
    v24 = v34;
    if ( v34 == (__int64 *)&v34 )
      break;
    v25 = (__int64 *)*v34;
    if ( (__int64 **)v34[1] != &v34 || (__int64 *)v25[1] != v34 )
      __fastfail(3u);
    v34 = (__int64 *)*v34;
    v25[1] = (__int64)&v34;
    v26 = (PVOID *)(v24 - 2);
    v33[2] = v24 - 2;
    v36 = v24[4];
    v37 = v24[5];
    (*((void (__fastcall **)(_QWORD, __int64, __int64 *))v7 + 5))(*((_QWORD *)v7 + 4), 40LL, &v36);
    ObfDereferenceObject(v26[6]);
    ExFreePoolWithTag(v26, 0x63634D43u);
  }
  while ( v15 )
  {
    CmpLockContextListExclusive();
    v32 = (char *)*((_QWORD *)v7 + 8);
    v27 = v32;
    CmpUnlockContextList();
    if ( v27 == v7 + 64 )
      v15 = 0;
    else
      ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v7 + 8, &v32, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v28 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v28 )
    {
      v29 = v28;
      v28 = v28->Next;
      ExFreePoolWithTag(v29, 0);
    }
  }
  v30 = (void *)*((_QWORD *)v7 + 7);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  ExFreePoolWithTag(v7, 0);
  return 0;
}
