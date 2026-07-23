/*
 * XREFs of RtlpGetRegistryHandle @ 0x1404DDD78
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x140494D2C (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlWriteRegistryValue @ 0x1404C3EE8 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x1404CF978 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14055F670 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x14055F894 (RtlSetActiveTimeBias.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x14055FA80 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlDeleteRegistryValue @ 0x14057D200 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x140581804 (RtlCreateRegistryKey.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406886A0 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403F68E0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  unsigned int v7; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v10; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v12; // eax
  struct _KPRCB *v13; // rcx
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v15; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
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
    if ( v7 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v10 = (wchar_t *)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v10 )
        goto LABEL_6;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v10 = (wchar_t *)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v10
        || (Size = L->Size,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            (v10 = (wchar_t *)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
      {
LABEL_6:
        *(_DWORD *)v10 = CurrentPrcb->Number;
      }
      Destination.Buffer = v10;
      if ( v10 )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !v7 )
          goto LABEL_13;
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
LABEL_13:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v12 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v12 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v12;
            }
          }
        }
        v13 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v15 = v13->PPLookasideList[8].P;
        ++v15->TotalFrees;
        if ( LOWORD(v15->ListHead.Alignment) < v15->Depth
          || (++v15->FreeMisses,
              v15 = v13->PPLookasideList[8].L,
              ++v15->TotalFrees,
              LOWORD(v15->ListHead.Alignment) < v15->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v15->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v15->FreeMisses;
          ((void (__fastcall *)(wchar_t *))v15->FreeEx)(Buffer);
        }
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
