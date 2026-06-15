/*
 * XREFs of ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180002818
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180002964 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002714 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002750 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v9; // rdx
  DWORD v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v7 = 148LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, (__int64)"wil", v6);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v13 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v13) )
      {
        v7 = 173LL;
        return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, (__int64)"wil", v6);
      }
      if ( v13 )
      {
        v9 = 174LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v9 = 177LL;
        goto LABEL_25;
      }
      v10 = WaitForSingleObject(hHandle, 0);
      if ( v10 == -1 )
      {
        v7 = 180LL;
        return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, (__int64)"wil", v6);
      }
      if ( v10 )
      {
        v9 = 181LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v7 = 157LL;
        return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, (__int64)"wil", v6);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v9 = 163LL;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v9 = 149LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v9, v5, (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
