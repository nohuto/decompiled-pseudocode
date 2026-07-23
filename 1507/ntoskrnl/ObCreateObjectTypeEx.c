/*
 * XREFs of ObCreateObjectTypeEx @ 0x140595F64
 * Callers:
 *     ObCreateObjectType @ 0x140595F4C (ObCreateObjectType.c)
 *     AlpcpInitSystem @ 0x1405BEC58 (AlpcpInitSystem.c)
 *     IoCreateObjectTypes @ 0x1407C39F8 (IoCreateObjectTypes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObpAllocateObject @ 0x14048B260 (ObpAllocateObject.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     ObpInsertDirectoryEntry @ 0x14053A340 (ObpInsertDirectoryEntry.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C7C6C (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING SourceString,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // r13
  __int64 v6; // r12
  unsigned __int16 Length; // cx
  char v10; // al
  wchar_t *Buffer; // rdx
  int v12; // ecx
  wchar_t v13; // ax
  unsigned __int64 *v14; // r15
  char v15; // bl
  _QWORD *v16; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdx
  signed __int64 *v22; // rbx
  signed __int64 v23; // rax
  signed __int64 v24; // rcx
  signed __int64 v25; // rtt
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  __int64 v29; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // rcx
  __int64 v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  _OWORD *v35; // r15
  UNICODE_STRING v36; // xmm6
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 v44; // rdx
  __int64 v45; // r9
  int v46; // r15d
  signed __int64 v47; // rax
  signed __int64 v48; // rcx
  __int64 v49; // rtt
  struct _KTHREAD *v50; // rcx
  __int16 v51; // ax
  __int64 v52; // rax
  _BYTE *v53; // rbx
  char v54; // r15
  unsigned __int64 v55; // r14
  unsigned __int16 v56; // r14
  char *PoolWithTag; // rax
  char *v58; // r12
  char *v59; // r8
  unsigned int v60; // ecx
  unsigned int MaximumLength; // r9d
  char *v62; // rdx
  int v63; // edx
  int v64; // ecx
  struct _KTHREAD *v65; // rax
  unsigned __int64 *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rdi
  _QWORD *v70; // rax
  _QWORD *v71; // rcx
  PVOID *v72; // rdx
  char *v73; // rdi
  unsigned int v74; // eax
  __int64 *v75; // rdi
  signed __int64 v76; // rax
  signed __int64 v77; // rcx
  __int64 v78; // rtt
  __int64 v79; // rdx
  struct _KTHREAD *v80; // rcx
  __int16 v81; // ax
  int v82; // ecx
  __int64 v83; // rdi
  signed __int64 *v84; // rdi
  signed __int64 v85; // rax
  signed __int64 v86; // rcx
  signed __int64 v87; // rtt
  struct _KTHREAD *v88; // rcx
  __int16 v89; // ax
  unsigned int v90; // edi
  signed __int64 *v91; // rdi
  signed __int64 v92; // rax
  signed __int64 v93; // rcx
  signed __int64 v94; // rtt
  struct _KTHREAD *v95; // rcx
  __int16 v96; // ax
  signed __int64 *v97; // rdi
  signed __int64 v98; // rax
  signed __int64 v99; // rcx
  signed __int64 v100; // rtt
  struct _KTHREAD *v101; // rcx
  __int16 v102; // ax
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v104; // [rsp+50h] [rbp-B8h]
  __int16 v105; // [rsp+66h] [rbp-A2h]
  __int64 v106; // [rsp+68h] [rbp-A0h]
  __int64 v107; // [rsp+70h] [rbp-98h]
  __int64 v108; // [rsp+78h] [rbp-90h]
  int v109; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int64 v111; // [rsp+98h] [rbp-70h] BYREF
  _STRING v112; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v113[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v114[14]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = a5;
  v108 = a4;
  v6 = a4;
  v107 = (__int64)a5;
  if ( !SourceString
    || (Length = SourceString->Length) == 0
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEF00D) != 0
    || *(_WORD *)a2 != 120
    || (v10 = *((_BYTE *)a2 + 2), (v10 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v10 & 4) == 0 && (*((_DWORD *)a2 + 9) & 0xFFFFFDFF) != 0 && (a4 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  Buffer = SourceString->Buffer;
  v12 = Length >> 1;
  v109 = *((_DWORD *)a2 + 9);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = *Buffer;
      --v12;
      ++Buffer;
      if ( v13 == 92 )
        return 3221225523LL;
      if ( !v12 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v14 = (unsigned __int64 *)ObpTypeDirectoryObject;
    v15 = 0;
    v105 = 0;
    v16 = 0LL;
    v104 = 0LL;
    Object = 0LL;
    LODWORD(v106) = -60876;
    if ( ObpTypeDirectoryObject )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = KeAbPreAcquire((ULONG_PTR)(v14 + 37), 0LL, 0LL, 2LL);
      v20 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v14 + 74, 0LL) )
        ExfAcquirePushLockExclusiveEx(v14 + 37, v18, (ULONG_PTR)(v14 + 37), v19);
      if ( v20 )
        *(_BYTE *)(v20 + 26) |= 1u;
      LODWORD(v106) = -859041228;
      ObfReferenceObject(v14);
      Object = v14;
      v14 = 0LL;
      v105 = 257;
      if ( ObpLookupDirectoryEntryEx(ObpTypeDirectoryObject, 0, (__int64)&Object) )
      {
        if ( (_BYTE)v105 )
        {
          v22 = (signed __int64 *)((char *)Object + 296);
          _m_prefetchw((char *)Object + 296);
          v23 = *v22;
          v24 = *v22 - 16;
          if ( (*v22 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v24 = 0LL;
          if ( (v23 & 2) != 0 || (v25 = *v22, v25 != _InterlockedCompareExchange64(v22, v24, v23)) )
            ExfReleasePushLock(v22, v21);
          KeAbPostRelease((ULONG_PTR)v22);
          ObfDereferenceObject(Object);
          v26 = KeGetCurrentThread();
          v27 = v26->KernelApcDisable + 1;
          v26->KernelApcDisable = v27;
          if ( !v27
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
            && !v26->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        if ( v104 )
          ObfDereferenceObject(v104);
        return 3221225525LL;
      }
      v15 = v105;
      v16 = Object;
    }
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString->MaximumLength, 0x6D4E624Fu);
    if ( DestinationString.Buffer )
    {
      DestinationString.MaximumLength = SourceString->MaximumLength;
      RtlCopyUnicodeString(&DestinationString, SourceString);
      v35 = ObpTypeObjectType;
      v36 = DestinationString;
      if ( !ObpTypeObjectType )
      {
        memset(v114, 0, 0xD8uLL);
        v37 = *a2;
        BYTE8(v114[2]) = 2;
        v35 = v114;
        v38 = a2[1];
        LODWORD(v114[12]) = 1416258127;
        v114[4] = v37;
        v39 = a2[2];
        v114[5] = v38;
        v40 = a2[3];
        v114[6] = v39;
        v41 = a2[4];
        v114[7] = v40;
        v42 = a2[5];
        v114[8] = v41;
        v43 = a2[6];
        v114[9] = v42;
        *(_QWORD *)&v42 = *((_QWORD *)a2 + 14);
        v114[10] = v43;
        *(_QWORD *)&v114[11] = v42;
        v114[1] = DestinationString;
      }
      memset(v113, 0, sizeof(v113));
      v113[0] = 16;
      v113[5] = *((_DWORD *)v35 + 26);
      v113[6] = *((_DWORD *)v35 + 27);
      v113[7] = 2048;
      v46 = ObpAllocateObject(v113, 0, (__int64)v35, (__int128 *)&DestinationString, 216, &v111, 0LL);
      if ( v46 >= 0 )
      {
        v52 = v111;
        *(_QWORD *)(v111 + 32) = 0LL;
        v53 = (_BYTE *)(v52 + 48);
        *(UNICODE_STRING *)(v52 + 64) = v36;
        *(_QWORD *)(v52 + 92) = 0LL;
        *(_QWORD *)(v52 + 100) = 0LL;
        *(_DWORD *)(v52 + 108) = 0;
        if ( ObpTypeObjectType )
        {
          v54 = 1;
          if ( (_BYTE)NlsMbCodePageTag )
            LOWORD(v55) = RtlxUnicodeStringToOemSize(SourceString);
          else
            v55 = ((unsigned __int64)SourceString->Length + 2) >> 1;
          v56 = ((v55 + 2) & 0xFFFC) + 1;
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v56, 0x6E54624Fu);
          v58 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_86;
          memset(PoolWithTag, 0, v56);
          v112.MaximumLength = v56;
          v112.Buffer = v58;
          if ( RtlUnicodeStringToAnsiString(&v112, SourceString, 0) >= 0 )
          {
            v59 = v112.Buffer;
            v60 = SourceString->Length >> 1;
            if ( v60 < 4 )
            {
              MaximumLength = v112.MaximumLength;
              v62 = &v112.Buffer[v60];
              do
              {
                if ( v60 < MaximumLength )
                  *v62 = 32;
                ++v60;
                ++v62;
              }
              while ( v60 < 4 );
            }
            v54 = 0;
            *((_DWORD *)v53 + 48) = *(_DWORD *)v59;
          }
          ExFreePoolWithTag(v58, 0);
          if ( v54 )
          {
LABEL_86:
            v6 = v108;
            v5 = (_QWORD *)v107;
            if ( SourceString->Length < 4u )
              *((_DWORD *)v53 + 48) = 1063936591;
            else
              *((_DWORD *)v53 + 48) = *(_DWORD *)SourceString->Buffer;
          }
          else
          {
            v6 = v108;
            v5 = (_QWORD *)v107;
          }
        }
        else
        {
          ObpTypeObjectType = (PVOID)(v52 + 48);
          *(_DWORD *)(v52 + 92) = 1;
          *(_DWORD *)(v52 + 240) = 1416258127;
        }
        v63 = v109;
        *((_OWORD *)v53 + 4) = *a2;
        *((_OWORD *)v53 + 5) = a2[1];
        *((_OWORD *)v53 + 6) = a2[2];
        *((_OWORD *)v53 + 7) = a2[3];
        *((_OWORD *)v53 + 8) = a2[4];
        *((_OWORD *)v53 + 9) = a2[5];
        *((_OWORD *)v53 + 10) = a2[6];
        *((_QWORD *)v53 + 22) = *((_QWORD *)a2 + 14);
        *((_DWORD *)v53 + 25) = v63;
        if ( (NtGlobalFlag & 0x4000) != 0 )
          v53[66] |= 0x20u;
        v64 = (*((_BYTE *)a2 + 2) & 0x10) + 88;
        if ( (v63 & 1) != 0 )
          *((_DWORD *)v53 + 26) += v64;
        else
          *((_DWORD *)v53 + 27) += v64;
        if ( !*((_QWORD *)a2 + 11) )
          *((_QWORD *)v53 + 19) = SeDefaultObjectMethod;
        *((_QWORD *)v53 + 23) = 0LL;
        *((_QWORD *)v53 + 1) = v53;
        *(_QWORD *)v53 = v53;
        *((_QWORD *)v53 + 26) = v53 + 200;
        *((_QWORD *)v53 + 25) = v53 + 200;
        if ( (v53[66] & 4) != 0 )
        {
          *((_DWORD *)v53 + 23) |= 0x100000u;
          *((_QWORD *)v53 + 4) = &ObpDefaultObject;
        }
        else
        {
          *((_QWORD *)v53 + 4) = v6;
        }
        v65 = KeGetCurrentThread();
        --v65->SpecialApcDisable;
        v66 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
        v67 = KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0LL, v45);
        v69 = v67;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v66, 0LL) )
          ExfAcquirePushLockExclusiveEx(v66, v67, (ULONG_PTR)v66, v68);
        if ( v69 )
          *(_BYTE *)(v69 + 26) |= 1u;
        v70 = (_QWORD *)(v111 - 32);
        if ( (*(_BYTE *)(v111 + 26) & 1) == 0 )
          v70 = 0LL;
        v71 = ObpTypeObjectType;
        v72 = (PVOID *)*((_QWORD *)ObpTypeObjectType + 1);
        *v70 = ObpTypeObjectType;
        v70[1] = v72;
        if ( *v72 != v71 )
          __fastfail(3u);
        *v72 = v70;
        v71[1] = v70;
        v73 = (char *)ObpTypeObjectType;
        v74 = *((_DWORD *)ObpTypeObjectType + 11);
        if ( v74 < 0x30 )
          ObpObjectTypes[v74 - 1] = (__int64)v53;
        v75 = (__int64 *)(v73 + 184);
        _m_prefetchw(v75);
        v76 = *v75;
        v77 = *v75 - 16;
        if ( (*v75 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v77 = 0LL;
        if ( (v76 & 2) != 0 || (v78 = *v75, v78 != _InterlockedCompareExchange64(v75, v77, v76)) )
          ExfReleasePushLock(v75, (__int64)v72);
        KeAbPostRelease((ULONG_PTR)v75);
        v80 = KeGetCurrentThread();
        v81 = v80->SpecialApcDisable + 1;
        v80->SpecialApcDisable = v81;
        if ( !v81 && ($CD287064E7C9F7953DE243E927CFCB99 *)v80->ApcState.ApcListHead[0].Flink != &v80->152 )
          KiCheckForKernelApcDelivery();
        if ( v53 == ObpTypeObjectType )
        {
          LOBYTE(v82) = 2;
        }
        else
        {
          v82 = 3;
          v79 = 3LL;
          while ( _InterlockedCompareExchange64(&ObTypeIndexTable[v79], 1LL, 0LL) )
          {
            v79 = ++v82;
            if ( (unsigned __int64)v82 >= 0x100 )
            {
              if ( (_BYTE)v105 )
              {
                v91 = (signed __int64 *)((char *)Object + 296);
                _m_prefetchw((char *)Object + 296);
                v92 = *v91;
                v93 = *v91 - 16;
                if ( (*v91 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                  v93 = 0LL;
                if ( (v92 & 2) != 0 || (v94 = *v91, v94 != _InterlockedCompareExchange64(v91, v93, v92)) )
                  ExfReleasePushLock(v91, v79);
                KeAbPostRelease((ULONG_PTR)v91);
                ObfDereferenceObject(Object);
                v95 = KeGetCurrentThread();
                v96 = v95->KernelApcDisable + 1;
                v95->KernelApcDisable = v96;
                if ( !v96
                  && ($CD287064E7C9F7953DE243E927CFCB99 *)v95->ApcState.ApcListHead[0].Flink != &v95->152
                  && !v95->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery();
                }
              }
              if ( v104 )
                ObfDereferenceObject(v104);
              v90 = -1073741823;
              goto LABEL_130;
            }
          }
        }
        v83 = (unsigned __int8)v82;
        ObTypeIndexTable[(unsigned __int8)v82] = (__int64)v53;
        v53[40] = v82;
        if ( !ObpTypeDirectoryObject || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, v53, (__int64)&Object) )
        {
          if ( (_BYTE)v105 )
          {
            v97 = (signed __int64 *)((char *)Object + 296);
            _m_prefetchw((char *)Object + 296);
            v98 = *v97;
            v99 = *v97 - 16;
            if ( (*v97 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v99 = 0LL;
            if ( (v98 & 2) != 0 || (v100 = *v97, v100 != _InterlockedCompareExchange64(v97, v99, v98)) )
              ExfReleasePushLock(v97, v79);
            KeAbPostRelease((ULONG_PTR)v97);
            ObfDereferenceObject(Object);
            v101 = KeGetCurrentThread();
            v102 = v101->KernelApcDisable + 1;
            v101->KernelApcDisable = v102;
            if ( !v102
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v101->ApcState.ApcListHead[0].Flink != &v101->152
              && !v101->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
          if ( v104 )
            ObfDereferenceObject(v104);
          *v5 = v53;
          return 0LL;
        }
        else
        {
          ObTypeIndexTable[v83] = 0LL;
          if ( (_BYTE)v105 )
          {
            v84 = (signed __int64 *)((char *)Object + 296);
            _m_prefetchw((char *)Object + 296);
            v85 = *v84;
            v86 = *v84 - 16;
            if ( (*v84 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v86 = 0LL;
            if ( (v85 & 2) != 0 || (v87 = *v84, v87 != _InterlockedCompareExchange64(v84, v86, v85)) )
              ExfReleasePushLock(v84, v79);
            KeAbPostRelease((ULONG_PTR)v84);
            ObfDereferenceObject(Object);
            v88 = KeGetCurrentThread();
            v89 = v88->KernelApcDisable + 1;
            v88->KernelApcDisable = v89;
            if ( !v89
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v88->ApcState.ApcListHead[0].Flink != &v88->152
              && !v88->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
          if ( v104 )
            ObfDereferenceObject(v104);
          v90 = -1073741670;
LABEL_130:
          ObfDereferenceObject(v53);
          return v90;
        }
      }
      else
      {
        if ( v15 )
        {
          _m_prefetchw(v16 + 37);
          v47 = v16[37];
          v48 = v47 - 16;
          if ( (v47 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v48 = 0LL;
          if ( (v47 & 2) != 0 || (v49 = v16[37], v49 != _InterlockedCompareExchange64(v16 + 37, v48, v47)) )
            ExfReleasePushLock(v16 + 37, v44);
          KeAbPostRelease((ULONG_PTR)(v16 + 37));
          ObfDereferenceObject(Object);
          v50 = KeGetCurrentThread();
          v51 = v50->KernelApcDisable + 1;
          v50->KernelApcDisable = v51;
          if ( !v51
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v50->ApcState.ApcListHead[0].Flink != &v50->152
            && !v50->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        if ( v104 )
          ObfDereferenceObject(v104);
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        return (unsigned int)v46;
      }
    }
    else
    {
      if ( v15 )
      {
        _m_prefetchw(v16 + 37);
        v30 = v16[37];
        v31 = v30 - 16;
        if ( (v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v31 = (signed __int64)v14;
        if ( (v30 & 2) != 0 || (v32 = v16[37], v32 != _InterlockedCompareExchange64(v16 + 37, v31, v30)) )
          ExfReleasePushLock(v16 + 37, v29);
        KeAbPostRelease((ULONG_PTR)(v16 + 37));
        ObfDereferenceObject(Object);
        v33 = KeGetCurrentThread();
        v34 = v33->KernelApcDisable + 1;
        v33->KernelApcDisable = v34;
        if ( !v34
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
          && v33->SpecialApcDisable == (_WORD)v14 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( v104 )
        ObfDereferenceObject(v104);
      return 3221225626LL;
    }
  }
}
