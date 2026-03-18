/*
 * XREFs of UsbhBuildDeviceCompatibleID @ 0x1C0029A0C
 * Callers:
 *     UsbhBuildCompatibleID @ 0x1C0008538 (UsbhBuildCompatibleID.c)
 * Callees:
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 __fastcall UsbhBuildDeviceCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v5; // rbx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xBEuLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xBEuLL);
  *v5 = *(_OWORD *)L"USB\\DevClass_00&SubClass_00&Prot_00";
  v5[1] = *(_OWORD *)L"lass_00&SubClass_00&Prot_00";
  v5[2] = *(_OWORD *)L"SubClass_00&Prot_00";
  v5[3] = *(_OWORD *)L"_00&Prot_00";
  v5[4] = *(_OWORD *)L"_00";
  v5[5] = *(_OWORD *)&aUsbDevclass00S[40];
  v5[6] = *(_OWORD *)&aUsbDevclass00S[48];
  v5[7] = *(_OWORD *)&aUsbDevclass00S[56];
  v5[8] = *(_OWORD *)&aUsbDevclass00S[64];
  v5[9] = *(_OWORD *)&aUsbDevclass00S[72];
  v5[10] = *(_OWORD *)&aUsbDevclass00S[80];
  *((_QWORD *)v5 + 22) = *(_QWORD *)&aUsbDevclass00S[88];
  *((_DWORD *)v5 + 46) = *(_DWORD *)&aUsbDevclass00S[92];
  *((_WORD *)v5 + 94) = aUsbDevclass00S[94];
  result = 0LL;
  *(_QWORD *)(a3 + 8) = v5;
  *(_DWORD *)(a3 + 4) = 190;
  return result;
}
