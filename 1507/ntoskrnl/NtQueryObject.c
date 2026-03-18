/*
 * XREFs of NtQueryObject @ 0x1404259B0
 * Callers:
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ObQueryTypeInfo @ 0x140542624 (ObQueryTypeInfo.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
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
  __int64 v23; // r9
  char *v24; // rsi
  char v25; // al
  int v26; // r13d
  char *v27; // rax
  __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v30; // rcx
  __int64 v31; // r9
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  int v34; // edi
  __int32 v35; // esi
  char *v36; // rax
  void *v37; // rax
  __int64 v38; // r9
  struct _KTHREAD *v39; // rcx
  __int16 v40; // ax
  int v41; // edi
  char *v42; // rcx
  struct _KTHREAD *v43; // rax
  __int64 v44; // rcx
  volatile signed __int64 *v45; // rdx
  char *v46; // rax
  char *v47; // rcx
  PVOID v48; // r8
  ULONG_PTR v49; // r14
  struct _KTHREAD *v50; // rcx
  __int16 v51; // ax
  ULONG_PTR v52; // rcx
  struct _KTHREAD *v53; // rdx
  __int16 v54; // ax
  unsigned int i; // ecx
  __int64 v56; // rcx
  NTSTATUS v57; // eax
  char v58; // [rsp+50h] [rbp-108h]
  NTSTATUS v59; // [rsp+54h] [rbp-104h]
  unsigned int v60; // [rsp+58h] [rbp-100h] BYREF
  int v61; // [rsp+60h] [rbp-F8h]
  __int64 *v62; // [rsp+68h] [rbp-F0h]
  unsigned int v63; // [rsp+70h] [rbp-E8h]
  PVOID v64; // [rsp+78h] [rbp-E0h]
  PVOID v65; // [rsp+80h] [rbp-D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-D0h]
  char *v67; // [rsp+90h] [rbp-C8h]
  __int64 v68; // [rsp+98h] [rbp-C0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-B8h] BYREF
  volatile signed __int64 *v70; // [rsp+A8h] [rbp-B0h]
  _OWORD v71[6]; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Object[5]; // [rsp+118h] [rbp-40h] BYREF

  v9 = 0;
  BugCheckParameter2 = 0LL;
  v60 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v58 = PreviousMode;
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
    PreviousMode = v58;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    LODWORD(v64) = 0;
    v18 = 0LL;
    v62 = 0LL;
    v67 = 0LL;
    v19 = 0LL;
    v17 = 0;
    v59 = 0;
    HandleAttributes = 0;
    HandleInformation = 0LL;
  }
  else
  {
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v17 = result;
    v18 = (__int64 *)Object[0];
    v62 = (__int64 *)Object[0];
    v59 = result;
    if ( result < 0 )
      return result;
    LODWORD(v64) = HandleInformation.GrantedAccess;
    v67 = (char *)Object[0] - 48;
    v19 = (void *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    HandleAttributes = HandleInformation.HandleAttributes;
    v9 = 0;
  }
  v68 = (__int64)v19;
  v65 = v19;
  if ( ObjectInformationClass == ObjectHandleFlagInformation )
  {
    v60 = 2;
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
      memset(&v71[1], 0, 0x38uLL);
      LODWORD(v71[1]) = HandleAttributes;
      v24 = v67;
      v25 = v67[27];
      if ( (v25 & 0x10) != 0 )
      {
        HandleAttributes |= 0x10u;
        LODWORD(v71[1]) = HandleAttributes;
      }
      if ( (v25 & 8) != 0 )
        LODWORD(v71[1]) = HandleAttributes | 0x20;
      v26 = (int)v64;
      DWORD1(v71[1]) = (_DWORD)v64;
      DWORD2(v71[1]) = *((_DWORD *)v67 + 2);
      HIDWORD(v71[1]) = *(_DWORD *)v67;
      if ( (v67[26] & 8) == 0 || (v27 = (char *)ObpInfoMaskToOffset[v67[26] & 0xF], v67 == v27) )
        *(_QWORD *)&v71[2] = 0LL;
      else
        *(_QWORD *)&v71[2] = *(_QWORD *)(v67 - v27);
      if ( v65 == ObpSymbolicLinkObjectType )
        v28 = *v18;
      else
        v28 = 0LL;
      *(_QWORD *)&v71[4] = v28;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v30 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v24 + 16), 0LL, 0LL, v23);
      v65 = v30;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v24 + 2, 17LL, 0LL) )
      {
        ExfAcquirePushLockSharedEx((unsigned __int64 *)v24 + 2, (__int64)v30, (ULONG_PTR)(v24 + 16), v31);
        v30 = v65;
      }
      if ( v30 )
        v30[26] |= 1u;
      if ( (v24[26] & 2) != 0
        && (v36 = (char *)ObpInfoMaskToOffset[v24[26] & 3], v67 = (char *)(v24 - v36), v24 != v36)
        && (v37 = *(void **)(v24 - v36), (v64 = v37) != 0LL) )
      {
        ObfReferenceObject(v37);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v24 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v24 + 2);
        KeAbPostRelease((ULONG_PTR)(v24 + 16));
        v39 = KeGetCurrentThread();
        v40 = v39->KernelApcDisable + 1;
        v39->KernelApcDisable = v40;
        if ( !v40
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
          && !v39->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v41 = *((unsigned __int16 *)v67 + 4) + 2;
        while ( 1 )
        {
          v65 = v64;
          if ( !v64 )
            break;
          v42 = (char *)v64 - 48;
          v70 = (volatile signed __int64 *)((char *)v64 - 48);
          v43 = KeGetCurrentThread();
          --v43->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)(v42 + 16);
          v44 = KeAbPreAcquire((ULONG_PTR)(v42 + 16), 0LL, 0LL, v38);
          v67 = (char *)v44;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
          {
            ExfAcquirePushLockSharedEx(
              (unsigned __int64 *)BugCheckParameter2,
              v44,
              BugCheckParameter2,
              BugCheckParameter2);
            v44 = (__int64)v67;
          }
          if ( v44 )
            *(_BYTE *)(v44 + 26) |= 1u;
          v45 = v70;
          if ( (*((_BYTE *)v70 + 26) & 2) == 0
            || (v46 = (char *)ObpInfoMaskToOffset[*((_BYTE *)v70 + 26) & 3],
                v47 = (char *)((char *)v70 - v46),
                v70 == (volatile signed __int64 *)v46)
            || (v48 = *(PVOID *)v47) == 0LL )
          {
            v49 = (ULONG_PTR)(v70 + 2);
            if ( _InterlockedCompareExchange64(v70 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v45 + 2);
            KeAbPostRelease(v49);
            v50 = KeGetCurrentThread();
            v51 = v50->KernelApcDisable + 1;
            v50->KernelApcDisable = v51;
            if ( !v51
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v50->ApcState.ApcListHead[0].Flink != &v50->152
              && !v50->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            break;
          }
          v41 += *((unsigned __int16 *)v47 + 4) + 2;
          v64 = *(PVOID *)v47;
          ObfReferenceObject(v48);
          v52 = BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v52 = BugCheckParameter2;
          }
          KeAbPostRelease(v52);
          v53 = KeGetCurrentThread();
          v54 = v53->KernelApcDisable + 1;
          v53->KernelApcDisable = v54;
          if ( !v54
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v53->ApcState.ApcListHead[0].Flink != &v53->152
            && !v53->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          ObfDereferenceObject(v65);
        }
        if ( v64 )
          ObfDereferenceObject(v64);
        v34 = v41 + 18;
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v24 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v24 + 2);
        KeAbPostRelease((ULONG_PTR)(v24 + 16));
        v32 = KeGetCurrentThread();
        v33 = v32->KernelApcDisable + 1;
        v32->KernelApcDisable = v33;
        if ( !v33
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
          && !v32->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v34 = 0;
      }
      DWORD1(v71[3]) = v34;
      DWORD2(v71[3]) = *(unsigned __int16 *)(v68 + 16) + 106;
      if ( (v26 & 0x20000) != 0 && *((_QWORD *)v24 + 5) )
      {
        LODWORD(v71[0]) = 15;
        v61 = 0;
        v18 = v62;
        (*(void (__fastcall **)(__int64 *, __int64, _OWORD *))(v68 + 152))(v62, 1LL, v71);
      }
      else
      {
        v61 = 0;
        v18 = v62;
      }
      HIDWORD(v71[3]) = 0;
      *(_OWORD *)ObjectInformation = v71[1];
      *((_OWORD *)ObjectInformation + 1) = v71[2];
      *((_OWORD *)ObjectInformation + 2) = v71[3];
      *((_QWORD *)ObjectInformation + 6) = *(_QWORD *)&v71[4];
      v60 = 56;
      v17 = v59;
      goto LABEL_26;
    }
    v21 = ObjectInformationClass - 1;
    if ( v21 )
    {
      v35 = v21 - 1;
      if ( v35 )
      {
        if ( v35 != 1 )
        {
          ObfDereferenceObject(v18);
          return -1073741821;
        }
        v60 = 8;
        Object[3] = ObjectInformation;
        if ( ObjectInformationLength >= 4 )
        {
          *(_DWORD *)ObjectInformation = 0;
          for ( i = 0; ; ++i )
          {
            v63 = i;
            if ( i >= 0x30 )
              break;
            v68 = ObpObjectTypes[i];
            if ( !v68 )
              break;
            ++*(_DWORD *)ObjectInformation;
          }
          while ( 1 )
          {
            v63 = v9;
            if ( v9 >= 0x30 )
              break;
            Object[1] = (char *)ObjectInformation + v60;
            v56 = ObpObjectTypes[v9];
            v68 = v56;
            if ( !v56 )
              break;
            v57 = ObQueryTypeInfo(v56, (char *)ObjectInformation + v60, ObjectInformationLength, &v60);
            v17 = v57;
            if ( ((v57 + 0x80000000) & 0x80000000) == 0 && v57 != -1073741820 )
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
      NameStringMode = ObQueryTypeInfo(v19, ObjectInformation, ObjectInformationLength, &v60);
    }
    else
    {
      NameStringMode = ObQueryNameStringMode(
                         (_DWORD)v18,
                         (_DWORD)ObjectInformation,
                         ObjectInformationLength,
                         (unsigned int)&v60,
                         v58);
    }
    v17 = NameStringMode;
  }
LABEL_26:
  if ( v14 )
    *v14 = v60;
  if ( v18 )
    ObfDereferenceObject(v18);
  return v17;
}
