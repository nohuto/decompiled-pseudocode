/*
 * XREFs of GetProcessorPackage @ 0x1C0018A68
 * Callers:
 *     RegisterKernelPackage @ 0x1C0018930 (RegisterKernelPackage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     memset @ 0x1C00062C0 (memset.c)
 */

_DWORD *__fastcall GetProcessorPackage(__int64 a1)
{
  _DWORD *v2; // rbx
  _QWORD *PoolWithTag; // rsi
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  unsigned __int16 i; // r14
  __int64 v7; // rax
  _DWORD *v8; // rax
  SIZE_T NumberOfBytes[2]; // [rsp+38h] [rbp-99h] BYREF
  _BYTE v11[176]; // [rsp+48h] [rbp-89h] BYREF

  NumberOfBytes[0] = 0x300000000LL;
  v2 = 0LL;
  if ( (unsigned int)NtQuerySystemInformationEx(107LL, (char *)NumberOfBytes + 4, 4LL, 0LL, 0, NumberOfBytes) == -1073741820 )
  {
    if ( LODWORD(NumberOfBytes[0]) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, LODWORD(NumberOfBytes[0]), 0x72637250u);
      if ( PoolWithTag )
      {
        HIDWORD(NumberOfBytes[0]) = 3;
        if ( (int)NtQuerySystemInformationEx(
                    107LL,
                    (char *)NumberOfBytes + 4,
                    4LL,
                    PoolWithTag,
                    NumberOfBytes[0],
                    NumberOfBytes) >= 0
          && LODWORD(NumberOfBytes[0]) )
        {
          v4 = 0;
          v5 = PoolWithTag;
          KeInitializeAffinityEx(v11);
          if ( LODWORD(NumberOfBytes[0]) )
          {
            do
            {
              for ( i = 0; i < *((_WORD *)v5 + 15); ++i )
                KeAddGroupAffinityEx(v11, LOWORD(v5[2 * i + 5]), v5[2 * i + 4]);
              if ( (unsigned int)KeCheckProcessorAffinityEx(v11, *(unsigned int *)(a1 + 56)) )
                break;
              v7 = *((unsigned int *)v5 + 1);
              v4 += v7;
              v5 = (_QWORD *)((char *)v5 + v7);
              KeInitializeAffinityEx(v11);
            }
            while ( v4 < LODWORD(NumberOfBytes[0]) );
          }
          v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x72637250u);
          v2 = v8;
          if ( v8 )
          {
            memset(v8, 0, 0xD0uLL);
            KeCopyAffinityEx(v2 + 8, v11);
            v2[50] = KeCountSetBitsAffinityEx(v11);
            *((_QWORD *)v2 + 3) = v2 + 4;
            *((_QWORD *)v2 + 2) = v2 + 4;
          }
        }
        ExFreePoolWithTag(PoolWithTag, 0x72637250u);
      }
    }
  }
  return v2;
}
