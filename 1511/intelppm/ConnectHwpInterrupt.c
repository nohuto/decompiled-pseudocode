/*
 * XREFs of ConnectHwpInterrupt @ 0x1C0003AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConnectHwpInterrupt(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 72);
  if ( !v1 || (*(_DWORD *)(v1 + 4) & 0x1000) == 0 )
    return 3221225659LL;
  __writemsr(0x773u, __readmsr(0x773u) & 0xFFFFFFFFFFFFFFFCuLL);
  v4 = __readmsr(0x777u) & 0xFFFFFFFFFFFFFFFAuLL;
  v2 = HIDWORD(v4);
  __writemsr(0x777u, v4);
  result = HalPrivateDispatchTable[117](HwpInterruptService, v2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
