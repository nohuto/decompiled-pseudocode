/*
 * XREFs of NtQueryObject @ 0x14041F7E0
 * Callers:
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14009BAAC (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ObQueryTypeInfo @ 0x1404B148C (ObQueryTypeInfo.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  unsigned int v9; // r8d
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v11; // rax
  ULONG64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // r15
  _DWORD *v15; // rcx
  NTSTATUS result; // eax
  NTSTATUS v17; // r14d
  __int64 *v18; // rdi
  void *v19; // rcx
  ULONG HandleAttributes; // r12d
  __int32 v21; // esi
  NTSTATUS NameStringMode; // eax
  __int64 v23; // rsi
  char v24; // al
  int v25; // r12d
  _QWORD *v26; // rax
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // rdi
  int v30; // r13d
  __int32 v31; // esi
  __int64 v32; // rax
  void *v33; // rcx
  int v34; // r13d
  char *v35; // rcx
  struct _KTHREAD *v36; // rax
  __int64 v37; // rcx
  volatile signed __int64 *v38; // r8
  char *v39; // rax
  char *v40; // rcx
  void *v41; // rdx
  void *v42; // rcx
  ULONG_PTR v43; // rcx
  ULONG_PTR v44; // rdi
  unsigned int i; // ecx
  __int64 v46; // rcx
  NTSTATUS v47; // eax
  char v48; // [rsp+50h] [rbp-108h]
  NTSTATUS v49; // [rsp+54h] [rbp-104h]
  unsigned int v50; // [rsp+58h] [rbp-100h] BYREF
  int v51; // [rsp+60h] [rbp-F8h]
  __int64 *v52; // [rsp+68h] [rbp-F0h]
  unsigned int v53; // [rsp+70h] [rbp-E8h]
  PVOID v54; // [rsp+78h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-D8h]
  __int64 v56; // [rsp+88h] [rbp-D0h]
  PVOID v57; // [rsp+90h] [rbp-C8h]
  __int64 v58; // [rsp+98h] [rbp-C0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-B8h] BYREF
  volatile signed __int64 *v60; // [rsp+A8h] [rbp-B0h]
  _OWORD v61[6]; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Object[5]; // [rsp+118h] [rbp-40h] BYREF

  v9 = 0;
  BugCheckParameter2 = 0LL;
  v50 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v48 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
    {
      if ( ObjectInformationLength )
      {
        v11 = (unsigned __int64)ObjectInformation;
        v12 = (ULONG64)ObjectInformation + ObjectInformationLength - 1;
        if ( (unsigned __int64)ObjectInformation > v12 || v12 >= MmUserProbeAddress )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
            ExRaiseAccessViolation();
        }
        else
        {
          v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v11 = *(_BYTE *)v11;
            v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v11 != v13 );
        }
      }
    }
    else
    {
      ProbeForWrite(ObjectInformation, ObjectInformationLength, 4u);
      v9 = 0;
    }
    v14 = ReturnLength;
    if ( ReturnLength )
    {
      v15 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = *v15;
    }
    PreviousMode = v48;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    LODWORD(v54) = 0;
    v18 = 0LL;
    v52 = 0LL;
    v56 = 0LL;
    v19 = 0LL;
    v17 = 0;
    v49 = 0;
    HandleAttributes = 0;
    HandleInformation = 0LL;
  }
  else
  {
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v17 = result;
    v18 = (__int64 *)Object[0];
    v52 = (__int64 *)Object[0];
    v49 = result;
    if ( result < 0 )
      return result;
    LODWORD(v54) = HandleInformation.GrantedAccess;
    v56 = (__int64)Object[0] - 48;
    v19 = (void *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    HandleAttributes = HandleInformation.HandleAttributes;
    v9 = 0;
  }
  v58 = (__int64)v19;
  v57 = v19;
  if ( ObjectInformationClass == ObjectHandleFlagInformation )
  {
    v50 = 2;
    Object[2] = ObjectInformation;
    if ( ObjectInformationLength < 2 )
    {
      v17 = -1073741820;
    }
    else
    {
      *(_BYTE *)ObjectInformation = 0;
      if ( (HandleAttributes & 2) != 0 )
        *(_BYTE *)ObjectInformation = 1;
      *((_BYTE *)ObjectInformation + 1) = 0;
      if ( (HandleAttributes & 1) != 0 )
        *((_BYTE *)ObjectInformation + 1) = 1;
    }
  }
  else
  {
    if ( ObjectInformationClass == ObjectBasicInformation )
    {
      if ( ObjectInformationLength != 56 )
      {
        ObfDereferenceObject(v18);
        return -1073741820;
      }
      memset(&v61[1], 0, 0x38uLL);
      LODWORD(v61[1]) = HandleAttributes;
      v23 = v56;
      v24 = *(_BYTE *)(v56 + 27);
      if ( (v24 & 0x10) != 0 )
      {
        HandleAttributes |= 0x10u;
        LODWORD(v61[1]) = HandleAttributes;
      }
      if ( (v24 & 8) != 0 )
        LODWORD(v61[1]) = HandleAttributes | 0x20;
      v25 = (int)v54;
      DWORD1(v61[1]) = (_DWORD)v54;
      DWORD2(v61[1]) = *(_DWORD *)(v56 + 8);
      HIDWORD(v61[1]) = *(_DWORD *)v56;
      v26 = (_QWORD *)OBJECT_HEADER_TO_QUOTA_INFO(v56);
      if ( v26 )
        *(_QWORD *)&v61[2] = *v26;
      else
        *(_QWORD *)&v61[2] = 0LL;
      if ( v57 == ObpSymbolicLinkObjectType )
        v27 = *v18;
      else
        v27 = 0LL;
      *(_QWORD *)&v61[4] = v27;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v29 = KeAbPreAcquire(v23 + 16, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v23 + 16), v29, v23 + 16);
      if ( v29 )
        *(_BYTE *)(v29 + 26) |= 1u;
      if ( (*(_BYTE *)(v23 + 26) & 2) != 0
        && (v32 = ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 3], v56 = v23 - v32, v23 != v32)
        && (v33 = *(void **)(v23 - v32), (v54 = v33) != 0LL) )
      {
        ObfReferenceObject(v33);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v23 + 16));
        KeAbPostRelease(v23 + 16);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v34 = *(unsigned __int16 *)(v56 + 8) + 2;
        while ( 1 )
        {
          v57 = v54;
          if ( !v54 )
            break;
          v35 = (char *)v54 - 48;
          v60 = (volatile signed __int64 *)((char *)v54 - 48);
          v36 = KeGetCurrentThread();
          --v36->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)(v35 + 16);
          v37 = KeAbPreAcquire((ULONG_PTR)(v35 + 16), 0LL, 0LL);
          v56 = v37;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v37, BugCheckParameter2);
            v37 = v56;
          }
          if ( v37 )
            *(_BYTE *)(v37 + 26) |= 1u;
          v38 = v60;
          if ( (*((_BYTE *)v60 + 26) & 2) == 0
            || (v39 = (char *)ObpInfoMaskToOffset[*((_BYTE *)v60 + 26) & 3],
                v40 = (char *)((char *)v60 - v39),
                v60 == (volatile signed __int64 *)v39)
            || (v41 = *(void **)v40) == 0LL )
          {
            v44 = (ULONG_PTR)(v60 + 2);
            if ( _InterlockedCompareExchange64(v60 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v38 + 2);
            KeAbPostRelease(v44);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            if ( v54 )
              ObfDereferenceObject(v54);
            break;
          }
          v34 += *((unsigned __int16 *)v40 + 4) + 2;
          v42 = *(void **)v40;
          v54 = v41;
          ObfReferenceObject(v42);
          v43 = BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v43 = BugCheckParameter2;
          }
          KeAbPostRelease(v43);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(v57);
        }
        v30 = v34 + 18;
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v23 + 16));
        KeAbPostRelease(v23 + 16);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v30 = 0;
      }
      DWORD1(v61[3]) = v30;
      DWORD2(v61[3]) = *(unsigned __int16 *)(v58 + 16) + 106;
      if ( (v25 & 0x20000) != 0 && *(_QWORD *)(v23 + 40) )
      {
        LODWORD(v61[0]) = 15;
        v51 = 0;
        v18 = v52;
        (*(void (__fastcall **)(__int64 *, __int64, _OWORD *))(v58 + 152))(v52, 1LL, v61);
      }
      else
      {
        v51 = 0;
        v18 = v52;
      }
      HIDWORD(v61[3]) = 0;
      *(_OWORD *)ObjectInformation = v61[1];
      *((_OWORD *)ObjectInformation + 1) = v61[2];
      *((_OWORD *)ObjectInformation + 2) = v61[3];
      *((_QWORD *)ObjectInformation + 6) = *(_QWORD *)&v61[4];
      v50 = 56;
      v17 = v49;
      goto LABEL_26;
    }
    v21 = ObjectInformationClass - 1;
    if ( v21 )
    {
      v31 = v21 - 1;
      if ( v31 )
      {
        if ( v31 != 1 )
        {
          ObfDereferenceObject(v18);
          return -1073741821;
        }
        v50 = 8;
        Object[3] = ObjectInformation;
        if ( ObjectInformationLength >= 4 )
        {
          *(_DWORD *)ObjectInformation = 0;
          for ( i = 0; ; ++i )
          {
            v53 = i;
            if ( i >= 0x30 )
              break;
            v58 = ObpObjectTypes[i];
            if ( !v58 )
              break;
            ++*(_DWORD *)ObjectInformation;
          }
          while ( 1 )
          {
            v53 = v9;
            if ( v9 >= 0x30 )
              break;
            Object[1] = (char *)ObjectInformation + v50;
            v46 = ObpObjectTypes[v9];
            v58 = v46;
            if ( !v46 )
              break;
            v47 = ObQueryTypeInfo(v46, (char *)ObjectInformation + v50, ObjectInformationLength, &v50);
            v17 = v47;
            if ( ((v47 + 0x80000000) & 0x80000000) == 0 && v47 != -1073741820 )
              break;
            v9 = BugCheckParameter2 + 1;
            BugCheckParameter2 = (unsigned int)(BugCheckParameter2 + 1);
          }
        }
        else
        {
          v17 = -1073741820;
        }
        goto LABEL_26;
      }
      NameStringMode = ObQueryTypeInfo(v19, ObjectInformation, ObjectInformationLength, &v50);
    }
    else
    {
      NameStringMode = ObQueryNameStringMode(
                         (_DWORD)v18,
                         (_DWORD)ObjectInformation,
                         ObjectInformationLength,
                         (unsigned int)&v50,
                         v48);
    }
    v17 = NameStringMode;
  }
LABEL_26:
  if ( v14 )
    *v14 = v50;
  if ( v18 )
    ObfDereferenceObject(v18);
  return v17;
}
