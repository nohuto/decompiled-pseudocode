/*
 * XREFs of ATADeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0042D30
 * Callers:
 *     <none>
 * Callees:
 *     ATAShimGetMsftId @ 0x1C0042DA4 (ATAShimGetMsftId.c)
 *     ReplaceDeviceId @ 0x1C0043064 (ReplaceDeviceId.c)
 */

__int64 __fastcall ATADeviceIdShimStorageDeviceIdCompletionHook(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  char v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+21h] [rbp-27h]
  __int64 v9; // [rsp+29h] [rbp-1Fh]
  __int64 v10; // [rsp+31h] [rbp-17h]
  __int16 v11; // [rsp+39h] [rbp-Fh]
  char v12; // [rsp+3Bh] [rbp-Dh]

  v3 = *(_QWORD *)(a1 + 64);
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  result = *(unsigned int *)(a2 + 48);
  if ( (int)result >= 0 )
  {
    result = ATAShimGetMsftId(v3, &v7);
    if ( (int)result >= 0 )
      result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, char *))ReplaceDeviceId)(v3, a2, a3, &v7);
  }
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
