/*
 * XREFs of PopEnsureErratumSubscribed @ 0x1402054B8
 * Callers:
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     RtlpComputeCrcInternal @ 0x140110070 (RtlpComputeCrcInternal.c)
 *     ExSubscribeWnfStateChange @ 0x1404D1B24 (ExSubscribeWnfStateChange.c)
 */

void __fastcall PopEnsureErratumSubscribed(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1[1] )
  {
    v2 = *a1;
    v5 = MEMORY[0xFFFFF78000000014];
    v3 = RtlpComputeCrcInternal((unsigned __int64)&v5, 8uLL, 0LL, &Crc64Ctrl);
    v4 = RtlpComputeCrcInternal(v2, 8uLL, v3, &Crc64Ctrl);
    a1[2] = v4;
    a1[3] = RtlpComputeCrcInternal(v2, 8uLL, v4, &Crc64Ctrl);
    ExSubscribeWnfStateChange((_DWORD)a1 + 8, v2, 1, 0, (__int64)PopErratumUpdateCallback, (__int64)a1);
  }
}
