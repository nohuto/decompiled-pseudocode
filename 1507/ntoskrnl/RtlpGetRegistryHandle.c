/*
 * XREFs of RtlpGetRegistryHandle @ 0x1404AAC78
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1404A8598 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCheckRegistryKey @ 0x1404A9128 (RtlCheckRegistryKey.c)
 *     RtlWriteRegistryValue @ 0x1404AA384 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A63CC (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1405A65F0 (RtlSetActiveTimeBias.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1405A67DC (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlDeleteRegistryValue @ 0x1405BF730 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1405C2AE0 (RtlCreateRegistryKey.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406CC07C (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404FF914 (RtlFormatCurrentUserKeyPath.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  unsigned int v7; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v11; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v17; // eax
  struct _KPRCB *v18; // rcx
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v20; // r8
  UNICODE_STRING Destination; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING KeyPath; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  v7 = a1;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
    return 0LL;
  }
  else
  {
    if ( a1 < 0 )
      v7 = a1 & 0x7FFFFFFF;
    if ( v7 < 6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v11 )
        goto LABEL_10;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v11
        || (Size = L->Size,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            (v11 = (wchar_t *)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
      {
LABEL_10:
        *(_DWORD *)v11 = CurrentPrcb->Number;
      }
      Destination.Buffer = v11;
      if ( v11 )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !v7 )
          goto LABEL_20;
        if ( v7 == 5 && RtlFormatCurrentUserKeyPath(&KeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &KeyPath);
          RtlFreeAnsiString(&KeyPath);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)RtlpRegistryPaths[v7]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_20:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v17 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v17 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v17;
            }
          }
        }
        v18 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v20 = v18->PPLookasideList[8].P;
        ++v20->TotalFrees;
        if ( LOWORD(v20->ListHead.Alignment) < v20->Depth
          || (++v20->FreeMisses,
              v20 = v18->PPLookasideList[8].L,
              ++v20->TotalFrees,
              LOWORD(v20->ListHead.Alignment) < v20->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v20->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v20->FreeMisses;
          ((void (__fastcall *)(wchar_t *))v20->FreeEx)(Buffer);
        }
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
}
