/*
 * XREFs of PfSnPopulateReadList @ 0x1404733A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14042D2D8 (PfSnCleanupPrefetchSectionInfo.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404738D4 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x140473938 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140473CFC (PfSnFindPrefetchVolumeInfoInList.c)
 *     NtCreateEvent @ 0x140488270 (NtCreateEvent.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  volatile signed __int32 *v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r12
  _KPROCESS *v5; // rcx
  _QWORD *PoolWithTag; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rax
  __int64 v11; // r9
  unsigned int v12; // r13d
  int v13; // esi
  char *v14; // rcx
  char *v15; // rdx
  char *v16; // r10
  __int64 v17; // rax
  int v18; // ebx
  unsigned int v19; // ebx
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  unsigned __int64 v22; // rtt
  __int64 v23; // rax
  char *v24; // rdi
  unsigned int v25; // edx
  int v26; // r12d
  int v27; // r12d
  wchar_t *v28; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  char v30; // r10
  __int64 v31; // r11
  BOOL v32; // r9d
  __int64 v33; // rcx
  int v34; // r14d
  char *v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rcx
  unsigned int v39; // ecx
  unsigned __int8 v40; // cf
  char v41; // [rsp+58h] [rbp-B0h] BYREF
  int v42; // [rsp+5Ch] [rbp-ACh]
  __int64 v43; // [rsp+60h] [rbp-A8h]
  __int64 v44; // [rsp+68h] [rbp-A0h]
  volatile signed __int32 *v45; // [rsp+70h] [rbp-98h]
  __int64 v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h]
  HANDLE EventHandle; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h] BYREF
  char *v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  __int64 v52; // [rsp+A8h] [rbp-60h]
  char *v53; // [rsp+B0h] [rbp-58h]
  __int64 v54; // [rsp+B8h] [rbp-50h]
  char *v55; // [rsp+C0h] [rbp-48h]
  unsigned int v56; // [rsp+C8h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v59[48]; // [rsp+110h] [rbp+8h] BYREF

  v1 = *(volatile signed __int32 **)(a1 + 32);
  LODWORD(v2) = 0;
  v3 = *((_QWORD *)v1 + 1);
  v4 = a1;
  v52 = a1;
  v5 = (_KPROCESS *)*((_QWORD *)v1 + 2);
  PoolWithTag = 0LL;
  v43 = v3;
  v45 = v1;
  v41 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v5, 0, (__int64)v59);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v8 < 0 )
    goto LABEL_62;
  v10 = *(unsigned int **)v3;
  v11 = v3;
  v49 = 0LL;
  v12 = 0;
  v13 = *(_DWORD *)(v4 + 40);
  LODWORD(v44) = v13;
  v14 = (char *)v10 + v10[21];
  v15 = (char *)v10 + v10[23];
  v16 = (char *)v10 + v10[25];
  v55 = v14;
  v54 = *(_QWORD *)(v3 + 176);
  v17 = *(_QWORD *)(v3 + 184);
  v18 = *(_DWORD *)(v3 + 212) & 7;
  v51 = v17;
  v19 = *(_DWORD *)(v11 + 208) & 7 | (8 * (v18 | 8));
  v53 = v15;
  v50 = v16;
  v2 = (unsigned int)_InterlockedExchangeAdd(v1 + 7, 1u);
  v42 = v2;
  if ( (unsigned int)v2 >= *((_DWORD *)v1 + 8) )
    goto LABEL_3;
  while ( 1 )
  {
    v23 = (unsigned int)v2;
    v24 = &v14[32 * v2];
    v47 = v23;
    v25 = *((_DWORD *)v24 + 5);
    if ( (v25 & 1) != 0 )
      goto LABEL_42;
    v26 = *(_DWORD *)(v4 + 44);
    LOBYTE(v9) = 0;
    LODWORD(v46) = v9;
    v27 = v26 & 1;
    if ( !v27 )
      break;
    if ( ((unsigned __int8)v13 & BYTE1(v25) & 0x7F) != 0 )
      goto LABEL_13;
LABEL_42:
    if ( v41 )
    {
      PfSnCleanupPrefetchSectionInfo((PVOID *)(*(_QWORD *)(v11 + 168) + 56 * v23), v11, 1);
      v41 = 0;
    }
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
LABEL_33:
    v12 = 0;
    v2 = (unsigned int)_InterlockedExchangeAdd(v1 + 7, 1u);
    v42 = v2;
    if ( (unsigned int)v2 >= *((_DWORD *)v1 + 8) )
    {
      v3 = v43;
      goto LABEL_56;
    }
    v11 = v43;
    v4 = v52;
    v14 = v55;
    v16 = v50;
  }
  LODWORD(v9) = 0;
  if ( !_BitScanForward(&v39, (v25 >> 8) & 0x7F) )
    v39 = 7;
  v40 = _bittest(&v13, v39);
  v56 = v39;
  if ( v40 )
    LODWORD(v9) = 1;
  LODWORD(v46) = v9;
  if ( ((unsigned __int8)v13 & (unsigned __int8)(v25 >> 1) & 0x7F) == 0 && !(_BYTE)v9 )
    goto LABEL_41;
LABEL_13:
  v28 = (wchar_t *)&v16[*((unsigned int *)v24 + 3)];
  PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v28);
  if ( !PrefetchVolumeInfoInList )
  {
    v13 = v44;
LABEL_40:
    v11 = v43;
    v1 = v45;
LABEL_41:
    v23 = v47;
    goto LABEL_42;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v24 + 2) + 24), 0x4C506343u);
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 3) = v27;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    RtlInitUnicodeString(&DestinationString, &v28[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
    v13 = v44;
    if ( (int)PfSnGetSectionObject(
                v43,
                PrefetchVolumeInfoInList,
                (unsigned int)&DestinationString,
                (_DWORD)v24,
                v44,
                v42,
                v27,
                (__int64)EventHandle,
                (__int64)&v49,
                (__int64)&v41) >= 0 )
    {
      v30 = v46;
      v31 = v49;
      v32 = 1;
      if ( (_BYTE)v46 )
      {
        v12 = 1;
        PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = 0LL;
        v32 = *(_QWORD *)(*(_QWORD *)(v31 + 40) + 16LL) != 0LL;
      }
      v33 = *(int *)v24;
      v34 = 0;
      v9 = (int)v33 + *((_DWORD *)v24 + 1);
      if ( v33 < v9 )
      {
        v35 = &v53[8 * v33 + 4];
        for ( v9 -= v33; v9; --v9 )
        {
          v36 = *(_DWORD *)v35;
          if ( (*(_DWORD *)v35 & 1) == 0 )
          {
            if ( (v36 & 8) != 0 && !v32 )
            {
LABEL_27:
              if ( *((_DWORD *)v35 - 1) || !v30 )
              {
                PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = (unsigned __int64)*((unsigned int *)v35 - 1) << 9;
                ++v12;
              }
              else
              {
                v34 = 1;
              }
              goto LABEL_29;
            }
            if ( _bittest(&v13, (v36 >> 4) & 7) )
            {
              if ( v27 )
              {
                if ( (v36 & 2) != 0 )
                  goto LABEL_27;
              }
              else if ( (v36 & 4) != 0 )
              {
                goto LABEL_27;
              }
            }
          }
LABEL_29:
          v35 += 8;
        }
      }
      if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v30 || !v32 || v34 )
      {
        v1 = v45;
        PoolWithTag[2] |= v19;
        *PoolWithTag = v31;
        v37 = (unsigned int)_InterlockedExchangeAdd(v1 + 6, 1u);
        *(_QWORD *)(v54 + 8 * v37) = PoolWithTag;
        PoolWithTag = 0LL;
        _InterlockedExchangeAdd(v1 + 9, v12);
        if ( v41 )
        {
          v41 = 0;
          *(_DWORD *)(v51 + 4 * v37) = v42;
        }
        else
        {
          *(_DWORD *)(v51 + 4 * v37) = -1;
        }
        goto LABEL_33;
      }
    }
    goto LABEL_40;
  }
  LODWORD(v2) = v42;
  v8 = -1073741670;
  v1 = v45;
  v3 = v43;
LABEL_62:
  *((_DWORD *)v1 + 10) = v8;
LABEL_56:
  if ( v41 )
    PfSnCleanupPrefetchSectionInfo((PVOID *)(*(_QWORD *)(v3 + 168) + 56LL * (unsigned int)v2), v3, 1);
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  v20 = KeGetCurrentThread();
  v21 = v20->KernelApcDisable + 1;
  v20->KernelApcDisable = v21;
  if ( !v21
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
    && !v20->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((struct _KTHREAD *)v59, 0);
  _m_prefetchw((const void *)v1);
  v22 = *(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)v1, v22 - 2, v22) )
    ExfReleaseRundownProtection((PEX_RUNDOWN_REF)v1);
}
