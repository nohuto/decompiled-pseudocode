/*
 * XREFs of NtQueryObject @ 0x14051CF90
 * Callers:
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14010D3FC (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeInfo @ 0x14051E45C (ObQueryTypeInfo.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  SIZE_T v5; // r13
  unsigned int v9; // r9d
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // r12
  __int64 v15; // rcx
  NTSTATUS result; // eax
  NTSTATUS v17; // r15d
  __int64 *v18; // rsi
  void *v19; // rcx
  ULONG HandleAttributes; // ebx
  __int32 v21; // r14d
  NTSTATUS v22; // eax
  __int64 v23; // r14
  char v24; // al
  int v25; // r13d
  _QWORD *v26; // rax
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // esi
  __int32 v34; // r14d
  __int64 v35; // rax
  void *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // esi
  char *v41; // rcx
  struct _KTHREAD *v42; // rax
  __int64 v43; // rcx
  volatile signed __int64 *v44; // rdx
  char *v45; // rax
  char *v46; // rcx
  void *v47; // r8
  ULONG_PTR v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  void *v52; // rcx
  ULONG_PTR v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int i; // ecx
  __int64 v58; // rcx
  NTSTATUS v59; // eax
  char v60; // [rsp+50h] [rbp-F8h]
  NTSTATUS v61; // [rsp+54h] [rbp-F4h]
  unsigned int v62; // [rsp+58h] [rbp-F0h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-E8h]
  int v64; // [rsp+64h] [rbp-E4h]
  PVOID v65; // [rsp+68h] [rbp-E0h]
  __int64 *v66; // [rsp+70h] [rbp-D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-D0h]
  __int64 v68; // [rsp+80h] [rbp-C8h]
  PVOID v69; // [rsp+88h] [rbp-C0h]
  __int64 v70; // [rsp+90h] [rbp-B8h]
  int v71; // [rsp+98h] [rbp-B0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-A8h] BYREF
  volatile signed __int64 *v73; // [rsp+A8h] [rbp-A0h]
  _BYTE v74[56]; // [rsp+B8h] [rbp-90h] BYREF
  PVOID Object[8]; // [rsp+F0h] [rbp-58h] BYREF

  v5 = ObjectInformationLength;
  v9 = 0;
  BugCheckParameter2 = 0LL;
  v62 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v60 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
    {
      if ( (_DWORD)v5 )
      {
        v11 = (unsigned __int64)ObjectInformation;
        v12 = (unsigned __int64)ObjectInformation + v5 - 1;
        if ( (unsigned __int64)ObjectInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
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
      ProbeForWrite(ObjectInformation, v5, 4u);
      v9 = 0;
    }
    v14 = ReturnLength;
    if ( ReturnLength )
    {
      v15 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    PreviousMode = v60;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    LODWORD(v65) = 0;
    v18 = 0LL;
    v66 = 0LL;
    v68 = 0LL;
    v19 = 0LL;
    v17 = 0;
    v61 = 0;
    HandleAttributes = 0;
    HandleInformation = 0LL;
  }
  else
  {
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v17 = result;
    v18 = (__int64 *)Object[0];
    v66 = (__int64 *)Object[0];
    v61 = result;
    if ( result < 0 )
      return result;
    LODWORD(v65) = HandleInformation.GrantedAccess;
    v68 = (__int64)Object[0] - 48;
    v19 = (void *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    HandleAttributes = HandleInformation.HandleAttributes;
    v9 = 0;
  }
  v70 = (__int64)v19;
  v69 = v19;
  if ( ObjectInformationClass == ObjectHandleFlagInformation )
  {
    v62 = 2;
    Object[7] = ObjectInformation;
    if ( (unsigned int)v5 < 2 )
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
      if ( (_DWORD)v5 != 56 )
      {
        ObfDereferenceObject(v18);
        return -1073741820;
      }
      memset(v74, 0, sizeof(v74));
      *(_DWORD *)v74 = HandleAttributes;
      v23 = v68;
      v24 = *(_BYTE *)(v68 + 27);
      if ( (v24 & 0x10) != 0 )
      {
        HandleAttributes |= 0x10u;
        *(_DWORD *)v74 = HandleAttributes;
      }
      if ( (v24 & 8) != 0 )
        *(_DWORD *)v74 = HandleAttributes | 0x20;
      v25 = (int)v65;
      *(_DWORD *)&v74[4] = (_DWORD)v65;
      *(_DWORD *)&v74[8] = *(_DWORD *)(v68 + 8);
      *(_DWORD *)&v74[12] = *(_DWORD *)v68;
      v26 = (_QWORD *)OBJECT_HEADER_TO_QUOTA_INFO(v68);
      if ( v26 )
        *(_QWORD *)&v74[16] = *v26;
      else
        *(_QWORD *)&v74[16] = 0LL;
      if ( v69 == ObpSymbolicLinkObjectType )
        v27 = *v18;
      else
        v27 = 0LL;
      *(_QWORD *)&v74[48] = v27;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v29 = KeAbPreAcquire(v23 + 16, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v23 + 16), v29, v23 + 16);
      if ( v29 )
        *(_BYTE *)(v29 + 26) |= 1u;
      if ( (*(_BYTE *)(v23 + 26) & 2) != 0
        && (v35 = ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 3], v68 = v23 - v35, v23 != v35)
        && (v36 = *(void **)(v23 - v35), (v65 = v36) != 0LL) )
      {
        ObfReferenceObject(v36);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v23 + 16));
        KeAbPostRelease(v23 + 16);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v37, v38, v39);
        v40 = *(unsigned __int16 *)(v68 + 8) + 2;
        while ( 1 )
        {
          v69 = v65;
          if ( !v65 )
            break;
          v41 = (char *)v65 - 48;
          v73 = (volatile signed __int64 *)((char *)v65 - 48);
          v42 = KeGetCurrentThread();
          --v42->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)(v41 + 16);
          v43 = KeAbPreAcquire((ULONG_PTR)(v41 + 16), 0LL, 0);
          v68 = v43;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v43, BugCheckParameter2);
            v43 = v68;
          }
          if ( v43 )
            *(_BYTE *)(v43 + 26) |= 1u;
          v44 = v73;
          if ( (*((_BYTE *)v73 + 26) & 2) == 0
            || (v45 = (char *)ObpInfoMaskToOffset[*((_BYTE *)v73 + 26) & 3],
                v46 = (char *)((char *)v73 - v45),
                v73 == (volatile signed __int64 *)v45)
            || (v47 = *(void **)v46) == 0LL )
          {
            v48 = (ULONG_PTR)(v73 + 2);
            if ( _InterlockedCompareExchange64(v73 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v44 + 2);
            KeAbPostRelease(v48);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v49, v50, v51);
            if ( v65 )
              ObfDereferenceObject(v65);
            break;
          }
          v40 += *((unsigned __int16 *)v46 + 4) + 2;
          v52 = *(void **)v46;
          v65 = v47;
          ObfReferenceObject(v52);
          v53 = BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v53 = BugCheckParameter2;
          }
          KeAbPostRelease(v53);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v54, v55, v56);
          ObfDereferenceObject(v69);
        }
        v33 = v40 + 18;
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v23 + 16));
        KeAbPostRelease(v23 + 16);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
        v33 = 0;
      }
      *(_DWORD *)&v74[36] = v33;
      *(_DWORD *)&v74[40] = *(unsigned __int16 *)(v70 + 16) + 106;
      if ( (v25 & 0x20000) != 0 && *(_QWORD *)(v23 + 40) )
      {
        v71 = 15;
        v64 = 0;
        v18 = v66;
        (*(void (__fastcall **)(__int64 *, __int64, int *))(v70 + 152))(v66, 1LL, &v71);
      }
      else
      {
        v64 = 0;
        v18 = v66;
      }
      *(_DWORD *)&v74[44] = 0;
      *(_OWORD *)ObjectInformation = *(_OWORD *)v74;
      *((_OWORD *)ObjectInformation + 1) = *(_OWORD *)&v74[16];
      *((_OWORD *)ObjectInformation + 2) = *(_OWORD *)&v74[32];
      *((_QWORD *)ObjectInformation + 6) = *(_QWORD *)&v74[48];
      v62 = 56;
      v17 = v61;
      goto LABEL_27;
    }
    v21 = ObjectInformationClass - 1;
    if ( v21 )
    {
      v34 = v21 - 1;
      if ( v34 )
      {
        if ( v34 != 1 )
        {
          ObfDereferenceObject(v18);
          return -1073741821;
        }
        v62 = 8;
        Object[5] = ObjectInformation;
        if ( (unsigned int)v5 >= 4 )
        {
          *(_DWORD *)ObjectInformation = 0;
          for ( i = 0; ; ++i )
          {
            v63 = i;
            if ( i >= 0x30 )
              break;
            v70 = ObpObjectTypes[i];
            if ( !v70 )
              break;
            ++*(_DWORD *)ObjectInformation;
          }
          while ( 1 )
          {
            v63 = v9;
            if ( v9 >= 0x30 )
              break;
            Object[6] = (char *)ObjectInformation + v62;
            v58 = ObpObjectTypes[v9];
            v70 = v58;
            if ( !v58 )
              break;
            v59 = ObQueryTypeInfo(v58, (char *)ObjectInformation + v62, (unsigned int)v5, &v62);
            v17 = v59;
            if ( ((v59 + 0x80000000) & 0x80000000) == 0 && v59 != -1073741820 )
              break;
            v9 = BugCheckParameter2 + 1;
            BugCheckParameter2 = (unsigned int)(BugCheckParameter2 + 1);
          }
        }
        else
        {
          v17 = -1073741820;
        }
        goto LABEL_27;
      }
      v22 = ObQueryTypeInfo(v19, ObjectInformation, (unsigned int)v5, &v62);
    }
    else
    {
      v22 = ObQueryNameStringMode((char *)v18, (__int64)ObjectInformation, v5, &v62, v60);
    }
    v17 = v22;
  }
LABEL_27:
  if ( v14 )
    *v14 = v62;
  if ( v18 )
    ObfDereferenceObject(v18);
  return v17;
}
