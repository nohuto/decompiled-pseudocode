/*
 * XREFs of ??0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@PEBGU_FILETIME@@@Z @ 0x180034A0C
 * Callers:
 *     ??$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEBGU_FILETIME@@@std@@YA?AV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@0@$$QEAPEBG$$QEAU_FILETIME@@@Z @ 0x1800388FC (--$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentMan.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180032888 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180032BB4 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue::SubscriptionMapValue(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *this,
        const unsigned __int16 *a2,
        struct _FILETIME a3)
{
  void *v6; // r14
  DWORD LastError; // edi
  void *v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  const WCHAR *v11; // rdx
  HANDLE v12; // rax
  signed int v13; // eax
  signed int v14; // ecx
  const WCHAR *v15; // r8
  HANDLE v16; // rax
  signed int v17; // eax
  signed int v18; // ecx
  const char *v19; // r9
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-60h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *v24; // [rsp+48h] [rbp-38h]
  LPCWSTR lpName[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v23 = -2LL;
  v24 = this;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v6 = *(void **)this;
  if ( (unsigned __int64)(*(_QWORD *)this - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v6);
    SetLastError(LastError);
  }
  *(_QWORD *)this = 0LL;
  CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId(lpName, (__int64)a2);
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;FA;;;IU)(A;;FA;;;SY)(A;;GA;;;S-1-15-2-350187224-1905355452-1037786396-3028148496-2624191407-3283318427-1255436723)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    wil::details::in1diag3::_Throw_GetLastError(retaddr, v8, v9, v10);
    __debugbreak();
  }
  EventAttributes.nLength = 24;
  EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
  EventAttributes.bInheritHandle = 0;
  v11 = (const WCHAR *)lpName;
  if ( v26 >= 8 )
    v11 = lpName[0];
  v12 = CreateEventExW(&EventAttributes, v11, 0, 0x1F0003u);
  *(_QWORD *)this = v12;
  if ( v12 )
  {
    v14 = 0;
  }
  else
  {
    v13 = GetLastError();
    v14 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      v14 = v13;
    if ( v14 >= 0 )
      v14 = -2147467259;
  }
  if ( v14 < 0 )
  {
    v15 = (const WCHAR *)lpName;
    if ( v26 >= 8 )
      v15 = lpName[0];
    v16 = OpenEventW(0xF0000u, 0, v15);
    *(_QWORD *)this = v16;
    if ( v16 )
    {
      v18 = 0;
    }
    else
    {
      v17 = GetLastError();
      v18 = (unsigned __int16)v17 | 0x80070000;
      if ( v17 <= 0 )
        v18 = v17;
      if ( v18 >= 0 )
        v18 = -2147467259;
    }
    v19 = 0LL;
    if ( v18 < 0 )
      v19 = (const char *)(unsigned int)v18;
    if ( (int)v19 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xB6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\subscribedcontentstore.h",
        v19);
  }
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( v26 >= 8 )
    operator delete((void *)lpName[0]);
  *((struct _FILETIME *)this + 4) = a3;
  return this;
}
