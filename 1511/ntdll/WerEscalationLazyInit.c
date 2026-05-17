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
  int InformationToken; // ebx
  signed __int64 v2; // rdi
  wchar_t *v3; // r15
  STRSAFE_LPWSTR v4; // rsi
  unsigned int v5; // r12d
  unsigned __int16 *Buffer; // r14
  HRESULT v7; // eax
  unsigned __int16 *i; // rcx
  wchar_t *v9; // r14
  unsigned int v10; // eax
  unsigned __int16 v11; // bx
  _WORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v22[6]; // [rsp+50h] [rbp-18h] BYREF
  int v23; // [rsp+B8h] [rbp+50h] BYREF
  int v24; // [rsp+C0h] [rbp+58h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+C8h] [rbp+60h] BYREF

  v0 = g_werEscalationData;
  Handle = 0LL;
  InformationToken = -1073741823;
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
    goto LABEL_29;
  v20 = 568LL;
  pszDest = 0LL;
  InformationToken = ZwAllocateVirtualMemory(-1LL, &pszDest, 0LL, &v20, 4096, 4);
  if ( InformationToken >= 0 )
  {
    v2 = (signed __int64)pszDest;
    v3 = (STRSAFE_LPWSTR)((char *)pszDest + v20);
    v4 = pszDest + 284;
    if ( pszDest + 284 > (STRSAFE_LPWSTR)((char *)pszDest + v20) )
      goto LABEL_38;
    v5 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v7 = StringCchCopyW(pszDest, 0x104uLL, Buffer);
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
    WerEscalationReadImageVersionInfoForModuleBaseSafe((__int64)NtCurrentPeb()->ImageBaseAddress, 0, (__int64)v22);
    *(_DWORD *)(v2 + 532) = v22[0];
    *(_DWORD *)(v2 + 524) = v22[2];
    *(_DWORD *)(v2 + 528) = v22[3];
    InformationToken = NtOpenProcessToken(-1LL, 8LL, &Handle);
    if ( InformationToken < 0 )
      goto LABEL_31;
    InformationToken = NtQueryInformationToken(Handle, 1LL, v4);
    if ( InformationToken < 0 )
      goto LABEL_31;
    v9 = &v4[4 * (((unsigned __int64)(unsigned int)((_DWORD)v3 - (_DWORD)v4) + 7) >> 3)];
    if ( v9 > v3 )
      goto LABEL_38;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v4;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( (int)NtQueryInformationToken(Handle, 18LL, &v23) >= 0 )
    {
      if ( v23 == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( v23 == 1 )
      {
        v10 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v4 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v4 + 1LL) - 1) + 8) == 500 )
          v10 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v10;
      }
    }
    InformationToken = RtlLengthSidAsUnicodeString(*(unsigned __int8 **)(v2 + 536), &v24);
    if ( InformationToken < 0 )
      goto LABEL_31;
    v11 = v24;
    v12 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v9;
    v13 = (unsigned __int16)(v11 + 90);
    *(_WORD *)(v2 + 546) = v13;
    if ( (wchar_t *)((char *)v9 + v13) > v3 )
    {
LABEL_38:
      InformationToken = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((unsigned __int16 *)(v2 + 544), L"\\REGISTRY\\USER\\");
      v14 = *(_QWORD *)(v2 + 552);
      v15 = *(void **)(v2 + 536);
      v16 = (unsigned __int64)(unsigned __int16)*v12 >> 1;
      UnicodeString.MaximumLength = v11;
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (unsigned __int16 *)(v14 + 2 * v16);
      InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v15, 0);
      if ( InformationToken >= 0 )
      {
        *v12 += UnicodeString.Length;
        InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)(v2 + 544), L"\\Software\\Microsoft\\Windows");
        if ( InformationToken >= 0 )
        {
          *(_DWORD *)(v2 + 564) = WerpEscalationIsWMRSendStringSet(v17);
          v2 &= -(__int64)(_InterlockedCompareExchange64(&g_werEscalationData, v2, 0LL) != 0);
LABEL_29:
          if ( g_sqmSessionHandle != -1 )
            InformationToken = 0;
        }
      }
    }
LABEL_31:
    if ( v2 )
      ZwFreeVirtualMemory(-1LL, &pszDest, &v20, 0x8000LL);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)InformationToken;
}
