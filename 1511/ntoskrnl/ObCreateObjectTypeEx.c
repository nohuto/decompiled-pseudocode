/*
 * XREFs of ObCreateObjectTypeEx @ 0x140525B54
 * Callers:
 *     ObCreateObjectType @ 0x140525B3C (ObCreateObjectType.c)
 *     AlpcpInitSystem @ 0x140547BD8 (AlpcpInitSystem.c)
 *     IoCreateObjectTypes @ 0x14075A078 (IoCreateObjectTypes.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     ObpReleaseLookupContext @ 0x14009C320 (ObpReleaseLookupContext.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF104 (ObpLockDirectoryExclusive.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     ObpAllocateObject @ 0x1404065F0 (ObpAllocateObject.c)
 *     ObpInsertDirectoryEntry @ 0x1404AA9B4 (ObpInsertDirectoryEntry.c)
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 *     RtlxUnicodeStringToOemSize @ 0x140644BE0 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING SourceString,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // r12
  __int64 v6; // r14
  unsigned __int16 Length; // cx
  char v10; // al
  unsigned __int8 v11; // r15
  wchar_t *Buffer; // rdx
  int v13; // ecx
  wchar_t v14; // ax
  unsigned int v15; // edi
  __int64 result; // rax
  _OWORD *v17; // rbx
  UNICODE_STRING v18; // xmm6
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  int v26; // ebx
  __int64 v27; // rax
  _BYTE *v28; // rbx
  char v29; // r12
  unsigned __int64 v30; // r14
  unsigned __int16 v31; // r14
  char *PoolWithTag; // rax
  char *v33; // r13
  char *v34; // r8
  unsigned int v35; // ecx
  unsigned int MaximumLength; // r9d
  char *v37; // rdx
  int v38; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdi
  _QWORD *v43; // rax
  _QWORD *v44; // rcx
  PVOID *v45; // rdx
  char *v46; // rdi
  unsigned int v47; // eax
  __int64 *v48; // rdi
  signed __int64 v49; // rax
  signed __int64 v50; // rcx
  __int64 v51; // rtt
  int v52; // ecx
  __int64 v53; // rdx
  int v55; // [rsp+50h] [rbp-B8h]
  __int64 DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  _STRING v58; // [rsp+80h] [rbp-88h] BYREF
  __int64 v59[2]; // [rsp+90h] [rbp-78h] BYREF
  __int16 v60; // [rsp+AEh] [rbp-5Ah]
  int v61; // [rsp+B0h] [rbp-58h]
  _DWORD v62[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v63[14]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = a5;
  v6 = a4;
  if ( !SourceString
    || (Length = SourceString->Length) == 0
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEE00D) != 0
    || *(_WORD *)a2 != 120
    || (v10 = *((_BYTE *)a2 + 2), (v10 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v10 & 4) == 0 && (*((_DWORD *)a2 + 9) & 0xFFFFFDFF) != 0 && (a4 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  v11 = 2;
  Buffer = SourceString->Buffer;
  v13 = Length >> 1;
  v55 = *((_DWORD *)a2 + 9);
  if ( !v13 )
  {
LABEL_16:
    v60 = 0;
    v61 = -60876;
    *(_OWORD *)v59 = 0LL;
    if ( ObpTypeDirectoryObject
      && (ObpLockDirectoryExclusive((__int64)v59, (__int64)ObpTypeDirectoryObject),
          ObpLookupDirectoryEntryEx(ObpTypeDirectoryObject, 0, (__int64)v59)) )
    {
      v15 = -1073741771;
    }
    else
    {
      DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString->MaximumLength, 0x6D4E624Fu);
      if ( DestinationString_8.Buffer )
      {
        DestinationString_8.MaximumLength = SourceString->MaximumLength;
        RtlCopyUnicodeString(&DestinationString_8, SourceString);
        v17 = ObpTypeObjectType;
        v18 = DestinationString_8;
        if ( !ObpTypeObjectType )
        {
          memset(v63, 0, 0xD8uLL);
          v19 = *a2;
          BYTE8(v63[2]) = 2;
          v17 = v63;
          v20 = a2[1];
          LODWORD(v63[12]) = 1416258127;
          v63[4] = v19;
          v21 = a2[2];
          v63[5] = v20;
          v22 = a2[3];
          v63[6] = v21;
          v23 = a2[4];
          v63[7] = v22;
          v24 = a2[5];
          v63[8] = v23;
          v25 = a2[6];
          v63[9] = v24;
          *(_QWORD *)&v24 = *((_QWORD *)a2 + 14);
          v63[10] = v25;
          *(_QWORD *)&v63[11] = v24;
          v63[1] = DestinationString_8;
        }
        memset(v62, 0, sizeof(v62));
        v62[0] = 16;
        v62[5] = *((_DWORD *)v17 + 26);
        v62[6] = *((_DWORD *)v17 + 27);
        v62[7] = 2048;
        v26 = ObpAllocateObject(v62, 0, (__int64)v17, (__int128 *)&DestinationString_8, 216, &DestinationString, 0LL);
        if ( v26 < 0 )
        {
          ObpReleaseLookupContext((__int64)v59);
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
          return (unsigned int)v26;
        }
        v27 = DestinationString;
        *(_QWORD *)(DestinationString + 32) = 0LL;
        v28 = (_BYTE *)(v27 + 48);
        *(UNICODE_STRING *)(v27 + 64) = v18;
        *(_QWORD *)(v27 + 92) = 0LL;
        *(_QWORD *)(v27 + 100) = 0LL;
        *(_DWORD *)(v27 + 108) = 0;
        if ( ObpTypeObjectType )
        {
          v29 = 1;
          if ( (_BYTE)NlsMbCodePageTag )
            LOWORD(v30) = RtlxUnicodeStringToOemSize(SourceString);
          else
            v30 = ((unsigned __int64)SourceString->Length + 2) >> 1;
          v31 = ((v30 + 2) & 0xFFFC) + 1;
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v31, 0x6E54624Fu);
          v33 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_47;
          memset(PoolWithTag, 0, v31);
          v58.MaximumLength = v31;
          v58.Buffer = v33;
          if ( RtlUnicodeStringToAnsiString(&v58, SourceString, 0) >= 0 )
          {
            v34 = v58.Buffer;
            v35 = SourceString->Length >> 1;
            if ( v35 < 4 )
            {
              MaximumLength = v58.MaximumLength;
              v37 = &v58.Buffer[v35];
              do
              {
                if ( v35 < MaximumLength )
                  *v37 = 32;
                ++v35;
                ++v37;
              }
              while ( v35 < 4 );
            }
            v29 = 0;
            *((_DWORD *)v28 + 48) = *(_DWORD *)v34;
          }
          ExFreePoolWithTag(v33, 0);
          if ( v29 )
          {
LABEL_47:
            v6 = a4;
            v5 = a5;
            if ( SourceString->Length < 4u )
              *((_DWORD *)v28 + 48) = 1063936591;
            else
              *((_DWORD *)v28 + 48) = *(_DWORD *)SourceString->Buffer;
          }
          else
          {
            v6 = a4;
            v5 = a5;
          }
        }
        else
        {
          ObpTypeObjectType = (PVOID)(v27 + 48);
          *(_DWORD *)(v27 + 92) = 1;
          *(_DWORD *)(v27 + 240) = 1416258127;
        }
        *((_OWORD *)v28 + 4) = *a2;
        *((_OWORD *)v28 + 5) = a2[1];
        *((_OWORD *)v28 + 6) = a2[2];
        *((_OWORD *)v28 + 7) = a2[3];
        *((_OWORD *)v28 + 8) = a2[4];
        *((_OWORD *)v28 + 9) = a2[5];
        *((_OWORD *)v28 + 10) = a2[6];
        *((_QWORD *)v28 + 22) = *((_QWORD *)a2 + 14);
        *((_DWORD *)v28 + 25) = v55;
        if ( (NtGlobalFlag & 0x4000) != 0 )
          v28[66] |= 0x20u;
        v38 = (*((_BYTE *)a2 + 2) & 0x10) + 88;
        if ( (v55 & 1) != 0 )
          *((_DWORD *)v28 + 26) += v38;
        else
          *((_DWORD *)v28 + 27) += v38;
        if ( !*((_QWORD *)a2 + 11) )
          *((_QWORD *)v28 + 19) = SeDefaultObjectMethod;
        *((_QWORD *)v28 + 23) = 0LL;
        *((_QWORD *)v28 + 1) = v28;
        *(_QWORD *)v28 = v28;
        *((_QWORD *)v28 + 26) = v28 + 200;
        *((_QWORD *)v28 + 25) = v28 + 200;
        if ( (v28[66] & 4) != 0 )
        {
          *((_DWORD *)v28 + 23) |= 0x100000u;
          *((_QWORD *)v28 + 4) = &ObpDefaultObject;
        }
        else
        {
          *((_QWORD *)v28 + 4) = v6;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v40 = (unsigned __int64 *)((char *)ObpTypeObjectType + 184);
        v41 = KeAbPreAcquire((ULONG_PTR)ObpTypeObjectType + 184, 0LL, 0LL);
        v42 = v41;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v40, 0LL) )
          ExfAcquirePushLockExclusiveEx(v40, v41, (ULONG_PTR)v40);
        if ( v42 )
          *(_BYTE *)(v42 + 26) |= 1u;
        v43 = (_QWORD *)(DestinationString - 32);
        if ( (*(_BYTE *)(DestinationString + 26) & 1) == 0 )
          v43 = 0LL;
        v44 = ObpTypeObjectType;
        v45 = (PVOID *)*((_QWORD *)ObpTypeObjectType + 1);
        *v43 = ObpTypeObjectType;
        v43[1] = v45;
        if ( *v45 != v44 )
          __fastfail(3u);
        *v45 = v43;
        v44[1] = v43;
        v46 = (char *)ObpTypeObjectType;
        v47 = *((_DWORD *)ObpTypeObjectType + 11);
        if ( v47 < 0x30 )
          ObpObjectTypes[v47 - 1] = (__int64)v28;
        v48 = (__int64 *)(v46 + 184);
        _m_prefetchw(v48);
        v49 = *v48;
        v50 = *v48 - 16;
        if ( (*v48 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v50 = 0LL;
        if ( (v49 & 2) != 0 || (v51 = *v48, v51 != _InterlockedCompareExchange64(v48, v50, v49)) )
          ExfReleasePushLock(v48);
        KeAbPostRelease((ULONG_PTR)v48);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        if ( v28 != ObpTypeObjectType )
        {
          v52 = 3;
          v53 = 3LL;
          while ( _InterlockedCompareExchange64(&ObTypeIndexTable[v53], 1LL, 0LL) )
          {
            v53 = ++v52;
            if ( (unsigned __int64)v52 >= 0x100 )
            {
              v15 = -1073741823;
              goto LABEL_80;
            }
          }
          v11 = v52;
        }
        ObTypeIndexTable[v11] = (__int64)v28;
        v28[40] = v11;
        if ( !ObpTypeDirectoryObject || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, v28, (__int64)v59) )
        {
          ObpReleaseLookupContext((__int64)v59);
          result = 0LL;
          *v5 = v28;
          return result;
        }
        ObTypeIndexTable[v11] = 0LL;
        v15 = -1073741670;
LABEL_80:
        ObpReleaseLookupContext((__int64)v59);
        ObfDereferenceObject(v28);
        return v15;
      }
      v15 = -1073741670;
    }
    ObpReleaseLookupContext((__int64)v59);
    return v15;
  }
  while ( 1 )
  {
    v14 = *Buffer;
    --v13;
    ++Buffer;
    if ( v14 == 92 )
      return 3221225523LL;
    if ( !v13 )
      goto LABEL_16;
  }
}
