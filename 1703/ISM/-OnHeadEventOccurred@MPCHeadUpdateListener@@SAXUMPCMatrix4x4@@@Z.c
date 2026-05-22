/*
 * XREFs of ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@@Z @ 0x1800564D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x180056428 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall MPCHeadUpdateListener::OnHeadEventOccurred(__int128 *a1)
{
  __int64 v2; // rax
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  _OWORD *v4; // rax
  __int64 v5; // rax
  BOOL result; // eax
  const char *v7; // r9
  __int128 v8; // [rsp+28h] [rbp-50h]
  __int128 v9; // [rsp+38h] [rbp-40h]
  __int128 v10; // [rsp+48h] [rbp-30h]
  __int128 v11; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  MPCHeadUpdateListener::GetInstance();
  v3 = (struct _RTL_CRITICAL_SECTION *)(v2 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 96));
  v8 = *a1;
  v9 = a1[1];
  v10 = a1[2];
  v11 = a1[3];
  MPCHeadUpdateListener::GetInstance();
  v4[2] = v8;
  v4[3] = v9;
  v4[4] = v10;
  v4[5] = v11;
  if ( v3 )
    LeaveCriticalSection(v3);
  MPCHeadUpdateListener::GetInstance();
  result = SetEvent(*(HANDLE *)(*(_QWORD *)(v5 + 24) + 112LL));
  if ( !result )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86F,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v7);
    __debugbreak();
  }
  return result;
}
