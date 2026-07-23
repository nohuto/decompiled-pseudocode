/*
 * XREFs of CmpCreateServerSiloCallback @ 0x14055FED0
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferenceSiloContext @ 0x1400019C0 (PsDereferenceSiloContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsInsertPermanentSiloContext @ 0x14055FF54 (PsInsertPermanentSiloContext.c)
 *     PsCreateSiloContext @ 0x14056014C (PsCreateSiloContext.c)
 */

__int64 __fastcall CmpCreateServerSiloCallback(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  int inserted; // edi
  void *v5; // [rsp+48h] [rbp+10h] BYREF

  result = PsCreateSiloContext(a1, 32, 1, 0, (__int64)&v5);
  if ( (int)result >= 0 )
  {
    v3 = v5;
    memset(v5, 0, 0x20uLL);
    v3[1] = v3;
    *v3 = v3;
    v3[3] = 0LL;
    *((_BYTE *)v3 + 16) = 0;
    inserted = PsInsertPermanentSiloContext(a1, *((unsigned int *)CmpSiloMonitor + 5), v3);
    PsDereferenceSiloContext(v3);
    if ( inserted < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    return (unsigned int)inserted;
  }
  return result;
}
