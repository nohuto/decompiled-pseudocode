/*
 * XREFs of ?SendData@WnfStateRegistration@ExecutionModel@@QEAAJ_KPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180001DC8
 * Callers:
 *     ?SendData@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@W4_RM_REVOKE_REASON@@@Z @ 0x180001D88 (-SendData@ResourceSetServerProxy@ExecutionModel@@IEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x180001E90 (RmpWnfPublishMessageToClientStateName.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::WnfStateRegistration::SendData(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  unsigned int v13; // edi
  _DWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+40h] [rbp-38h]
  int v20; // [rsp+44h] [rbp-34h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( *(_BYTE *)(a1 + 24) )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v16 = 0LL;
    v19 = a5;
    v15[0] = 2;
    v15[1] = a4;
    v17 = a2;
    v18 = a3;
    v20 = a4;
    v12 = ((__int64 (__fastcall *)(__int64, _DWORD *, __int64, __int64))RmpWnfPublishMessageToClientStateName)(
            a1 + 8,
            v15,
            v10,
            v11);
    if ( v12 < 0 )
      v13 = v12 | 0x10000000;
    else
      v13 = 0;
  }
  else
  {
    v13 = -2147467260;
  }
  LeaveCriticalSection(v5);
  return v13;
}
