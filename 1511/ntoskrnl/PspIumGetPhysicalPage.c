/*
 * XREFs of PspIumGetPhysicalPage @ 0x14064377C
 * Callers:
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmVirtualAccessFault @ 0x140626764 (MmVirtualAccessFault.c)
 */

__int64 __fastcall PspIumGetPhysicalPage(__int64 a1)
{
  ULONG64 v1; // rdi
  int v3; // r14d
  _KPROCESS *v4; // rsi
  _KPROCESS *Process; // rbp
  int v6; // edi
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v9; // [rsp+28h] [rbp-50h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_KPROCESS **)(a1 + 24);
  if ( v1 >= MmUserProbeAddress )
  {
    v6 = -1073741819;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v4 )
      KiStackAttachProcess(*(_KPROCESS **)(a1 + 24), 0LL, (__int64)&v9);
    v6 = MmVirtualAccessFault(v1, v3, &v8);
    if ( Process != v4 )
      KiUnstackDetachProcess(&v9, 0LL);
    if ( v6 >= 0 )
      *(_QWORD *)(a1 + 16) = v8;
  }
  result = v6;
  *(_QWORD *)(a1 + 8) = v6;
  return result;
}
