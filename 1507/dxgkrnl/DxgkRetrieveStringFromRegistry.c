/*
 * XREFs of DxgkRetrieveStringFromRegistry @ 0x1C00BB6D0
 * Callers:
 *     DpiGetAdapterInfo @ 0x1C00BAC70 (DpiGetAdapterInfo.c)
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 */

NTSTATUS __fastcall DxgkRetrieveStringFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, __int64 a3)
{
  NTSTATUS result; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  NTSTATUS v9; // edi
  int v10; // eax
  bool v11; // zf
  ULONG v12; // ecx
  bool v13; // di
  __int16 v14; // cx
  SIZE_T NumberOfBytes[5]; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  result = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)NumberOfBytes);
  if ( result != -1073741789 && result != -2147483643 )
  {
    if ( result >= 0 )
      return -1073741823;
    return result;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LODWORD(NumberOfBytes[0]), 0x74727044u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  v9 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, PoolWithTag, NumberOfBytes[0], &ResultLength);
  if ( v9 < 0 )
  {
LABEL_20:
    ExFreePoolWithTag(v8, 0);
    return v9;
  }
  v10 = v8[1];
  if ( v10 == 1 )
  {
    v11 = 0;
    goto LABEL_10;
  }
  v11 = v10 == 7;
  if ( v10 != 7 )
  {
    v9 = -1073741788;
    goto LABEL_20;
  }
LABEL_10:
  v12 = v8[2];
  v13 = v11;
  ResultLength = v12;
  if ( v12 && v12 <= LODWORD(NumberOfBytes[0]) - 12 )
  {
    if ( v12 > 0xFFFC )
      v12 = 65532;
    ResultLength = v12;
    memmove(v8, v8 + 3, v12);
    if ( v13 )
    {
      v14 = ResultLength;
    }
    else
    {
      *(_WORD *)((char *)v8 + ResultLength) = 0;
      v14 = ResultLength + 2;
    }
    *(_WORD *)(a3 + 2) = NumberOfBytes[0];
    result = 0;
    *(_WORD *)a3 = v14;
    *(_QWORD *)(a3 + 8) = v8;
  }
  else
  {
    ExFreePoolWithTag(v8, 0);
    return -1073741772;
  }
  return result;
}
