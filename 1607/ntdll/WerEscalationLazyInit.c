/*
 * XREFs of WerEscalationLazyInit @ 0x1800D9288
 * Callers:
 *     WerReportSQMEvent @ 0x1800D9600 (WerReportSQMEvent.c)
 * Callees:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18000BF48 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     RtlAppendUnicodeToString @ 0x180013C80 (RtlAppendUnicodeToString.c)
 *     RtlLengthSidAsUnicodeString @ 0x180013D30 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149D0 (RtlConvertSidToUnicodeString.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A8730 (NtOpenProcessToken.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x1800D912C (HashStringToDwordCaseInsensitiveLen.c)
 *     StringCchCopyW @ 0x1800D9190 (StringCchCopyW.c)
 *     WerpEscalationIsDisabled @ 0x1800D96AC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D975C (WerpEscalationIsWMRSendStringSet.c)
 */

__int64 WerEscalationLazyInit()
{
  __int64 v0; // rax
  NTSTATUS appended; // ebx
  signed __int64 v2; // rdi
  char *v4; // r15
  char *v5; // rsi
  unsigned int v6; // r12d
  wchar_t *Buffer; // r14
  HRESULT v8; // eax
  WCHAR *i; // rcx
  char *v10; // r14
  unsigned int v11; // eax
  unsigned __int16 v12; // bx
  _WORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rdx
  unsigned __int64 v17; // rcx
  HANDLE TokenHandle; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-30h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  int v21; // [rsp+50h] [rbp-18h]
  int v22; // [rsp+58h] [rbp-10h]
  int v23; // [rsp+5Ch] [rbp-Ch]
  ULONG ReturnLength; // [rsp+B0h] [rbp+48h] BYREF
  int TokenInformation; // [rsp+B8h] [rbp+50h] BYREF
  ULONG StringLength; // [rsp+C0h] [rbp+58h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+60h] BYREF

  v0 = g_werEscalationData;
  TokenHandle = 0LL;
  appended = -1073741823;
  BaseAddress = 0LL;
  v2 = 0LL;
  if ( g_werEscalationData && g_sqmSessionHandle != -1 )
    return 0LL;
  if ( !g_disableEscalation )
  {
    g_disableEscalation = WerpEscalationIsDisabled();
    v0 = g_werEscalationData;
  }
  if ( v0 )
    goto LABEL_34;
  RegionSize = 568LL;
  BaseAddress = 0LL;
  appended = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( appended >= 0 )
  {
    v2 = (signed __int64)BaseAddress;
    v4 = (char *)BaseAddress + RegionSize;
    v5 = (char *)BaseAddress + 568;
    if ( (char *)BaseAddress + 568 > (char *)BaseAddress + RegionSize )
      goto LABEL_9;
    v6 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v8 = StringCchCopyW((STRSAFE_LPWSTR)BaseAddress, 0x104uLL, Buffer);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147024774 )
      goto LABEL_36;
    for ( i = &Buffer[v6 - 1]; i > Buffer; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    *(_DWORD *)(v2 + 520) = HashStringToDwordCaseInsensitiveLen(i, v6 - (unsigned int)(i - Buffer));
    WerEscalationReadImageVersionInfoForModuleBaseSafe(NtCurrentPeb()->ImageBaseAddress, 0);
    *(_DWORD *)(v2 + 532) = v21;
    *(_DWORD *)(v2 + 524) = v22;
    *(_DWORD *)(v2 + 528) = v23;
    appended = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
    if ( appended < 0 )
      goto LABEL_36;
    ReturnLength = (_DWORD)v4 - (_DWORD)v5;
    appended = NtQueryInformationToken(TokenHandle, 1u, v5, (_DWORD)v4 - (_DWORD)v5, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_36;
    v10 = &v5[8 * (((unsigned __int64)ReturnLength + 7) >> 3)];
    if ( v10 > v4 )
      goto LABEL_9;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v5;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( NtQueryInformationToken(TokenHandle, 0x12u, &TokenInformation, 4u, &ReturnLength) >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( TokenInformation == 1 )
      {
        v11 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v5 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 1LL) - 1) + 8) == 500 )
          v11 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v11;
      }
    }
    appended = RtlLengthSidAsUnicodeString(*(PSID *)(v2 + 536), &StringLength);
    if ( appended < 0 )
      goto LABEL_36;
    v12 = StringLength;
    v13 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v10;
    v14 = (unsigned __int16)(v12 + 90);
    *(_WORD *)(v2 + 546) = v14;
    if ( &v10[v14] > v4 )
    {
LABEL_9:
      appended = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\REGISTRY\\USER\\");
      v15 = *(_QWORD *)(v2 + 552);
      v16 = *(void **)(v2 + 536);
      v17 = (unsigned __int64)(unsigned __int16)*v13 >> 1;
      UnicodeString.MaximumLength = v12;
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v15 + 2 * v17);
      appended = RtlConvertSidToUnicodeString(&UnicodeString, v16, 0);
      if ( appended >= 0 )
      {
        *v13 += UnicodeString.Length;
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\Software\\Microsoft\\Windows");
        if ( appended >= 0 )
        {
          *(_DWORD *)(v2 + 564) = WerpEscalationIsWMRSendStringSet();
          v2 &= -(__int64)(_InterlockedCompareExchange64(&g_werEscalationData, v2, 0LL) != 0);
LABEL_34:
          if ( g_sqmSessionHandle != -1 )
            appended = 0;
        }
      }
    }
LABEL_36:
    if ( v2 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)appended;
}
