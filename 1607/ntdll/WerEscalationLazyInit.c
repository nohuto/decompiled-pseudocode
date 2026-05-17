/*
 * XREFs of WerEscalationLazyInit @ 0x1800D91C8
 * Callers:
 *     WerReportSQMEvent @ 0x1800D9540 (WerReportSQMEvent.c)
 * Callees:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18000BF58 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     RtlAppendUnicodeToString @ 0x180013C90 (RtlAppendUnicodeToString.c)
 *     RtlLengthSidAsUnicodeString @ 0x180013D40 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149E0 (RtlConvertSidToUnicodeString.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A8730 (NtOpenProcessToken.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x1800D906C (HashStringToDwordCaseInsensitiveLen.c)
 *     StringCchCopyW @ 0x1800D90D0 (StringCchCopyW.c)
 *     WerpEscalationIsDisabled @ 0x1800D95EC (WerpEscalationIsDisabled.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800D969C (WerpEscalationIsWMRSendStringSet.c)
 */

__int64 WerEscalationLazyInit()
{
  __int64 v0; // rax
  int VirtualMemory; // ebx
  signed __int64 v2; // rdi
  STRSAFE_LPWSTR v4; // r15
  STRSAFE_LPWSTR v5; // rsi
  unsigned int v6; // r12d
  wchar_t *Buffer; // r14
  HRESULT v8; // eax
  unsigned __int16 *i; // rcx
  wchar_t *v10; // r14
  unsigned int v11; // eax
  unsigned __int16 v12; // bx
  _WORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v21[6]; // [rsp+50h] [rbp-18h] BYREF
  int v22; // [rsp+B8h] [rbp+50h]
  int v23; // [rsp+C0h] [rbp+58h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+C8h] [rbp+60h]

  v0 = g_werEscalationData;
  VirtualMemory = -1073741823;
  pszDest = 0LL;
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
  pszDest = 0LL;
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    v2 = (signed __int64)pszDest;
    v4 = pszDest + 284;
    v5 = pszDest + 284;
    v6 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v8 = StringCchCopyW(pszDest, 0x104uLL, Buffer);
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
    WerEscalationReadImageVersionInfoForModuleBaseSafe((__int64)NtCurrentPeb()->ImageBaseAddress, 0, (__int64)v21);
    *(_DWORD *)(v2 + 532) = v21[0];
    *(_DWORD *)(v2 + 524) = v21[2];
    *(_DWORD *)(v2 + 528) = v21[3];
    VirtualMemory = NtOpenProcessToken();
    if ( VirtualMemory < 0 )
      goto LABEL_36;
    VirtualMemory = NtQueryInformationToken();
    if ( VirtualMemory < 0 )
      goto LABEL_36;
    v10 = &v5[4 * (((unsigned __int64)(unsigned int)((_DWORD)v4 - (_DWORD)v5) + 7) >> 3)];
    if ( v10 > v4 )
      goto LABEL_9;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v5;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( (int)NtQueryInformationToken() >= 0 )
    {
      if ( v22 == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( v22 == 1 )
      {
        v11 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v5 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 1LL) - 1) + 8) == 500 )
          v11 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v11;
      }
    }
    VirtualMemory = RtlLengthSidAsUnicodeString(*(unsigned __int8 **)(v2 + 536), &v23);
    if ( VirtualMemory < 0 )
      goto LABEL_36;
    v12 = v23;
    v13 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v10;
    v14 = (unsigned __int16)(v12 + 90);
    *(_WORD *)(v2 + 546) = v14;
    if ( (wchar_t *)((char *)v10 + v14) > v4 )
    {
LABEL_9:
      VirtualMemory = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((unsigned __int16 *)(v2 + 544), L"\\REGISTRY\\USER\\");
      v15 = *(_QWORD *)(v2 + 552);
      v16 = *(void **)(v2 + 536);
      v17 = (unsigned __int64)(unsigned __int16)*v13 >> 1;
      UnicodeString.MaximumLength = v12;
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v15 + 2 * v17);
      VirtualMemory = RtlConvertSidToUnicodeString(&UnicodeString, v16, 0);
      if ( VirtualMemory >= 0 )
      {
        *v13 += UnicodeString.Length;
        VirtualMemory = RtlAppendUnicodeToString((unsigned __int16 *)(v2 + 544), L"\\Software\\Microsoft\\Windows");
        if ( VirtualMemory >= 0 )
        {
          *(_DWORD *)(v2 + 564) = WerpEscalationIsWMRSendStringSet(v19, v18);
          v2 &= -(__int64)(_InterlockedCompareExchange64(&g_werEscalationData, v2, 0LL) != 0);
LABEL_34:
          if ( g_sqmSessionHandle != -1 )
            VirtualMemory = 0;
        }
      }
    }
LABEL_36:
    if ( v2 )
      ZwFreeVirtualMemory();
  }
  return (unsigned int)VirtualMemory;
}
