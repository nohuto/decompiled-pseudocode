/*
 * XREFs of GreNamedEscape @ 0x14027EC38
 * Callers:
 *     NtGdiExtEscape @ 0x14027EE60 (NtGdiExtEscape.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140090B44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400C56B0 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1400F94F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     UmfdFontManagement @ 0x1402354F0 (UmfdFontManagement.c)
 *     Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledDeviceUsageNoInline @ 0x14032A1CC (Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GreNamedEscape(wchar_t *Str1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5, void *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v15; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  int CurrentServiceSessionId; // esi
  __int64 v20; // r9
  __int64 v21; // r9
  BOOL v22; // [rsp+40h] [rbp-18h] BYREF
  BOOL v23; // [rsp+44h] [rbp-14h] BYREF
  __int64 v24; // [rsp+48h] [rbp-10h] BYREF

  v13 = 0;
  if ( _wcsicmp(Str1, L"atmlib.dll") )
  {
    if ( _wcsicmp(Str1, L"atmfd.dll") )
      return 3221225474LL;
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
    v10 = (__int64)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        v11 = a2 - 9473;
        if ( (unsigned int)v11 <= 0x13 )
        {
          v12 = (unsigned int)(1 << (a2 - 1));
          _m_prefetchw((char *)CurrentProcessWin32Process + 292);
          v17 = *((_DWORD *)CurrentProcessWin32Process + 73);
          do
          {
            v11 = (unsigned int)v12 | v17;
            v18 = v17;
            v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 292), v11, v17);
          }
          while ( v18 != v17 );
          if ( (v17 & (unsigned int)v12) == 0 )
          {
            CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
            if ( (unsigned int)Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledDeviceUsageNoInline() )
            {
              if ( (unsigned int)dword_1403AAA30 > 5 && tlgKeywordOn((__int64)&dword_1403AAA30, 0x400000000000LL) )
              {
                v23 = a2;
                v24 = 0x1000000LL;
                v22 = CurrentServiceSessionId != 0;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  (__int64)&dword_1403AAA30,
                  (__int64)&unk_14037AD43,
                  v12,
                  v20,
                  (__int64)&v24,
                  (__int64)&v23,
                  (__int64)&v22);
              }
            }
            else if ( (unsigned int)dword_1403AAA30 > 5 && tlgKeywordOn((__int64)&dword_1403AAA30, 0x400000000000LL) )
            {
              v22 = a2;
              v23 = CurrentServiceSessionId != 0;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (__int64)&dword_1403AAA30,
                byte_14037AD03,
                v12,
                v21,
                (__int64)&v22,
                (__int64)&v23);
            }
          }
        }
      }
    }
  }
  if ( a2 == 256 || a2 - 9473 <= 0x13 )
  {
    UmfdHostLifeTimeManager::EnsureUmfdHost(v11, v10, v12);
    return (unsigned int)UmfdFontManagement(0LL, 0LL, a2, a3, a4, a5, a6);
  }
  return v13;
}
