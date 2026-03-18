/*
 * XREFs of MmVirtualAccessFault @ 0x140626764
 * Callers:
 *     VmAccessFault @ 0x14020C258 (VmAccessFault.c)
 *     PspIumGetPhysicalPage @ 0x14064377C (PspIumGetPhysicalPage.c)
 * Callees:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiInitializeFaultVaListCore @ 0x140166F70 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MmVirtualAccessFault(__int64 a1, char a2, __int64 *a3)
{
  ULONG_PTR v3; // rbx
  unsigned __int64 v5; // rsi
  int v6; // edi
  int v7; // r8d
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-98h] BYREF
  char v12; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v13[7]; // [rsp+31h] [rbp-87h] BYREF
  __int64 v14; // [rsp+58h] [rbp-60h]
  int v15; // [rsp+60h] [rbp-58h]

  v3 = 0LL;
  if ( (a2 & 2) != 0 )
    v3 = 2LL;
  if ( (a2 & 4) != 0 )
    v3 |= 0x10uLL;
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v11[1] = 4096LL;
  v11[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
  v6 = a2 & 8;
  while ( 1 )
  {
    MiInitializeFaultVaListCore((__int64)&v12, (__int64)v11, 1LL, 5);
    v14 = -1LL;
    v8 = v7 & (v15 ^ ((v3 & 2) != 0)) ^ v15;
    v9 = (v8 ^ (2 * ((v3 & 0x10) != 0))) & 2 ^ v8;
    v15 = ((unsigned __int8)v9 ^ (unsigned __int8)(4 * (v6 != 0))) & 4 ^ v9;
    result = MmAccessFault(v3, v5, v7, (ULONG_PTR)v13);
    if ( (int)result < 0 )
      break;
    if ( v14 != -1 )
    {
      *a3 = v14;
      return 0LL;
    }
  }
  return result;
}
