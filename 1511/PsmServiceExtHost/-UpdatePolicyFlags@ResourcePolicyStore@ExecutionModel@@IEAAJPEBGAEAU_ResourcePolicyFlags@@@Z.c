/*
 * XREFs of ?UpdatePolicyFlags@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGAEAU_ResourcePolicyFlags@@@Z @ 0x1800266AC
 * Callers:
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::UpdatePolicyFlags(
        ExecutionModel::ResourcePolicyStore *this,
        const unsigned __int16 *a2,
        struct _ResourcePolicyFlags *a3)
{
  __int64 v5; // rbx
  wchar_t *String2[6]; // [rsp+20h] [rbp-48h]

  String2[0] = L"VideoTranscoding";
  String2[1] = L"ContinuousBackgroundExecution";
  String2[2] = L"GenericExtendedExecution";
  String2[3] = L"UiModernForegroundExtended";
  String2[4] = L"LmaBackgroundTaskCompletion";
  String2[5] = L"PendingDefaultPPLE";
  if ( (*(_DWORD *)a3 & 0x700) != 0 )
  {
    *(_DWORD *)a3 |= 0x40000000u;
  }
  else
  {
    v5 = 0LL;
    while ( _wcsicmp(a2, String2[v5]) )
    {
      if ( (unsigned __int64)++v5 >= 6 )
        return 0LL;
    }
    *(_DWORD *)a3 |= 0x40000000u;
  }
  return 0LL;
}
