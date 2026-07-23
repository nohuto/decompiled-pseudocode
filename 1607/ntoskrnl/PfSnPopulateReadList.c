/*
 * XREFs of PfSnPopulateReadList @ 0x1404ED700
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtCreateEvent @ 0x14041DCA0 (NtCreateEvent.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1404ED574 (PfSnCleanupPrefetchSectionInfo.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404EDBEC (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x1404EDC30 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1404EDFEC (PfSnFindPrefetchVolumeInfoInList.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r12
  _KPROCESS *v5; // rcx
  _QWORD *PoolWithTag; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int *v12; // rax
  unsigned int v13; // r13d
  int v14; // esi
  char *v15; // rcx
  char *v16; // r10
  __int64 v17; // rax
  int v18; // ebx
  unsigned int v19; // ebx
  __int64 v20; // rax
  char *v21; // rdi
  int v22; // r12d
  int v23; // r12d
  wchar_t *v24; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  char v26; // r10
  __int64 v27; // r11
  __int64 v28; // rcx
  int v29; // r14d
  unsigned int *v30; // rax
  __int64 v31; // rcx
  unsigned int v33; // ecx
  unsigned __int8 v34; // cf
  char v35; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+5Ch] [rbp-ACh]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  int v38; // [rsp+68h] [rbp-A0h]
  int v39; // [rsp+6Ch] [rbp-9Ch]
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h]
  HANDLE EventHandle; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-78h]
  unsigned int v45; // [rsp+98h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-68h]
  __int64 v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  char *v49; // [rsp+B8h] [rbp-50h]
  char *v50; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v53[48]; // [rsp+108h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  LODWORD(v2) = 0;
  v3 = *(_QWORD *)(v1 + 8);
  v4 = a1;
  v48 = a1;
  v5 = *(_KPROCESS **)(v1 + 16);
  PoolWithTag = 0LL;
  v37 = v3;
  v40 = v1;
  v35 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v5, 0, (__int64)v53);
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
    goto LABEL_58;
  v12 = *(unsigned int **)v3;
  v11 = v3;
  v43 = 0LL;
  v13 = 0;
  v14 = *(_DWORD *)(v4 + 40);
  v39 = v14;
  v15 = (char *)v12 + v12[21];
  v9 = (__int64)v12 + v12[23];
  v16 = (char *)v12 + v12[25];
  v49 = v15;
  v47 = *(_QWORD *)(v3 + 64);
  v17 = *(_QWORD *)(v3 + 72);
  v18 = *(_DWORD *)(v3 + 100) & 7;
  v44 = v17;
  v19 = *(_DWORD *)(v11 + 96) & 7 | (8 * (v18 | 8));
  v46 = v9;
  v50 = v16;
  v2 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
  v36 = v2;
  if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 32) )
    goto LABEL_3;
  while ( 1 )
  {
    v20 = (unsigned int)v2;
    v21 = &v15[32 * v2];
    v41 = v20;
    v9 = *((unsigned int *)v21 + 5);
    if ( (v9 & 1) != 0 )
      goto LABEL_38;
    v22 = *(_DWORD *)(v4 + 44);
    LOBYTE(v10) = 0;
    v38 = v10;
    v23 = v22 & 1;
    if ( !v23 )
      break;
    v9 = v14 & ((unsigned int)v9 >> 8);
    if ( (v9 & 0x7F) != 0 )
      goto LABEL_9;
LABEL_38:
    if ( v35 )
    {
      PfSnCleanupPrefetchSectionInfo((PVOID *)(*(_QWORD *)(v11 + 56) + 56 * v20), v11, 1);
      v35 = 0;
    }
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
LABEL_29:
    v13 = 0;
    v2 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    v36 = v2;
    if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 32) )
    {
      v3 = v37;
      goto LABEL_52;
    }
    v11 = v37;
    v4 = v48;
    v15 = v49;
    v16 = v50;
  }
  v10 = 0LL;
  if ( !_BitScanForward(&v33, ((unsigned int)v9 >> 8) & 0x7F) )
    v33 = 7;
  v34 = _bittest(&v14, v33);
  v45 = v33;
  if ( v34 )
    v10 = 1LL;
  v9 = v14 & ((unsigned int)v9 >> 1);
  v38 = v10;
  if ( (v9 & 0x7F) == 0 && !(_BYTE)v10 )
    goto LABEL_37;
LABEL_9:
  v24 = (wchar_t *)&v16[*((unsigned int *)v21 + 3)];
  PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v24);
  if ( !PrefetchVolumeInfoInList )
  {
    v14 = v39;
LABEL_36:
    v11 = v37;
    v1 = v40;
LABEL_37:
    v20 = v41;
    goto LABEL_38;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v21 + 2) + 24), 0x4C506343u);
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 3) = v23;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    RtlInitUnicodeString(&DestinationString, &v24[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
    v14 = v39;
    if ( (int)PfSnGetSectionObject(
                v37,
                PrefetchVolumeInfoInList,
                (unsigned int)&DestinationString,
                (_DWORD)v21,
                v39,
                v36,
                v23,
                (__int64)EventHandle,
                (__int64)&v43,
                (__int64)&v35) >= 0 )
    {
      v26 = v38;
      v27 = v43;
      v11 = 1LL;
      if ( (_BYTE)v38 )
      {
        v13 = 1;
        PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = 0LL;
        v11 = *(_QWORD *)(*(_QWORD *)(v27 + 40) + 16LL) != 0LL;
      }
      v28 = *(int *)v21;
      v29 = 0;
      v10 = (int)v28 + *((_DWORD *)v21 + 1);
      if ( v28 < v10 )
      {
        v30 = (unsigned int *)(v46 + 8 * v28 + 4);
        for ( v10 -= v28; v10; --v10 )
        {
          v9 = *v30;
          if ( (v9 & 1) == 0 )
          {
            if ( (v9 & 8) != 0 && !(_DWORD)v11 )
            {
LABEL_23:
              if ( *(v30 - 1) || !v26 )
              {
                v9 = (unsigned __int64)*(v30 - 1) << 9;
                PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = v9;
                ++v13;
              }
              else
              {
                v29 = 1;
              }
              goto LABEL_25;
            }
            if ( _bittest(&v14, ((unsigned int)v9 >> 4) & 7) )
            {
              if ( v23 )
              {
                if ( (v9 & 2) != 0 )
                  goto LABEL_23;
              }
              else if ( (v9 & 4) != 0 )
              {
                goto LABEL_23;
              }
            }
          }
LABEL_25:
          v30 += 2;
        }
      }
      if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v26 || !(_DWORD)v11 || v29 )
      {
        v1 = v40;
        PoolWithTag[2] |= v19;
        *PoolWithTag = v27;
        v31 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
        *(_QWORD *)(v47 + 8 * v31) = PoolWithTag;
        PoolWithTag = 0LL;
        _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 36), v13);
        if ( v35 )
        {
          v9 = v44;
          v35 = 0;
          *(_DWORD *)(v44 + 4 * v31) = v36;
        }
        else
        {
          *(_DWORD *)(v44 + 4 * v31) = -1;
        }
        goto LABEL_29;
      }
    }
    goto LABEL_36;
  }
  LODWORD(v2) = v36;
  v8 = -1073741670;
  v1 = v40;
  v3 = v37;
LABEL_58:
  *(_DWORD *)(v1 + 40) = v8;
LABEL_52:
  if ( v35 )
    PfSnCleanupPrefetchSectionInfo((PVOID *)(*(_QWORD *)(v3 + 56) + 56LL * (unsigned int)v2), v3, 1);
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((struct _KTHREAD *)v53, 0);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v1);
}
