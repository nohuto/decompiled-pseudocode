/*
 * XREFs of PiUEventHandleRegistration @ 0x14041610C
 * Callers:
 *     PiUEventHandleIoctl @ 0x140416618 (PiUEventHandleIoctl.c)
 * Callees:
 *     PiUEventHashStringIntoBucket @ 0x140008200 (PiUEventHashStringIntoBucket.c)
 *     RtlStringCchLengthW @ 0x140008670 (RtlStringCchLengthW.c)
 *     PiUEventHashGuidIntoBucket @ 0x14000873C (PiUEventHashGuidIntoBucket.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1404128C8 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PiUEventInitClientRegistrationContext @ 0x140416D38 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140417154 (PiUEventFreeClientRegistrationContext.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  char **inited; // rdi
  NTSTATUS v8; // ebx
  __int64 v9; // r9
  int v10; // ecx
  int v11; // eax
  size_t v12; // r11
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int8 CurrentIrql; // r15
  int v18; // ecx
  unsigned int v19; // eax
  char *v20; // rcx
  char **v21; // rax
  unsigned __int8 v22; // si
  signed __int32 v23; // eax
  int v25; // ecx
  int v26; // ecx
  char *v27; // rax
  char **v28; // rcx
  int v29; // ecx
  unsigned int v30; // eax
  char *v31; // rcx
  char **v32; // rax
  unsigned int v33; // eax
  char *v34; // rdx
  char **v35; // rax
  int Object; // eax
  __int64 v37; // [rsp+20h] [rbp-38h] BYREF
  char *v38; // [rsp+28h] [rbp-30h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v37 = 0LL;
  inited = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    v8 = -1073741811;
    goto LABEL_30;
  }
  inited = (char **)PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v8 = -1073741670;
LABEL_68:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)v8;
  }
  inited[6] = (char *)PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 7));
  v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( v8 < 0 )
    goto LABEL_65;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_65;
  v10 = *(_DWORD *)(a2 + 528);
  if ( v10 >= 4 )
    goto LABEL_65;
  v11 = *(_DWORD *)(a2 + 524);
  if ( (v11 & 0xFFFFFFFC) != 0 || (v11 & 1) != 0 && v10 )
    goto LABEL_65;
  if ( (v11 & 2) != 0 && (unsigned int)(v10 - 2) > 1 )
    goto LABEL_65;
  if ( v10 == 1 && ((*(_QWORD *)(a2 + 536) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_65;
  v12 = 200LL;
  if ( v10 == 2 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_65;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    v8 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v12, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_65;
  }
  *((_DWORD *)inited + 33) = *(_DWORD *)(a2 + 528);
  v13 = *(_DWORD *)(a2 + 528);
  if ( v13 )
  {
    v25 = v13 - 1;
    if ( v25 )
    {
      if ( (unsigned int)(v25 - 1) <= 1 )
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
        {
          Object = PiDmGetObject(1LL, a2 + 536, inited + 3);
          v8 = Object;
          if ( Object < 0 )
          {
LABEL_66:
            if ( inited )
              PiUEventFreeClientRegistrationContext(inited);
            goto LABEL_68;
          }
        }
        goto LABEL_17;
      }
    }
    else if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*(void **)(a2 + 536), &v37, &v38) >= 0 )
    {
      v8 = PiDmGetObject(1LL, *(_QWORD *)(v37 + 8), inited + 3);
      if ( v8 < 0 )
        goto LABEL_66;
      inited[4] = v38;
      *((_BYTE *)inited + 40) = 0;
      goto LABEL_17;
    }
LABEL_65:
    v8 = -1073741811;
    goto LABEL_66;
  }
  if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
    *(_OWORD *)(inited + 3) = *(_OWORD *)(a2 + 536);
LABEL_17:
  v14 = a5;
  *(_QWORD *)a2 = inited[11];
  *(_QWORD *)(v14 + 8) = 8LL;
  v15 = KeAbPreAcquire((ULONG_PTR)&PiUEventClientRegistrationListLock, 0LL, 0LL, v9);
  v16 = v15;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventClientRegistrationListLock, v15);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  qword_14034AB68 = (__int64)KeGetCurrentThread();
  dword_14034AB90 = CurrentIrql;
  v18 = *(_DWORD *)(a2 + 528);
  if ( v18 )
  {
    v26 = v18 - 1;
    if ( v26 )
    {
      v29 = v26 - 1;
      if ( v29 )
      {
        if ( v29 == 1 )
        {
          if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
            v33 = 13;
          else
            v33 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
          v34 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v33;
          v35 = (char **)*((_QWORD *)v34 + 1);
          *inited = v34;
          inited[1] = (char *)v35;
          if ( *v35 != v34 )
            __fastfail(3u);
          *v35 = (char *)inited;
          ++PiUEventDevInstancePropertyClientCount;
          *((_QWORD *)v34 + 1) = inited;
        }
        else
        {
          v8 = -1073741811;
        }
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v30 = 13;
        else
          v30 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v31 = (char *)&PiUEventDevInstanceClientList + 16 * v30;
        v32 = (char **)*((_QWORD *)v31 + 1);
        *inited = v31;
        inited[1] = (char *)v32;
        if ( *v32 != v31 )
          __fastfail(3u);
        *v32 = (char *)inited;
        *((_QWORD *)v31 + 1) = inited;
        ++PiUEventDevInstanceClientCount;
      }
    }
    else
    {
      v27 = (char *)&PiUEventDevHandleClientList
          + 16 * (unsigned int)PiUEventHashStringIntoBucket(*((PCWSTR *)inited[3] + 2));
      v28 = (char **)*((_QWORD *)v27 + 1);
      *inited = v27;
      inited[1] = (char *)v28;
      if ( *v28 != v27 )
        __fastfail(3u);
      *v28 = (char *)inited;
      ++PiUEventDevHandleClientCount;
      *((_QWORD *)v27 + 1) = inited;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
      v19 = 13;
    else
      v19 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
    v20 = (char *)&PiUEventDevInterfaceClientList + 16 * v19;
    v21 = (char **)*((_QWORD *)v20 + 1);
    *inited = v20;
    inited[1] = (char *)v21;
    if ( *v21 != v20 )
      __fastfail(3u);
    ++PiUEventDevInterfaceClientCount;
    *v21 = (char *)inited;
    *((_QWORD *)v20 + 1) = inited;
  }
  qword_14034AB68 = 0LL;
  v22 = dword_14034AB90;
  v23 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 1, 0);
  if ( v23 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventClientRegistrationListLock, v23);
  __writecr8(v22);
  KeAbPostRelease((ULONG_PTR)&PiUEventClientRegistrationListLock);
  if ( v8 < 0 )
    goto LABEL_66;
  *(_QWORD *)(a1 + 32) = inited;
LABEL_30:
  if ( v8 < 0 )
    goto LABEL_66;
  return (unsigned int)v8;
}
