/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1404D0FD4
 * Callers:
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlGetDaclSecurityDescriptor @ 0x1400EE24C (RtlGetDaclSecurityDescriptor.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObReleaseObjectSecurity @ 0x140482AA4 (ObReleaseObjectSecurity.c)
 *     ObpAssignSecurity @ 0x140486910 (ObpAssignSecurity.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1404CFBCC (ObpGetObjectSecurity.c)
 *     ObpDecrementHandleCount @ 0x1404D3564 (ObpDecrementHandleCount.c)
 *     ObpDeleteNameCheck @ 0x1404D3780 (ObpDeleteNameCheck.c)
 *     ObpGrantAccess @ 0x1404D3D28 (ObpGrantAccess.c)
 *     ObpDeleteDirectoryEntry @ 0x14053BE00 (ObpDeleteDirectoryEntry.c)
 *     RtlGetControlSecurityDescriptor @ 0x1405575CC (RtlGetControlSecurityDescriptor.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        PVOID *a7)
{
  char *v7; // r14
  char v10; // al
  char *v11; // r13
  __int64 *v12; // rbx
  int ObjectSecurity; // edi
  __int64 v14; // rcx
  char v15; // di
  _OWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  signed __int64 *v19; // rbx
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  signed __int64 v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  char *v26; // rbx
  __int64 v27; // rdx
  signed __int64 *v28; // rdi
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  signed __int64 v31; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v33; // ax
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // r13
  PVOID v37; // rdx
  void *v38; // rcx
  NTSTATUS DaclSecurityDescriptor; // r13d
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int64 v48; // rdx
  signed __int64 *v49; // rbx
  signed __int64 v50; // rax
  signed __int64 v51; // rcx
  signed __int64 v52; // rtt
  struct _KTHREAD *v53; // rcx
  __int16 v54; // ax
  __int64 v55; // rdx
  signed __int64 *v56; // rbx
  signed __int64 v57; // rax
  signed __int64 v58; // rcx
  signed __int64 v59; // rtt
  __int16 v60; // ax
  __int64 v61; // rdx
  signed __int64 *v62; // rbx
  signed __int64 v63; // rax
  signed __int64 v64; // rcx
  signed __int64 v65; // rtt
  struct _KTHREAD *v66; // rcx
  __int16 v67; // ax
  BOOLEAN MemoryAllocated[8]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v69; // [rsp+68h] [rbp-98h] BYREF
  WORD Control[2]; // [rsp+70h] [rbp-90h] BYREF
  ULONG Revision; // [rsp+74h] [rbp-8Ch] BYREF
  BOOLEAN DaclPresent; // [rsp+78h] [rbp-88h] BYREF
  BOOLEAN DaclDefaulted[7]; // [rsp+79h] [rbp-87h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-80h] BYREF
  __int64 v75; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  PVOID v77; // [rsp+98h] [rbp-68h]
  char v78; // [rsp+AEh] [rbp-52h]
  char *v79; // [rsp+B8h] [rbp-48h]
  PACL Dacl; // [rsp+C0h] [rbp-40h] BYREF
  PVOID *v81; // [rsp+C8h] [rbp-38h]
  _OWORD v82[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v83; // [rsp+110h] [rbp+10h]
  __int128 v84; // [rsp+120h] [rbp+20h]
  __int128 v85; // [rsp+130h] [rbp+30h]
  __int128 v86; // [rsp+140h] [rbp+40h]
  __int128 v87; // [rsp+150h] [rbp+50h]
  __int128 v88; // [rsp+160h] [rbp+60h]

  v7 = a2 - 48;
  v81 = a7;
  v75 = a3;
  *a7 = 0LL;
  v10 = *(a2 - 22);
  v11 = a2;
  v79 = a2;
  v69 = 0LL;
  Dacl = 0LL;
  if ( (v10 & 2) != 0 )
    v12 = (__int64 *)&v7[-ObpInfoMaskToOffset[v10 & 3]];
  else
    v12 = 0LL;
  ObjectSecurity = ObpLookupObjectName(
                     *((HANDLE *)a6 + 1),
                     (__int64)(v12 + 1),
                     *a6,
                     (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v7[24] ^ BYTE1(v7))],
                     (v7[27] & 2) == 0,
                     0LL,
                     *((_SECURITY_QUALITY_OF_SERVICE **)a6 + 5),
                     a2,
                     (_ACCESS_STATE *)a4,
                     (__int64)&Object,
                     &v69);
  if ( ObjectSecurity < 0 )
  {
LABEL_68:
    ObpDecrementHandleCount(BugCheckParameter1);
    return (unsigned int)ObjectSecurity;
  }
  if ( v69 != v11 )
  {
    v26 = 0LL;
    if ( v78 )
    {
      v26 = (char *)v69 - 48;
      ObfReferenceObject(v69);
      _InterlockedIncrement((volatile signed __int32 *)&v26[-ObpInfoMaskToOffset[v26[26] & 3] + 24]);
      v28 = (signed __int64 *)((char *)Object + 296);
      _m_prefetchw((char *)Object + 296);
      v29 = *v28;
      if ( (*v28 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v30 = v29 - 16;
      else
        v30 = 0LL;
      if ( (v29 & 2) != 0 || (v31 = *v28, v31 != _InterlockedCompareExchange64(v28, v30, v29)) )
        ExfReleasePushLock(v28, v27);
      KeAbPostRelease((ULONG_PTR)v28);
      ObfDereferenceObject(Object);
      CurrentThread = KeGetCurrentThread();
      v33 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v33;
      if ( !v33
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( v77 )
      ObfDereferenceObject(v77);
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v26[-ObpInfoMaskToOffset[v26[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v26);
        ObfDereferenceObject(v26 + 48);
      }
      ObjectSecurity = -1073741771;
    }
    else
    {
      v35 = *(_DWORD *)(a4 + 24);
      v36 = v75;
      v37 = v69;
      LOBYTE(v34) = a5;
      *(_DWORD *)(a4 + 20) = 0;
      *(_DWORD *)(a4 + 16) = v35;
      ObjectSecurity = ObpGrantAccess(1LL, v37, a4, v34, *a6, v36);
      if ( ObjectSecurity < 0 )
      {
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd(
                 (volatile signed __int32 *)&v26[-ObpInfoMaskToOffset[v26[26] & 3] + 24],
                 0xFFFFFFFF) == 1 )
            ObpDeleteNameCheck(v26);
          ObfDereferenceObject(v26 + 48);
        }
      }
      else
      {
        ObjectSecurity = ObpIncrementHandleCountEx(1u, v36, BugCheckParameter1, (__int64)v69, a5, *a6, 0LL);
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd(
                 (volatile signed __int32 *)&v26[-ObpInfoMaskToOffset[v26[26] & 3] + 24],
                 0xFFFFFFFF) == 1 )
            ObpDeleteNameCheck(v26);
          ObfDereferenceObject(v26 + 48);
        }
        if ( ObjectSecurity >= 0 )
          goto LABEL_26;
      }
    }
    ObfDereferenceObject(v69);
    return (unsigned int)ObjectSecurity;
  }
  v14 = *v12;
  SecurityDescriptor = 0LL;
  MemoryAllocated[0] = 0;
  LODWORD(v75) = 0;
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 344) & 8) != 0 || ObpObjectSecurityInheritance )
      LODWORD(v75) = 3;
    ObjectSecurity = ObpGetObjectSecurity(v14, &SecurityDescriptor, MemoryAllocated, a5);
    if ( ObjectSecurity < 0 )
      goto LABEL_101;
  }
  v15 = 0;
  if ( !*v12 || (*(_DWORD *)(*v12 + 344) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_12;
  v38 = *(void **)(a4 + 64);
  if ( !v38 )
    goto LABEL_12;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v38, &DaclPresent, &Dacl, DaclDefaulted);
  if ( DaclSecurityDescriptor < 0 )
  {
    if ( SecurityDescriptor )
      ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
    ObpDeleteDirectoryEntry(&Object);
    if ( !v78 )
      goto LABEL_88;
    v49 = (signed __int64 *)((char *)Object + 296);
    _m_prefetchw((char *)Object + 296);
    v50 = *v49;
    v51 = *v49 - 16;
    if ( (*v49 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v51 = 0LL;
    if ( (v50 & 2) != 0 || (v52 = *v49, v52 != _InterlockedCompareExchange64(v49, v51, v50)) )
      ExfReleasePushLock(v49, v48);
    KeAbPostRelease((ULONG_PTR)v49);
    ObfDereferenceObject(Object);
    v53 = KeGetCurrentThread();
    v54 = v53->KernelApcDisable + 1;
    v53->KernelApcDisable = v54;
    if ( v54 )
      goto LABEL_88;
    goto LABEL_85;
  }
  DaclSecurityDescriptor = RtlGetControlSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64), Control, &Revision);
  if ( DaclSecurityDescriptor >= 0 )
  {
    v11 = v79;
    if ( !Dacl && (Control[0] & 0x1000) == 0 )
    {
      v40 = *(_OWORD *)(a4 + 16);
      v82[0] = *(_OWORD *)a4;
      v41 = *(_OWORD *)(a4 + 32);
      v82[1] = v40;
      v42 = *(_OWORD *)(a4 + 48);
      v82[2] = v41;
      v43 = *(_OWORD *)(a4 + 64);
      v82[3] = v42;
      v44 = *(_OWORD *)(a4 + 80);
      v83 = v43;
      v45 = *(_OWORD *)(a4 + 96);
      v84 = v44;
      v46 = *(_OWORD *)(a4 + 128);
      v85 = v45;
      v86 = *(_OWORD *)(a4 + 112);
      v47 = *(_OWORD *)(a4 + 144);
      v87 = v46;
      v88 = v47;
      *(_QWORD *)&v83 = 0LL;
      v16 = v82;
LABEL_13:
      if ( !*((_QWORD *)v16 + 8) && (_DWORD)v75 )
        v15 = 1;
      v17 = ObpAssignSecurity(
              (__int64)v16,
              (__int64)SecurityDescriptor,
              v11,
              (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v7[24] ^ BYTE1(v7))],
              v75,
              v15);
      ObjectSecurity = v17;
      if ( SecurityDescriptor )
      {
        ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
        goto LABEL_16;
      }
      if ( v17 >= 0 )
      {
        SeReleaseSecurityDescriptor(*((void **)a6 + 4), *((_BYTE *)a6 + 16), 1);
        *((_QWORD *)a6 + 4) = 0LL;
        *(_QWORD *)(a4 + 64) = 0LL;
LABEL_16:
        if ( ObjectSecurity >= 0 )
        {
          if ( v78 )
          {
            v19 = (signed __int64 *)((char *)Object + 296);
            _m_prefetchw((char *)Object + 296);
            v20 = *v19;
            v21 = *v19 - 16;
            if ( (*v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v21 = 0LL;
            if ( (v20 & 2) != 0 || (v22 = *v19, v22 != _InterlockedCompareExchange64(v19, v21, v20)) )
              ExfReleasePushLock(v19, v18);
            KeAbPostRelease((ULONG_PTR)v19);
            ObfDereferenceObject(Object);
            v23 = KeGetCurrentThread();
            v24 = v23->KernelApcDisable + 1;
            v23->KernelApcDisable = v24;
            if ( !v24
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
              && !v23->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
          if ( v77 )
            ObfDereferenceObject(v77);
LABEL_26:
          *v81 = v69;
          return (unsigned int)ObjectSecurity;
        }
      }
LABEL_101:
      ObpDeleteDirectoryEntry(&Object);
      if ( v78 )
      {
        v62 = (signed __int64 *)((char *)Object + 296);
        _m_prefetchw((char *)Object + 296);
        v63 = *v62;
        v64 = *v62 - 16;
        if ( (*v62 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v64 = 0LL;
        if ( (v63 & 2) != 0 || (v65 = *v62, v65 != _InterlockedCompareExchange64(v62, v64, v63)) )
          ExfReleasePushLock(v62, v61);
        KeAbPostRelease((ULONG_PTR)v62);
        ObfDereferenceObject(Object);
        v66 = KeGetCurrentThread();
        v67 = v66->KernelApcDisable + 1;
        v66->KernelApcDisable = v67;
        if ( !v67
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v66->ApcState.ApcListHead[0].Flink != &v66->152
          && !v66->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( v77 )
        ObfDereferenceObject(v77);
      goto LABEL_68;
    }
LABEL_12:
    v16 = (_OWORD *)a4;
    goto LABEL_13;
  }
  if ( SecurityDescriptor )
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
  ObpDeleteDirectoryEntry(&Object);
  if ( v78 )
  {
    v56 = (signed __int64 *)((char *)Object + 296);
    _m_prefetchw((char *)Object + 296);
    v57 = *v56;
    v58 = *v56 - 16;
    if ( (*v56 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v58 = 0LL;
    if ( (v57 & 2) != 0 || (v59 = *v56, v59 != _InterlockedCompareExchange64(v56, v58, v57)) )
      ExfReleasePushLock(v56, v55);
    KeAbPostRelease((ULONG_PTR)v56);
    ObfDereferenceObject(Object);
    v53 = KeGetCurrentThread();
    v60 = v53->KernelApcDisable + 1;
    v53->KernelApcDisable = v60;
    if ( !v60 )
    {
LABEL_85:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v53->ApcState.ApcListHead[0].Flink != &v53->152
        && !v53->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
LABEL_88:
  if ( v77 )
    ObfDereferenceObject(v77);
  ObpDecrementHandleCount(BugCheckParameter1);
  return (unsigned int)DaclSecurityDescriptor;
}
