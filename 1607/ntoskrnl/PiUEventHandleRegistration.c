/*
 * XREFs of PiUEventHandleRegistration @ 0x14048D21C
 * Callers:
 *     PiUEventHandleIoctl @ 0x14048C4D4 (PiUEventHandleIoctl.c)
 * Callees:
 *     PiUEventHashStringIntoBucket @ 0x140007EEC (PiUEventHashStringIntoBucket.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x1400851E4 (PiUEventHashGuidIntoBucket.c)
 *     PsGetCurrentThreadProcessId @ 0x1400857E0 (PsGetCurrentThreadProcessId.c)
 *     RtlStringCchLengthW @ 0x1400C4760 (RtlStringCchLengthW.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14048A41C (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048CE88 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1404EA8E4 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PiDmGetObject @ 0x1404FF000 (PiDmGetObject.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD *inited; // rdi
  char v6; // bp
  __int64 v7; // rsi
  NTSTATUS Object; // ebx
  int v10; // ecx
  int v11; // eax
  size_t v12; // r11
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rcx
  char **v18; // rax
  int v20; // ecx
  int v21; // ecx
  char *v22; // rax
  char **v23; // rcx
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  char *v27; // rdx
  char **v28; // rax
  int v29; // eax
  _QWORD v30[7]; // [rsp+20h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v30[0] = 0LL;
  inited = 0LL;
  v6 = 0;
  v7 = a2;
  if ( !a2 || (_DWORD)a3 != 936 || a4 != 8 )
  {
    Object = -1073741811;
    goto LABEL_26;
  }
  inited = PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    Object = -1073741670;
LABEL_68:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)Object;
  }
  inited[6] = PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 7));
  Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)v7, 0x104uLL, &pcchLength);
  if ( Object < 0 )
    goto LABEL_36;
  if ( *(_DWORD *)(v7 + 520) != 416 )
    goto LABEL_36;
  v10 = *(_DWORD *)(v7 + 528);
  if ( v10 >= 4 )
    goto LABEL_36;
  v11 = *(_DWORD *)(v7 + 524);
  if ( (v11 & 0xFFFFFFFC) != 0 || (v11 & 1) != 0 && v10 )
    goto LABEL_36;
  if ( (v11 & 2) != 0 && (unsigned int)(v10 - 2) > 1 )
    goto LABEL_36;
  if ( v10 == 1 && ((*(_QWORD *)(v7 + 536) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_36;
  v12 = 200LL;
  if ( v10 == 2 )
  {
    Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)(v7 + 536), 0xC8uLL, &pcchLength);
    if ( Object < 0 )
      goto LABEL_36;
  }
  if ( *(_DWORD *)(v7 + 528) == 3 )
  {
    Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)(v7 + 536), v12, &pcchLength);
    if ( Object < 0 )
      goto LABEL_36;
  }
  *((_DWORD *)inited + 33) = *(_DWORD *)(v7 + 528);
  v13 = *(_DWORD *)(v7 + 528);
  if ( !v13 )
  {
    if ( (*(_DWORD *)(v7 + 524) & 1) == 0 )
      *(_OWORD *)(inited + 3) = *(_OWORD *)(v7 + 536);
    goto LABEL_17;
  }
  v20 = v13 - 1;
  if ( !v20 )
  {
    if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*(_QWORD *)(v7 + 536), v30, &pcchLength) >= 0 )
    {
      Object = PiDmGetObject(1LL, *(_QWORD *)(v30[0] + 8LL), inited + 3);
      if ( Object < 0 )
        goto LABEL_66;
      inited[4] = pcchLength;
      *((_BYTE *)inited + 40) = 0;
      goto LABEL_17;
    }
LABEL_36:
    Object = -1073741811;
    goto LABEL_66;
  }
  if ( (unsigned int)(v20 - 1) > 1 )
    goto LABEL_36;
  if ( (*(_DWORD *)(v7 + 524) & 2) == 0 )
  {
    v29 = PiDmGetObject(1LL, v7 + 536, inited + 3);
    Object = v29;
    if ( v29 < 0 )
    {
LABEL_66:
      if ( inited )
      {
        LOBYTE(a2) = v6;
        PiUEventFreeClientRegistrationContext((char *)inited, a2, a3);
      }
      goto LABEL_68;
    }
  }
LABEL_17:
  v14 = a5;
  *(_QWORD *)v7 = inited[11];
  *(_QWORD *)(v14 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v15 = *(_DWORD *)(v7 + 528);
  if ( !v15 )
  {
    if ( (*(_DWORD *)(v7 + 524) & 1) != 0 )
      v16 = 13;
    else
      v16 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(v7 + 536));
    v17 = (char *)&PiUEventDevInterfaceClientList + 16 * v16;
    v18 = (char **)*((_QWORD *)v17 + 1);
    if ( *v18 != v17 )
      __fastfail(3u);
    ++PiUEventDevInterfaceClientCount;
LABEL_22:
    *inited = v17;
    inited[1] = v18;
    *v18 = (char *)inited;
    *((_QWORD *)v17 + 1) = inited;
    goto LABEL_23;
  }
  v21 = v15 - 1;
  if ( !v21 )
  {
    v22 = (char *)&PiUEventDevHandleClientList
        + 16 * (unsigned int)PiUEventHashStringIntoBucket(*(PCWSTR *)(inited[3] + 16LL));
    v23 = (char **)*((_QWORD *)v22 + 1);
    if ( *v23 != v22 )
      __fastfail(3u);
    ++PiUEventDevHandleClientCount;
    *inited = v22;
    inited[1] = v23;
    *v23 = (char *)inited;
    *((_QWORD *)v22 + 1) = inited;
    goto LABEL_23;
  }
  v24 = v21 - 1;
  if ( !v24 )
  {
    if ( (*(_DWORD *)(v7 + 524) & 2) != 0 )
      v25 = 13;
    else
      v25 = PiUEventHashStringIntoBucket((PCWSTR)(v7 + 536));
    v17 = (char *)&PiUEventDevInstanceClientList + 16 * v25;
    v18 = (char **)*((_QWORD *)v17 + 1);
    if ( *v18 != v17 )
      __fastfail(3u);
    ++PiUEventDevInstanceClientCount;
    goto LABEL_22;
  }
  if ( v24 != 1 )
  {
    Object = -1073741811;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v7 + 524) & 2) != 0 )
    v26 = 13;
  else
    v26 = PiUEventHashStringIntoBucket((PCWSTR)(v7 + 536));
  v27 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v26;
  v28 = (char **)*((_QWORD *)v27 + 1);
  if ( *v28 != v27 )
    __fastfail(3u);
  ++PiUEventDevInstancePropertyClientCount;
  *inited = v27;
  inited[1] = v28;
  *v28 = (char *)inited;
  *((_QWORD *)v27 + 1) = inited;
LABEL_23:
  v6 = 1;
LABEL_24:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( Object < 0 )
    goto LABEL_66;
  *(_QWORD *)(a1 + 32) = inited;
LABEL_26:
  if ( Object < 0 )
    goto LABEL_66;
  return (unsigned int)Object;
}
