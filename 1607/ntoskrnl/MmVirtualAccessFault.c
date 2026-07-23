/*
 * XREFs of MmVirtualAccessFault @ 0x14065C018
 * Callers:
 *     VmAccessFault @ 0x140223B40 (VmAccessFault.c)
 *     PspIumGetPhysicalPage @ 0x1406822E8 (PspIumGetPhysicalPage.c)
 * Callees:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiInitializeFaultVaListCore @ 0x140171DA0 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MmVirtualAccessFault(__int64 a1, char a2, __int64 *a3)
{
  ULONG_PTR v4; // rbx
  unsigned __int64 v5; // rdi
  int v6; // r8d
  int v7; // ecx
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-88h] BYREF
  char v10; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v11[7]; // [rsp+31h] [rbp-77h] BYREF
  __int64 v12; // [rsp+58h] [rbp-50h]
  int v13; // [rsp+60h] [rbp-48h]

  v4 = 0LL;
  if ( (a2 & 2) != 0 )
    v4 = 2LL;
  if ( (a2 & 4) != 0 )
    v4 |= 0x10uLL;
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v9[1] = 4096LL;
  v9[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
  while ( 1 )
  {
    MiInitializeFaultVaListCore((__int64)&v10, (__int64)v9, 1LL, 5);
    v12 = -1LL;
    v7 = v6 & (v13 ^ ((v4 & 2) != 0)) ^ v13;
    v13 = (v7 ^ (2 * ((v4 & 0x10) != 0))) & 2 ^ v7;
    result = MmAccessFault(v4, v5, v6, (ULONG_PTR)v11);
    if ( (int)result < 0 )
      break;
    if ( v12 != -1 )
    {
      *a3 = v12;
      return 0LL;
    }
  }
  return result;
}
