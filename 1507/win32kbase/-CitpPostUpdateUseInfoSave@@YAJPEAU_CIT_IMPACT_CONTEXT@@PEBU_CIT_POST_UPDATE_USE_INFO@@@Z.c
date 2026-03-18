/*
 * XREFs of ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0018564
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0017F7C (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079728 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C0018638 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C00187A0 (-CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

NTSTATUS __fastcall CitpPostUpdateUseInfoSave(struct _CIT_IMPACT_CONTEXT *a1, _DWORD *Data)
{
  _DWORD *v2; // rbx
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v7[20]; // [rsp+50h] [rbp-68h] BYREF

  v2 = Data;
  KeyHandle = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( !*((_WORD *)a1 + 304) )
    return -1073741823;
  if ( !Data )
  {
    CitpPostUpdateUseInfoCalculate(a1, (struct _CIT_POST_UPDATE_USE_INFO *)v7);
    v2 = v7;
  }
  result = CitpPostUpdateUseInfoOpenKey(a1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PUUActive");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, v2, 0x50u);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
