/*
 * XREFs of PfSnPopulateReadList @ 0x1404DA590
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     NtCreateEvent @ 0x14042E720 (NtCreateEvent.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404DAA78 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x1404DAABC (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1404DAE78 (PfSnFindPrefetchVolumeInfoInList.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1404DB164 (PfSnCleanupPrefetchSectionInfo.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v3; // r12
  _KPROCESS *v4; // rcx
  _QWORD *PoolWithTag; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // eax
  __int64 v8; // r8
  unsigned int *v9; // rax
  unsigned int v10; // r13d
  int v11; // ebx
  char *v12; // rdx
  char *v13; // r9
  __int64 v14; // rcx
  int v15; // esi
  unsigned int v16; // ebx
  __int64 v17; // rax
  char *v18; // rdi
  unsigned int v19; // edx
  int v20; // r12d
  int v21; // r12d
  wchar_t *v22; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  char v24; // r9
  __int64 v25; // r11
  BOOL v26; // r10d
  __int64 v27; // rcx
  int v28; // r14d
  char *v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned int v33; // ecx
  unsigned __int8 v34; // cf
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h]
  int v37; // [rsp+68h] [rbp-A0h]
  int v38; // [rsp+6Ch] [rbp-9Ch]
  __int64 v39; // [rsp+70h] [rbp-98h]
  __int64 v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+80h] [rbp-88h]
  HANDLE EventHandle; // [rsp+88h] [rbp-80h] BYREF
  __int64 v43; // [rsp+90h] [rbp-78h] BYREF
  __int64 v44; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+A8h] [rbp-60h]
  char *v47; // [rsp+B0h] [rbp-58h]
  char *v48; // [rsp+B8h] [rbp-50h]
  char *v49; // [rsp+C0h] [rbp-48h]
  unsigned int v50; // [rsp+C8h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-28h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v53; // [rsp+110h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  LODWORD(v2) = 0;
  v3 = *(_QWORD *)(v1 + 8);
  v44 = a1;
  v4 = *(_KPROCESS **)(v1 + 16);
  PoolWithTag = 0LL;
  v36 = v3;
  v39 = v1;
  LOBYTE(v35) = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v4, 0LL, (__int64)&v53);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v7 >= 0 )
  {
    v9 = *(unsigned int **)v3;
    v10 = 0;
    v43 = 0LL;
    v11 = *(_DWORD *)(v3 + 100) & 7 | 8;
    v12 = (char *)v9 + v9[21];
    v13 = (char *)v9 + v9[25];
    v48 = (char *)v9 + v9[23];
    v14 = v44;
    v46 = *(_QWORD *)(v3 + 64);
    v45 = *(_QWORD *)(v3 + 72);
    v15 = *(_DWORD *)(v44 + 40);
    v16 = *(_DWORD *)(v3 + 96) & 7 | (8 * v11);
    v49 = v12;
    v47 = v13;
    v38 = v15;
    v2 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    v37 = v2;
    if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 32) )
      goto LABEL_3;
    while ( 1 )
    {
      v17 = (unsigned int)v2;
      v18 = &v12[32 * v2];
      v41 = v17;
      v19 = *((_DWORD *)v18 + 5);
      if ( (v19 & 1) == 0 )
        break;
LABEL_39:
      if ( (_BYTE)v35 )
      {
        PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v3 + 56) + 56 * v17));
        LOBYTE(v35) = 0;
      }
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
LABEL_29:
      v10 = 0;
      LODWORD(v2) = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
      v3 = v36;
      v2 = (unsigned int)v2;
      v37 = v2;
      if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 32) )
        goto LABEL_52;
      v14 = v44;
      v12 = v49;
      v13 = v47;
    }
    v20 = *(_DWORD *)(v14 + 44);
    LOBYTE(v8) = 0;
    LODWORD(v40) = v8;
    v21 = v20 & 1;
    if ( v21 )
    {
      if ( ((unsigned __int8)v15 & BYTE1(v19) & 0x7F) == 0 )
      {
LABEL_38:
        v3 = v36;
        goto LABEL_39;
      }
    }
    else
    {
      LODWORD(v8) = 0;
      if ( !_BitScanForward(&v33, (v19 >> 8) & 0x7F) )
        v33 = 7;
      v34 = _bittest(&v15, v33);
      v50 = v33;
      if ( v34 )
        LODWORD(v8) = 1;
      LODWORD(v40) = v8;
      if ( ((unsigned __int8)v15 & (unsigned __int8)(v19 >> 1) & 0x7F) == 0 && !(_BYTE)v8 )
      {
LABEL_37:
        v17 = v41;
        goto LABEL_38;
      }
    }
    v22 = (wchar_t *)&v13[*((unsigned int *)v18 + 3)];
    PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v22);
    if ( PrefetchVolumeInfoInList )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v18 + 2) + 24), 0x4C506343u);
      if ( !PoolWithTag )
      {
        LODWORD(v2) = v37;
        v7 = -1073741670;
        v1 = v39;
        v3 = v36;
        goto LABEL_58;
      }
      *((_DWORD *)PoolWithTag + 3) = v21;
      *PoolWithTag = 0LL;
      *((_DWORD *)PoolWithTag + 2) = 0;
      RtlInitUnicodeString(&DestinationString, &v22[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
      v15 = v38;
      if ( (int)PfSnGetSectionObject(
                  v36,
                  PrefetchVolumeInfoInList,
                  (unsigned int)&DestinationString,
                  (_DWORD)v18,
                  v38,
                  v37,
                  v21,
                  (__int64)EventHandle,
                  (__int64)&v43,
                  (__int64)&v35) >= 0 )
      {
        v24 = v40;
        v25 = v43;
        v26 = 1;
        if ( (_BYTE)v40 )
        {
          v10 = 1;
          PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = 0LL;
          v26 = *(_QWORD *)(*(_QWORD *)(v25 + 40) + 16LL) != 0LL;
        }
        v27 = *(int *)v18;
        v28 = 0;
        v8 = (int)v27 + *((_DWORD *)v18 + 1);
        if ( v27 < v8 )
        {
          v29 = &v48[8 * v27 + 4];
          for ( v8 -= v27; v8; --v8 )
          {
            v30 = *(_DWORD *)v29;
            if ( (*(_DWORD *)v29 & 1) == 0 )
            {
              if ( (v30 & 8) != 0 && !v26 )
              {
LABEL_23:
                if ( *((_DWORD *)v29 - 1) || !v24 )
                {
                  PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = (unsigned __int64)*((unsigned int *)v29 - 1) << 9;
                  ++v10;
                }
                else
                {
                  v28 = 1;
                }
                goto LABEL_25;
              }
              if ( _bittest(&v15, (v30 >> 4) & 7) )
              {
                if ( v21 )
                {
                  if ( (v30 & 2) != 0 )
                    goto LABEL_23;
                }
                else if ( (v30 & 4) != 0 )
                {
                  goto LABEL_23;
                }
              }
            }
LABEL_25:
            v29 += 8;
          }
        }
        if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v24 || !v26 || v28 )
        {
          v1 = v39;
          PoolWithTag[2] |= v16;
          *PoolWithTag = v25;
          v31 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
          *(_QWORD *)(v46 + 8 * v31) = PoolWithTag;
          PoolWithTag = 0LL;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 36), v10);
          if ( (_BYTE)v35 )
          {
            LOBYTE(v35) = 0;
            *(_DWORD *)(v45 + 4 * v31) = v37;
          }
          else
          {
            *(_DWORD *)(v45 + 4 * v31) = -1;
          }
          goto LABEL_29;
        }
      }
    }
    else
    {
      v15 = v38;
    }
    v1 = v39;
    goto LABEL_37;
  }
LABEL_58:
  *(_DWORD *)(v1 + 40) = v7;
LABEL_52:
  if ( (_BYTE)v35 )
    PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v3 + 56) + 56LL * (unsigned int)v2));
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess(&v53, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
