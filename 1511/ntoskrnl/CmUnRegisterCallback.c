/*
 * XREFs of CmUnRegisterCallback @ 0x1405DD2C0
 * Callers:
 *     EtwpRegTraceEnableCallback @ 0x140664794 (EtwpRegTraceEnableCallback.c)
 *     VerifierCmUnRegisterCallback @ 0x1406C0330 (VerifierCmUnRegisterCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     ExBlockOnAddressPushLock @ 0x1400D26F0 (ExBlockOnAddressPushLock.c)
 *     RtlpInterlockedFlushSList @ 0x14015B9E0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmpUnlockCallbackList @ 0x1404C4FA0 (CmpUnlockCallbackList.c)
 *     CmpLockCallbackListExclusive @ 0x140548B9C (CmpLockCallbackListExclusive.c)
 *     CmpLockContextListExclusive @ 0x1405E645C (CmpLockContextListExclusive.c)
 *     CmpUnlockContextList @ 0x1405E6674 (CmpUnlockContextList.c)
 */

NTSTATUS __stdcall CmUnRegisterCallback(LARGE_INTEGER Cookie)
{
  char *NextElement; // rax
  char *v2; // rdi
  _QWORD *v3; // rcx
  void **v4; // rax
  char v5; // si
  char *i; // rbx
  char *v7; // r13
  char *v8; // r14
  char *v9; // rdx
  char **v10; // rcx
  __int64 v11; // rcx
  char **v12; // rax
  char **v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rcx
  PVOID *v16; // rbx
  char *v17; // rbx
  PSLIST_ENTRY v18; // rbx
  PSLIST_ENTRY v19; // rcx
  void *v20; // rcx
  char *v22; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-80h] BYREF
  __int64 *v24; // [rsp+50h] [rbp-68h] BYREF
  char *v25; // [rsp+58h] [rbp-60h]
  __int64 v26; // [rsp+60h] [rbp-58h] BYREF
  __int64 v27; // [rsp+68h] [rbp-50h]
  __int64 v28; // [rsp+70h] [rbp-48h]
  __int64 v30; // [rsp+D0h] [rbp+18h] BYREF
  int v31; // [rsp+D8h] [rbp+20h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v23[0] = 0LL;
  CmpLockCallbackListExclusive();
  while ( 1 )
  {
    do
    {
      NextElement = CmListGetNextElement(&CallbackListHead, v23, 0);
      v2 = NextElement;
      v23[1] = NextElement;
      if ( !NextElement )
      {
        CmpUnlockCallbackList();
        return -1073741811;
      }
    }
    while ( *((_QWORD *)NextElement + 3) != Cookie.QuadPart );
    LODWORD(v30) = *((_DWORD *)NextElement + 4);
    if ( !(_DWORD)v30 )
      break;
    if ( (v30 & 0x80000000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)NextElement + 4, 0x80000000);
      CmpUnlockCallbackList();
      while ( 1 )
      {
        LODWORD(v30) = *((_DWORD *)v2 + 4);
        if ( (_DWORD)v30 == 0x80000000 )
          break;
        ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v2 + 2, &v30, 4uLL, 0LL);
      }
      CmpLockCallbackListExclusive();
      v3 = *(_QWORD **)v2;
      v4 = (void **)*((_QWORD *)v2 + 1);
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *v4 != v2 )
        __fastfail(3u);
      goto LABEL_14;
    }
  }
  v3 = *(_QWORD **)NextElement;
  v4 = (void **)*((_QWORD *)NextElement + 1);
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *v4 != v2 )
    __fastfail(3u);
LABEL_14:
  *v4 = v3;
  v3[1] = v4;
  CmpUnlockCallbackList();
  v31 = 0;
  v25 = (char *)&v24;
  v24 = (__int64 *)&v24;
  v5 = 0;
  CmpLockContextListExclusive();
  for ( i = (char *)*((_QWORD *)v2 + 8); ; i = v7 )
  {
    v22 = i;
    if ( i == v2 + 64 )
      break;
    v7 = *(char **)i;
    v8 = i - 16;
    if ( ObReferenceObjectSafe(*((_QWORD *)i + 4)) )
    {
      v9 = *(char **)i;
      v10 = (char **)*((_QWORD *)v8 + 3);
      if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v10 != i )
        __fastfail(3u);
      *v10 = v9;
      *((_QWORD *)v9 + 1) = v10;
      v11 = *(_QWORD *)v8;
      v12 = (char **)*((_QWORD *)v8 + 1);
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || *v12 != v8 )
        __fastfail(3u);
      *v12 = (char *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      v13 = (char **)v25;
      *(_QWORD *)i = &v24;
      *((_QWORD *)i + 1) = v13;
      if ( *v13 != (char *)&v24 )
        __fastfail(3u);
      *v13 = i;
      v25 = i;
    }
    else
    {
      v5 = 1;
    }
  }
  CmpUnlockContextList();
  while ( 1 )
  {
    v14 = v24;
    if ( v24 == (__int64 *)&v24 )
      break;
    v15 = (__int64 *)*v24;
    if ( (__int64 **)v24[1] != &v24 || (__int64 *)v15[1] != v24 )
      __fastfail(3u);
    v24 = (__int64 *)*v24;
    v15[1] = (__int64)&v24;
    v16 = (PVOID *)(v14 - 2);
    v23[2] = v14 - 2;
    v26 = v14[4];
    v27 = v14[5];
    (*((void (__fastcall **)(_QWORD, __int64, __int64 *))v2 + 5))(*((_QWORD *)v2 + 4), 40LL, &v26);
    ObfDereferenceObject(v16[6]);
    ExFreePoolWithTag(v16, 0x63634D43u);
  }
  while ( v5 )
  {
    CmpLockContextListExclusive();
    v22 = (char *)*((_QWORD *)v2 + 8);
    v17 = v22;
    CmpUnlockContextList();
    if ( v17 == v2 + 64 )
      v5 = 0;
    else
      ExBlockOnAddressPushLock((__int64)&CallbackListDeleteEvent, (_QWORD *)v2 + 8, &v22, 8uLL, 0LL);
  }
  if ( _InterlockedExchangeAdd(&CmpCallBackCount, 0xFFFFFFFF) == 1 )
  {
    v18 = RtlpInterlockedFlushSList(&CmpCallbackContextSList);
    while ( v18 )
    {
      v19 = v18;
      v18 = v18->Next;
      ExFreePoolWithTag(v19, 0);
    }
  }
  v20 = (void *)*((_QWORD *)v2 + 7);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  ExFreePoolWithTag(v2, 0);
  return 0;
}
