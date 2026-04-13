/*
 * XREFs of ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800030A8
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800031FC (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002C0C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  const char *v5; // r9
  __int64 v6; // rdx
  __int64 v8; // rdx
  DWORD v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v6 = 148LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v6, (__int64)"wil", v5);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v12 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v12) )
      {
        v6 = 173LL;
        return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v6, (__int64)"wil", v5);
      }
      if ( v12 )
      {
        v8 = 174LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v8 = 177LL;
        goto LABEL_25;
      }
      v9 = WaitForSingleObject(hHandle, 0);
      if ( v9 == -1 )
      {
        v6 = 180LL;
        return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v6, (__int64)"wil", v5);
      }
      if ( v9 )
      {
        v8 = 181LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v6 = 157LL;
        return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v6, (__int64)"wil", v5);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v8 = 163LL;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v8 = 149LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v8, (__int64)"wil", (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
