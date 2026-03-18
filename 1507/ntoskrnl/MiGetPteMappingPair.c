/*
 * XREFs of MiGetPteMappingPair @ 0x140231378
 * Callers:
 *     MiSlowRotateCopy @ 0x140219888 (MiSlowRotateCopy.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x1400597DC (MiCreatePteCopyList.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetPteMappingPair(int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 HyperPte; // rdi
  unsigned __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v8; // [rsp+24h] [rbp-D4h]
  int v9; // [rsp+28h] [rbp-D0h]
  int v10; // [rsp+2Ch] [rbp-CCh]
  __int64 v11; // [rsp+30h] [rbp-C8h]
  __int64 v12; // [rsp+38h] [rbp-C0h]

  if ( a1 != 1 || (result = MiCreatePteCopyList(2uLL, 2uLL, a2), !*(_DWORD *)(a2 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    HyperPte = (__int64)KeGetCurrentPrcb()->HyperPte;
    if ( 64 - (unsigned int)(HyperPte & 0xFFF) > 2 )
    {
      v6 = (HyperPte & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)(HyperPte & 0xFFF) << 12);
    }
    else
    {
      v10 = 0;
      v7 = 0;
      HyperPte &= 0xFFFFFFFFFFFFF000uLL;
      v11 = 0LL;
      v12 = 0LL;
      v8 = 0;
      v9 = 20;
      MiInsertTbFlushEntry((__int64)&v7, HyperPte, 64LL, 0);
      LOBYTE(v8) = v8 | 1;
      MiFlushTbList((__int64)&v7);
      v6 = HyperPte;
    }
    KeGetCurrentPrcb()->HyperPte = (void *)(HyperPte + 2);
    *(_DWORD *)a2 = 0;
    result = 0x98000000000LL;
    *(_DWORD *)(a2 + 4) = 2;
    *(_BYTE *)(a2 + 8) = CurrentIrql;
    *(_QWORD *)(a2 + 16) = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_BYTE *)(a2 + 9) = 1;
  }
  return result;
}
