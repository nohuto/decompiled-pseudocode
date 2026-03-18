/*
 * XREFs of ACPISystemPowerQueryDeviceCapabilities @ 0x1C0067B28
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0067750 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C0071240 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0078680 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0004320 (ACPIInternalClearFlags.c)
 *     ACPIInternalSetFlags @ 0x1C0004338 (ACPIInternalSetFlags.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C00184A0 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     _ACPIInternalError @ 0x1C00378C8 (_ACPIInternalError.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C00681C0 (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerQueryDeviceCapabilities(_QWORD *BugCheckParameter2, __m128i *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  int v5; // edx
  void *v6; // rcx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  _WORD v13[32]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (__int64)a2;
  memset(v13, 0, sizeof(v13));
  if ( (*BugCheckParameter2 & 0x400000000000000LL) == 0 )
  {
    if ( (*BugCheckParameter2 & 0x60) != 0x40 )
    {
      result = ACPIInternalGetDeviceCapabilities(*(PDEVICE_OBJECT *)(BugCheckParameter2[92] + 712LL), v13);
      if ( (int)result < 0 )
        return result;
      a2 = (__m128i *)v13;
    }
    result = ACPISystemPowerUpdateDeviceCapabilities((ULONG_PTR)BugCheckParameter2, a2, v2);
    if ( (int)result < 0 )
    {
      if ( (*(_BYTE *)BugCheckParameter2 & 0x20) != 0 )
        ACPIInternalError(0xB042EuLL);
      return result;
    }
    ACPIInternalSetFlags(BugCheckParameter2, 0x400000000000000uLL);
  }
  v5 = *(_DWORD *)(v2 + 4);
  v6 = BugCheckParameter2 + 113;
  *(_OWORD *)(v2 + 16) = *(_OWORD *)((char *)BugCheckParameter2 + 452);
  *(_QWORD *)(v2 + 32) = *(_QWORD *)((char *)BugCheckParameter2 + 468);
  *(_DWORD *)(v2 + 40) = *((_DWORD *)BugCheckParameter2 + 119);
  *(_DWORD *)(v2 + 44) = *((_DWORD *)BugCheckParameter2 + 120);
  *(_DWORD *)(v2 + 48) = *((_DWORD *)BugCheckParameter2 + 121);
  v7 = *(_DWORD *)(v2 + 4) ^ (*((_DWORD *)BugCheckParameter2 + 136) ^ v5) & 1;
  *(_DWORD *)(v2 + 4) = v7;
  v8 = ((unsigned __int8)v7 ^ (unsigned __int8)*((_DWORD *)BugCheckParameter2 + 136)) & 2 ^ v7;
  *(_DWORD *)(v2 + 4) = v8;
  v9 = ((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 136) << 8)) & 0x400 ^ v8;
  *(_DWORD *)(v2 + 4) = v9;
  v10 = ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 136) << 8)) & 0x800 ^ v9;
  *(_DWORD *)(v2 + 4) = v10;
  v11 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 136) << 8)) & 0x1000 ^ v10;
  *(_DWORD *)(v2 + 4) = v11;
  v12 = ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 136) << 8)) & 0x2000 ^ v11;
  *(_DWORD *)(v2 + 4) = v12;
  if ( (BugCheckParameter2[113] & 0x100000000LL) != 0 )
  {
    if ( (v12 & 0x80000) != 0 )
      ACPIInternalClearFlags(v6, 0x100000LL);
    else
      ACPIInternalSetFlags(v6, 0x100000uLL);
  }
  return 0LL;
}
