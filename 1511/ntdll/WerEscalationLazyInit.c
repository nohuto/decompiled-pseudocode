/*
 * XREFs of WerEscalationLazyInit @ 0x18008C318
 * Callers:
 *     WerReportSQMEvent @ 0x18008C270 (WerReportSQMEvent.c)
 * Callees:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800058A8 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     RtlLengthSidAsUnicodeString @ 0x180019190 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180019220 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x18008C654 (WerpEscalationIsWMRSendStringSet.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x18008C6EC (HashStringToDwordCaseInsensitiveLen.c)
 *     StringCchCopyW @ 0x18008C750 (StringCchCopyW.c)
 *     WerpEscalationIsDisabled @ 0x18008C7D0 (WerpEscalationIsDisabled.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A7390 (NtOpenProcessToken.c)
 */

__int64 WerEscalationLazyInit()
{
  __int64 v0; // rax
  NTSTATUS appended; // ebx
  signed __int64 v2; // rdi
  char *v3; // r15
  char *v4; // rsi
  unsigned int v5; // r12d
  unsigned __int16 *Buffer; // r14
  HRESULT v7; // eax
  unsigned __int16 *i; // rcx
  char *v9; // r14
  unsigned int v10; // eax
  unsigned __int16 v11; // bx
  _WORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rdx
  unsigned __int64 v16; // rcx
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
    goto LABEL_29;
  RegionSize = 568LL;
  BaseAddress = 0LL;
  appended = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( appended >= 0 )
  {
    v2 = (signed __int64)BaseAddress;
    v3 = (char *)BaseAddress + RegionSize;
    v4 = (char *)BaseAddress + 568;
    if ( (char *)BaseAddress + 568 > (char *)BaseAddress + RegionSize )
      goto LABEL_38;
    v5 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v7 = StringCchCopyW((STRSAFE_LPWSTR)BaseAddress, 0x104uLL, Buffer);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147024774 )
      goto LABEL_31;
    for ( i = &Buffer[v5 - 1]; i > Buffer; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    *(_DWORD *)(v2 + 520) = HashStringToDwordCaseInsensitiveLen(i, v5 - (unsigned int)(i - Buffer));
    WerEscalationReadImageVersionInfoForModuleBaseSafe(NtCurrentPeb()->ImageBaseAddress, 0);
    *(_DWORD *)(v2 + 532) = v21;
    *(_DWORD *)(v2 + 524) = v22;
    *(_DWORD *)(v2 + 528) = v23;
    appended = NtOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
    if ( appended < 0 )
      goto LABEL_31;
    ReturnLength = (_DWORD)v3 - (_DWORD)v4;
    appended = NtQueryInformationToken(TokenHandle, 1u, v4, (_DWORD)v3 - (_DWORD)v4, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_31;
    v9 = &v4[8 * (((unsigned __int64)ReturnLength + 7) >> 3)];
    if ( v9 > v3 )
      goto LABEL_38;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v4;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( NtQueryInformationToken(TokenHandle, 0x12u, &TokenInformation, 4u, &ReturnLength) >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( TokenInformation == 1 )
      {
        v10 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v4 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v4 + 1LL) - 1) + 8) == 500 )
          v10 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v10;
      }
    }
    appended = RtlLengthSidAsUnicodeString(*(PSID *)(v2 + 536), &StringLength);
    if ( appended < 0 )
      goto LABEL_31;
    v11 = StringLength;
    v12 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v9;
    v13 = (unsigned __int16)(v11 + 90);
    *(_WORD *)(v2 + 546) = v13;
    if ( &v9[v13] > v3 )
    {
LABEL_38:
      appended = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\REGISTRY\\USER\\");
      v14 = *(_QWORD *)(v2 + 552);
      v15 = *(void **)(v2 + 536);
      v16 = (unsigned __int64)(unsigned __int16)*v12 >> 1;
      UnicodeString.MaximumLength = v11;
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (unsigned __int16 *)(v14 + 2 * v16);
      appended = RtlConvertSidToUnicodeString(&UnicodeString, v15, 0);
      if ( appended >= 0 )
      {
        *v12 += UnicodeString.Length;
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\Software\\Microsoft\\Windows");
        if ( appended >= 0 )
        {
          *(_DWORD *)(v2 + 564) = WerpEscalationIsWMRSendStringSet();
          v2 &= -(__int64)(_InterlockedCompareExchange64(&g_werEscalationData, v2, 0LL) != 0);
LABEL_29:
          if ( g_sqmSessionHandle != -1 )
            appended = 0;
        }
      }
    }
LABEL_31:
    if ( v2 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)appended;
}
