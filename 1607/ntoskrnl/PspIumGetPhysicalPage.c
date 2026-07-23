/*
 * XREFs of PspIumGetPhysicalPage @ 0x1406822E8
 * Callers:
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmVirtualAccessFault @ 0x14065C018 (MmVirtualAccessFault.c)
 */

__int64 __fastcall PspIumGetPhysicalPage(__int64 a1)
{
  unsigned __int64 v1; // rdi
  int v2; // r14d
  _KPROCESS *v4; // rsi
  _KPROCESS *Process; // rbp
  int v6; // edi
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v9[48]; // [rsp+28h] [rbp-50h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_KPROCESS **)(a1 + 24);
  if ( v1 >= 0x7FFFFFFF0000LL )
  {
    v6 = -1073741819;
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v4 )
      KiStackAttachProcess(*(_KPROCESS **)(a1 + 24), 0, (__int64)v9);
    v6 = MmVirtualAccessFault(v1, v2, &v8);
    if ( Process != v4 )
      KiUnstackDetachProcess((struct _KTHREAD *)v9, 0);
    if ( v6 >= 0 )
      *(_QWORD *)(a1 + 16) = v8;
  }
  result = v6;
  *(_QWORD *)(a1 + 8) = v6;
  return result;
}
