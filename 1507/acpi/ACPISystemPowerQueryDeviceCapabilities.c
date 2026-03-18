/*
 * XREFs of ACPISystemPowerQueryDeviceCapabilities @ 0x1C006A528
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C006A150 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C0071350 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0078520 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C00044C8 (ACPIInternalClearFlags.c)
 *     ACPIInternalSetFlags @ 0x1C00044E0 (ACPIInternalSetFlags.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C00180F8 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     _ACPIInternalError @ 0x1C0036CD8 (_ACPIInternalError.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C0069768 (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerQueryDeviceCapabilities(_QWORD *BugCheckParameter2, __m128i *a2)
{
  __int64 v2; // rdi
  int v4; // edx
  void *v5; // rcx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 result; // rax
  _DWORD v13[16]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (__int64)a2;
  memset(v13, 0, sizeof(v13));
  if ( (*BugCheckParameter2 & 0x400000000000000LL) != 0 )
    goto LABEL_2;
  if ( (*BugCheckParameter2 & 0x60) != 0x40 )
  {
    result = ACPIInternalGetDeviceCapabilities(*(PDEVICE_OBJECT *)(BugCheckParameter2[92] + 712LL), v13);
    if ( (int)result < 0 )
      return result;
    a2 = (__m128i *)v13;
  }
  result = ACPISystemPowerUpdateDeviceCapabilities((ULONG_PTR)BugCheckParameter2, a2, v2);
  if ( (int)result >= 0 )
  {
    ACPIInternalSetFlags(BugCheckParameter2, 0x400000000000000uLL);
LABEL_2:
    v4 = *(_DWORD *)(v2 + 4);
    v5 = BugCheckParameter2 + 113;
    *(_OWORD *)(v2 + 16) = *(_OWORD *)((char *)BugCheckParameter2 + 452);
    *(_QWORD *)(v2 + 32) = *(_QWORD *)((char *)BugCheckParameter2 + 468);
    *(_DWORD *)(v2 + 40) = *((_DWORD *)BugCheckParameter2 + 119);
    *(_DWORD *)(v2 + 44) = *((_DWORD *)BugCheckParameter2 + 120);
    *(_DWORD *)(v2 + 48) = *((_DWORD *)BugCheckParameter2 + 121);
    v6 = *(_DWORD *)(v2 + 4) ^ (*((_DWORD *)BugCheckParameter2 + 136) ^ v4) & 1;
    *(_DWORD *)(v2 + 4) = v6;
    v7 = ((unsigned __int8)v6 ^ (unsigned __int8)*((_DWORD *)BugCheckParameter2 + 136)) & 2 ^ v6;
    *(_DWORD *)(v2 + 4) = v7;
    v8 = ((unsigned __int16)v7 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 136) << 8)) & 0x400 ^ v7;
    *(_DWORD *)(v2 + 4) = v8;
    v9 = ((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 136) << 8)) & 0x800 ^ v8;
    *(_DWORD *)(v2 + 4) = v9;
    v10 = ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 136) << 8)) & 0x1000 ^ v9;
    *(_DWORD *)(v2 + 4) = v10;
    v11 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 136) << 8)) & 0x2000 ^ v10;
    *(_DWORD *)(v2 + 4) = v11;
    if ( (BugCheckParameter2[113] & 0x100000000LL) != 0 )
    {
      if ( (v11 & 0x80000) != 0 )
        ACPIInternalClearFlags(v5, 0x100000LL);
      else
        ACPIInternalSetFlags(v5, 0x100000uLL);
    }
    return 0LL;
  }
  if ( (*(_BYTE *)BugCheckParameter2 & 0x20) != 0 )
    ACPIInternalError(0xB042EuLL);
  return result;
}
