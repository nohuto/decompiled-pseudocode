/*
 * XREFs of CmLoadKey @ 0x1404BEDE8
 * Callers:
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 * Callees:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpCmdHiveOpen @ 0x14044C29C (CmpCmdHiveOpen.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x140499358 (CmpDestroySecurityCache.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404BF0E0 (CmpQueryHiveRedirectionFileList.c)
 *     CmpRemoveHiveFromMapping @ 0x1405E28F4 (CmpRemoveHiveFromMapping.c)
 *     ObDrainDeferredObjectDeletion @ 0x14062DBC4 (ObDrainDeferredObjectDeletion.c)
 */

__int64 __fastcall CmLoadKey(_QWORD *a1, UNICODE_STRING *a2, int a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  signed __int64 v7; // rbx
  _WORD *v11; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  wchar_t *PoolWithTag; // rax
  wchar_t *v16; // r15
  UNICODE_STRING *v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v19; // r11
  int Conflict; // esi
  _QWORD *v21; // r13
  ULONG_PTR v22; // rdi
  int KeyCommon; // eax
  NTSTATUS v25; // edi
  int v26; // edi
  UNICODE_STRING *p_Destination; // rax
  __int64 v28; // r8
  _QWORD *v29; // r14
  __int64 v30; // rax
  signed __int8 v31; // cf
  __int64 v32; // rdi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  ULONG_PTR v35; // rtt
  char v36[4]; // [rsp+40h] [rbp-40h] BYREF
  int v37; // [rsp+44h] [rbp-3Ch]
  int v38; // [rsp+48h] [rbp-38h] BYREF
  ULONG_PTR v39; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  PVOID v42; // [rsp+68h] [rbp-18h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-10h] BYREF
  char v44; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v45; // [rsp+D8h] [rbp+58h]

  v45 = a4;
  v7 = 0LL;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  v11 = (_WORD *)a1[2];
  v39 = 0LL;
  v44 = 0;
  Destination.Length = 0;
  if ( *v11 >= 2u )
  {
    for ( LODWORD(v13) = (unsigned __int16)*v11 >> 1; (_DWORD)v13; *(_WORD *)v14 -= 2 )
    {
      v14 = a1[2];
      v13 = (unsigned int)(v13 - 1);
      if ( *(_WORD *)(*(_QWORD *)(v14 + 8) + 2 * v13) != 92 )
        break;
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
    return 3221225485LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x62534D43u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v17 = (UNICODE_STRING *)a1[2];
  *(_DWORD *)&Destination.Length = 17039360;
  Destination.Buffer = PoolWithTag;
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(v17, &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = a2;
    a2 = p_Destination;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v36[0] = 1;
    v37 = a3 & 0x2000;
    v19 = 0;
    if ( (a3 & 0x2000) != 0 )
      v19 = 3;
    Conflict = CmpCmdHiveOpen(
                 &a2->Length,
                 1,
                 v36,
                 &v39,
                 ((a3 & 0x20) << 21) | ((a3 & 0x80) << 20) | ((a3 & 0x200) << 19) | ((a3 & 4) << 27) | ((a3 & 0x400) << 20) | ((a3 & 0xFFFFF000) << 19) | 0x1010001,
                 v19,
                 (__int64)&v44);
    if ( (int)(Conflict + 0x80000000) >= 0 )
    {
      if ( Conflict != -1073741757 )
      {
LABEL_22:
        v22 = v39;
        goto LABEL_15;
      }
    }
    else if ( Conflict != -1073741757 )
    {
      v21 = a7;
      v22 = v39;
      if ( !v37 )
        goto LABEL_13;
      Conflict = ObReferenceObjectByHandle(
                   *(HANDLE *)(v39 + 2664),
                   0,
                   *(POBJECT_TYPE *)CmIoFileObjectType,
                   0,
                   &v42,
                   0LL);
      if ( Conflict >= 0 )
      {
        Conflict = CmpResolveHiveLoadConflict((int)a1, (int)v42, a3, v45, a5, a6, v21);
        ObfDereferenceObject(v42);
        if ( Conflict >= 0 )
        {
LABEL_14:
          Conflict = 0;
          goto LABEL_15;
        }
        if ( Conflict == -1073741275 )
        {
LABEL_13:
          KeyCommon = CmpLoadKeyCommon(v22, a1, a3, v45, a5, v21, v36[0], v44);
          v39 = 0LL;
          Conflict = KeyCommon;
          v22 = 0LL;
          if ( KeyCommon < 0 )
          {
LABEL_16:
            ExReleaseRundownProtection_0(&CmpShutdownRundown);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            ExFreePoolWithTag(v16, 0);
            return (unsigned int)Conflict;
          }
          goto LABEL_14;
        }
      }
LABEL_15:
      if ( v22 )
      {
        ObDrainDeferredObjectDeletion();
        CmpDestroySecurityCache(v22);
        v29 = (_QWORD *)(v22 + 5368);
        if ( (_QWORD *)*v29 != v29 )
        {
          v30 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
          v31 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
          v32 = v30;
          if ( v31 )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v30, (ULONG_PTR)&CmpHiveListHeadLock);
          if ( v32 )
            *(_BYTE *)(v32 + 26) |= 1u;
          v33 = *v29;
          v34 = (_QWORD *)v29[1];
          if ( *(_QWORD **)(*v29 + 8LL) != v29 || (_QWORD *)*v34 != v29 )
            __fastfail(3u);
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          _m_prefetchw(&CmpHiveListHeadLock);
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v7 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v35 = CmpHiveListHeadLock,
                v35 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v7,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          v22 = v39;
        }
        if ( (*(_DWORD *)(v22 + 5360) & 2) != 0 )
          CmpRemoveHiveFromMapping(v22);
        HvFreeHive(v22, 1, v28);
        CmpCmdHiveClose(v22);
        CmpDereferenceHive(v22);
      }
      goto LABEL_16;
    }
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, &v38, 8, 0LL, 0LL, 0LL) < 0
      || (v25 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL),
          ZwClose(Handle),
          v25 < 0) )
    {
      Conflict = -1073741757;
    }
    else
    {
      v26 = CmpResolveHiveLoadConflict((int)a1, (int)Object, a3, a4, a5, a6, a7);
      ObfDereferenceObject(Object);
      Conflict = 0;
      if ( v26 < 0 )
        Conflict = -1073741757;
    }
    goto LABEL_22;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(v16, 0);
  return 3221225865LL;
}
