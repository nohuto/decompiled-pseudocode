/*
 * XREFs of Template_ppxxxxxqxx @ 0x1C001FA40
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00926F0 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENT.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0094CEC (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

NTSTATUS Template_ppxxxxxqxx(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-A1h] BYREF
  va_list v5; // [rsp+40h] [rbp-91h]
  __int64 v6; // [rsp+48h] [rbp-89h]
  va_list v7; // [rsp+50h] [rbp-81h]
  __int64 v8; // [rsp+58h] [rbp-79h]
  va_list v9; // [rsp+60h] [rbp-71h]
  __int64 v10; // [rsp+68h] [rbp-69h]
  va_list v11; // [rsp+70h] [rbp-61h]
  __int64 v12; // [rsp+78h] [rbp-59h]
  va_list v13; // [rsp+80h] [rbp-51h]
  __int64 v14; // [rsp+88h] [rbp-49h]
  va_list v15; // [rsp+90h] [rbp-41h]
  __int64 v16; // [rsp+98h] [rbp-39h]
  va_list v17; // [rsp+A0h] [rbp-31h]
  __int64 v18; // [rsp+A8h] [rbp-29h]
  va_list v19; // [rsp+B0h] [rbp-21h]
  __int64 v20; // [rsp+B8h] [rbp-19h]
  va_list v21; // [rsp+C0h] [rbp-11h]
  __int64 v22; // [rsp+C8h] [rbp-9h]
  __int64 v23; // [rsp+108h] [rbp+37h] BYREF
  va_list va; // [rsp+108h] [rbp+37h]
  __int64 v25; // [rsp+110h] [rbp+3Fh] BYREF
  va_list va1; // [rsp+110h] [rbp+3Fh]
  __int64 v27; // [rsp+118h] [rbp+47h] BYREF
  va_list va2; // [rsp+118h] [rbp+47h]
  __int64 v29; // [rsp+120h] [rbp+4Fh] BYREF
  va_list va3; // [rsp+120h] [rbp+4Fh]
  __int64 v31; // [rsp+128h] [rbp+57h] BYREF
  va_list va4; // [rsp+128h] [rbp+57h]
  __int64 v33; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va5; // [rsp+130h] [rbp+5Fh]
  __int64 v35; // [rsp+138h] [rbp+67h] BYREF
  va_list va6; // [rsp+138h] [rbp+67h]
  __int64 v37; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va7; // [rsp+140h] [rbp+6Fh]
  __int64 v39; // [rsp+148h] [rbp+77h] BYREF
  va_list va8; // [rsp+148h] [rbp+77h]
  va_list va9; // [rsp+150h] [rbp+7Fh] BYREF

  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v29 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v31 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v33 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v35 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v37 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v39 = va_arg(va9, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 8LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  va_copy(v11, va4);
  va_copy(v13, va5);
  va_copy(v15, va6);
  va_copy(v17, va7);
  va_copy(v19, va8);
  va_copy(v21, va9);
  v8 = 8LL;
  v10 = 8LL;
  v12 = 8LL;
  v14 = 8LL;
  v16 = 8LL;
  v18 = 4LL;
  v20 = 8LL;
  v22 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0xAu, &UserData);
}
