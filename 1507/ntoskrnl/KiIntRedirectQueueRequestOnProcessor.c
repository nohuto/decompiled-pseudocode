/*
 * XREFs of KiIntRedirectQueueRequestOnProcessor @ 0x140101404
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140101210 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall KiIntRedirectQueueRequestOnProcessor(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v3; // rbx
  unsigned int v4; // ecx
  char v5; // dl
  __int64 v6; // rcx
  __int64 result; // rax
  _DWORD v8[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v9[21]; // [rsp+38h] [rbp-C0h] BYREF

  v8[1] = 0;
  v3 = (unsigned int)BugCheckParameter3;
  v8[0] = 1310721;
  memset(v9, 0, 0xA0uLL);
  v4 = KiProcessorIndexToNumberMappingTable[v3];
  v5 = v4 & 0x3F;
  v6 = v4 >> 6;
  if ( (_DWORD)v6 )
    LOWORD(v8[0]) = v6 + 1;
  v9[v6] |= 1LL << v5;
  result = HalRequestIpiSpecifyVector(0LL, v8, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x103uLL, v3, (int)result);
  return result;
}
