/*
 * XREFs of VslFinalizeLiveDumpInSk @ 0x1401C27B0
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1403DA8AC (IopLiveDumpCaptureMemoryPages.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall VslFinalizeLiveDumpInSk(_QWORD *a1, __int64 a2)
{
  char *v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  NTSTATUS v8; // ebx
  _QWORD v10[14]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v11[112]; // [rsp+90h] [rbp-98h] BYREF

  memset(v10, 0, 0x68uLL);
  v4 = *(char **)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 8) >> 12;
  LODWORD(v10[1]) = v5;
  if ( ((unsigned __int16)v4 & 0xFFF) != 0 || v4 != *(char **)a2 || (*(_DWORD *)(a2 + 40) & 0xFFF) != 0 || v5 > 0xB )
  {
    v8 = -1073741811;
  }
  else
  {
    v6 = 0LL;
    if ( v5 )
    {
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v4);
        v4 += 4096;
        v10[v6 + 2] = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < LODWORD(v10[1]) );
    }
    v8 = VslpEnterIumSecureMode(1, 39LL, 0LL, (__int64)v10);
    if ( v8 < 0 )
      goto LABEL_11;
    *a1 = v10[2];
    *(_DWORD *)(a2 + 40) = v10[3];
  }
  if ( v8 < 0 )
  {
LABEL_11:
    memset(v11, 0, 0x68uLL);
    VslpEnterIumSecureMode(1, 40LL, 0LL, (__int64)v11);
  }
  return (unsigned int)v8;
}
