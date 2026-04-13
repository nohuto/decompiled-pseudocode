/*
 * XREFs of sub_18001C7D0 @ 0x18001C7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800188EC @ 0x1800188EC (sub_1800188EC.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18001C7D0(__int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  int v4; // ebp
  HSTRING_HEADER *v5; // rax
  signed __int32 v7; // [rsp+40h] [rbp-68h] BYREF
  const WCHAR *v8; // [rsp+48h] [rbp-60h] BYREF
  __int128 v9; // [rsp+50h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 40);
  v7 = -2;
  _InterlockedCompareExchange(&v7, v1, -2);
  if ( v7 == -1 && (v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 0, -1), v3 == v7) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0 && InitOnceExecuteOnce(&stru_18003AC70, InitFn, 0LL, 0LL) && qword_18003AC90 )
    {
      v8 = L"ContentManagement.ContentManagementService.EnableContextualSuggestionsAsync";
      v9 = xmmword_18002C040;
      v5 = sub_1800188EC(&hstringHeader, &v8);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, PVOID, _QWORD))(*(_QWORD *)qword_18003AC90
                                                                                           + 48LL))(
        qword_18003AC90,
        0LL,
        2LL,
        &v9,
        a1,
        v5[1].Reserved.Reserved1,
        *(unsigned int *)(a1 + 48));
    }
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
