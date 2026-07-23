/*
 * XREFs of ObCreateObjectTypeEx @ 0x140552594
 * Callers:
 *     VRegSetup @ 0x140551B90 (VRegSetup.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 *     CmpInitializeLightWeightTransactionType @ 0x140553454 (CmpInitializeLightWeightTransactionType.c)
 *     AlpcpInitSystem @ 0x14057C1B8 (AlpcpInitSystem.c)
 *     TtmInit @ 0x1405801D4 (TtmInit.c)
 *     IoCreateObjectTypes @ 0x14079E844 (IoCreateObjectTypes.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14000BB50 (ObpReleaseLookupContext.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF410 (ObpLockDirectoryExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F6230 (RtlUnicodeStringToAnsiString.c)
 *     ObpLookupDirectoryEntryEx @ 0x14040BDB0 (ObpLookupDirectoryEntryEx.c)
 *     ObpAllocateObject @ 0x14041A9D0 (ObpAllocateObject.c)
 *     ObpInsertDirectoryEntry @ 0x1404B1AD4 (ObpInsertDirectoryEntry.c)
 *     ObpInitObjectTypeSD @ 0x140552BD4 (ObpInitObjectTypeSD.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406858F8 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING UnicodeString,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // r13
  __int64 v6; // r12
  unsigned __int16 Length; // cx
  char v11; // al
  unsigned __int8 v12; // r15
  wchar_t *Buffer; // rdx
  int v14; // ecx
  wchar_t v15; // ax
  _OWORD *v16; // rbx
  UNICODE_STRING v17; // xmm6
  int v18; // ebx
  __int64 v19; // rax
  _QWORD *v20; // rbx
  bool v21; // zf
  int inited; // r14d
  char v23; // r12
  unsigned __int64 v24; // r14
  unsigned __int16 v25; // r14
  char *PoolWithTag; // rax
  char *v27; // r13
  char *v28; // r8
  unsigned int v29; // ecx
  int v30; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v32; // rsi
  _BYTE *v33; // rax
  _BYTE *v34; // rdi
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  PVOID *v37; // rdx
  char *v38; // rdi
  unsigned int v39; // eax
  __int64 *v40; // rdi
  signed __int64 v41; // rax
  signed __int64 v42; // rcx
  __int64 v43; // rtt
  int v44; // ecx
  __int64 v45; // rdx
  __int64 result; // rax
  unsigned int MaximumLength; // r9d
  char *v48; // rdx
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  unsigned int v56; // edi
  int v57; // [rsp+48h] [rbp-C0h]
  __int64 v59; // [rsp+60h] [rbp-A8h] BYREF
  size_t DestinationString; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  _STRING v62; // [rsp+80h] [rbp-88h] BYREF
  __int128 v63; // [rsp+90h] [rbp-78h] BYREF
  __int16 v64; // [rsp+AEh] [rbp-5Ah]
  int v65; // [rsp+B0h] [rbp-58h]
  _DWORD v66[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v67[14]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = a5;
  v6 = a4;
  if ( !UnicodeString
    || (Length = UnicodeString->Length) == 0
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEE00D) != 0
    || *(_WORD *)a2 != 120
    || (*((_BYTE *)a2 + 3) & 0xFE) != 0
    || (v11 = *((_BYTE *)a2 + 2), (v11 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v11 & 4) == 0 && (*((_DWORD *)a2 + 9) & 0xFFFFFDFF) != 0 && (a4 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  v12 = 2;
  Buffer = UnicodeString->Buffer;
  v14 = Length >> 1;
  v57 = *((_DWORD *)a2 + 9);
  while ( v14 )
  {
    v15 = *Buffer;
    --v14;
    ++Buffer;
    if ( v15 == 92 )
      return 3221225523LL;
  }
  v64 = 0;
  v65 = -60876;
  v63 = 0LL;
  if ( ObpTypeDirectoryObject )
  {
    ObpLockDirectoryExclusive((__int64)&v63, (__int64)ObpTypeDirectoryObject);
    if ( ObpLookupDirectoryEntryEx(
           (unsigned __int64 *)ObpTypeDirectoryObject,
           &UnicodeString->Length,
           64,
           0,
           0,
           (__int64)&v63) )
    {
      v56 = -1073741771;
LABEL_77:
      ObpReleaseLookupContext((__int64)&v63);
      return v56;
    }
  }
  DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, UnicodeString->MaximumLength, 0x6D4E624Fu);
  if ( !DestinationString_8.Buffer )
  {
    v56 = -1073741670;
    goto LABEL_77;
  }
  DestinationString_8.MaximumLength = UnicodeString->MaximumLength;
  RtlCopyUnicodeString(&DestinationString_8, UnicodeString);
  v16 = ObpTypeObjectType;
  v17 = DestinationString_8;
  if ( !ObpTypeObjectType )
  {
    memset(v67, 0, 0xD8uLL);
    v49 = *a2;
    BYTE8(v67[2]) = 2;
    v16 = v67;
    v50 = a2[1];
    LODWORD(v67[12]) = 1416258127;
    v67[4] = v49;
    v51 = a2[2];
    v67[5] = v50;
    v52 = a2[3];
    v67[6] = v51;
    v53 = a2[4];
    v67[7] = v52;
    v54 = a2[5];
    v67[8] = v53;
    v55 = a2[6];
    v67[9] = v54;
    *(_QWORD *)&v54 = *((_QWORD *)a2 + 14);
    v67[10] = v55;
    *(_QWORD *)&v67[11] = v54;
    v67[1] = DestinationString_8;
  }
  memset(v66, 0, sizeof(v66));
  v66[0] = 16;
  v66[5] = *((_DWORD *)v16 + 26);
  v66[6] = *((_DWORD *)v16 + 27);
  v66[7] = 2048;
  v18 = ObpAllocateObject(v66, 0, (__int64)v16, (__int128 *)&DestinationString_8, 216, &v59, 0LL);
  if ( v18 < 0 )
  {
    ObpReleaseLookupContext((__int64)&v63);
    ExFreePoolWithTag(DestinationString_8.Buffer, 0);
    return (unsigned int)v18;
  }
  else
  {
    v19 = v59;
    *(_QWORD *)(v59 + 32) = 0LL;
    v20 = (_QWORD *)(v19 + 48);
    v21 = (_DWORD)InitializationPhase == 0;
    *(UNICODE_STRING *)(v19 + 64) = v17;
    if ( v21 || (inited = ObpInitObjectTypeSD(v19 + 48, a3), inited >= 0) )
    {
      *(_QWORD *)((char *)v20 + 44) = 0LL;
      *(_QWORD *)((char *)v20 + 52) = 0LL;
      *((_DWORD *)v20 + 15) = 0;
      if ( ObpTypeObjectType )
      {
        v23 = 1;
        if ( (_BYTE)NlsMbCodePageTag )
          LOWORD(v24) = RtlxUnicodeStringToOemSize(UnicodeString);
        else
          v24 = ((unsigned __int64)UnicodeString->Length + 2) >> 1;
        v25 = ((v24 + 2) & 0xFFFC) + 1;
        DestinationString = v25;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v25, 0x6E54624Fu);
        v27 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_80;
        memset(PoolWithTag, 0, DestinationString);
        v62.MaximumLength = v25;
        v62.Buffer = v27;
        if ( RtlUnicodeStringToAnsiString(&v62, UnicodeString, 0) >= 0 )
        {
          v28 = v62.Buffer;
          v29 = UnicodeString->Length >> 1;
          if ( v29 < 4 )
          {
            MaximumLength = v62.MaximumLength;
            v48 = &v62.Buffer[v29];
            do
            {
              if ( v29 < MaximumLength )
                *v48 = 32;
              ++v29;
              ++v48;
            }
            while ( v29 < 4 );
          }
          v23 = 0;
          *((_DWORD *)v20 + 48) = *(_DWORD *)v28;
        }
        ExFreePoolWithTag(v27, 0);
        if ( v23 )
        {
LABEL_80:
          v6 = a4;
          v5 = a5;
          if ( UnicodeString->Length < 4u )
            *((_DWORD *)v20 + 48) = 1063936591;
          else
            *((_DWORD *)v20 + 48) = *(_DWORD *)UnicodeString->Buffer;
        }
        else
        {
          v6 = a4;
          v5 = a5;
        }
      }
      else
      {
        ObpTypeObjectType = v20;
        *((_DWORD *)v20 + 11) = 1;
        *((_DWORD *)v20 + 48) = 1416258127;
      }
      *((_OWORD *)v20 + 4) = *a2;
      *((_OWORD *)v20 + 5) = a2[1];
      *((_OWORD *)v20 + 6) = a2[2];
      *((_OWORD *)v20 + 7) = a2[3];
      *((_OWORD *)v20 + 8) = a2[4];
      *((_OWORD *)v20 + 9) = a2[5];
      *((_OWORD *)v20 + 10) = a2[6];
      v20[22] = *((_QWORD *)a2 + 14);
      *((_DWORD *)v20 + 25) = v57;
      if ( (NtGlobalFlag & 0x4000) != 0 )
        *((_BYTE *)v20 + 66) |= 0x20u;
      v30 = (*((_BYTE *)a2 + 2) & 0x10) + 88;
      if ( (v57 & 1) != 0 )
        *((_DWORD *)v20 + 26) += v30;
      else
        *((_DWORD *)v20 + 27) += v30;
      if ( !*((_QWORD *)a2 + 11) )
        v20[19] = SeDefaultObjectMethod;
      v20[23] = 0LL;
      v20[1] = v20;
      *v20 = v20;
      v20[26] = v20 + 25;
      v20[25] = v20 + 25;
      if ( (*((_BYTE *)v20 + 66) & 4) != 0 )
      {
        *((_DWORD *)v20 + 23) |= 0x100000u;
        v20[4] = &ObpDefaultObject;
      }
      else
      {
        v20[4] = v6;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v32 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
      v33 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0);
      v34 = v33;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
        ExfAcquirePushLockExclusiveEx(v32, v33, (ULONG_PTR)v32);
      if ( v34 )
        v34[26] |= 1u;
      if ( (*(_BYTE *)(v59 + 26) & 1) != 0 )
        v35 = (_QWORD *)(v59 - 32);
      else
        v35 = 0LL;
      v36 = ObpTypeObjectType;
      v37 = (PVOID *)*((_QWORD *)ObpTypeObjectType + 1);
      if ( *v37 != ObpTypeObjectType )
        __fastfail(3u);
      *v35 = ObpTypeObjectType;
      v35[1] = v37;
      *v37 = v35;
      v36[1] = v35;
      v38 = (char *)ObpTypeObjectType;
      v39 = *((_DWORD *)ObpTypeObjectType + 11);
      if ( v39 < 0x30 )
        ObpObjectTypes[v39 - 1] = (__int64)v20;
      v40 = (__int64 *)(v38 + 184);
      _m_prefetchw(v40);
      v41 = *v40;
      if ( (*v40 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v42 = v41 - 16;
      else
        v42 = 0LL;
      if ( (v41 & 2) != 0 || (v43 = *v40, v43 != _InterlockedCompareExchange64(v40, v42, v41)) )
        ExfReleasePushLock(v40);
      KeAbPostRelease((ULONG_PTR)v40);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v20 != ObpTypeObjectType )
      {
        v44 = 3;
        v45 = 3LL;
        while ( _InterlockedCompareExchange64(&ObTypeIndexTable[v45], 1LL, 0LL) )
        {
          v45 = ++v44;
          if ( (unsigned __int64)v44 >= 0x100 )
          {
            inited = -1073741823;
            goto LABEL_88;
          }
        }
        v12 = v44;
      }
      ObTypeIndexTable[v12] = (__int64)v20;
      *((_BYTE *)v20 + 40) = v12;
      if ( !ObpTypeDirectoryObject
        || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)v20, (__int64)&v63) )
      {
        ObpReleaseLookupContext((__int64)&v63);
        result = 0LL;
        *v5 = v20;
        return result;
      }
      ObTypeIndexTable[v12] = 0LL;
      inited = -1073741670;
    }
LABEL_88:
    ObpReleaseLookupContext((__int64)&v63);
    ObfDereferenceObject(v20);
    return (unsigned int)inited;
  }
}
