/*
 * XREFs of MiPerformFinalZeroing @ 0x1401F2C6C
 * Callers:
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x14001D1C0 (MiChangePageAttributeBatch.c)
 *     MiSetPfnTbFlushStamp @ 0x1400E5330 (MiSetPfnTbFlushStamp.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 */

void __fastcall MiPerformFinalZeroing(ULONG_PTR *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  ULONG_PTR *v6; // rdi
  ULONG_PTR *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rsi
  ULONG_PTR v11; // rbx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = a2;
  v6 = a1;
  if ( a2 )
  {
    v7 = a1;
    v8 = (unsigned int)v4;
    do
    {
      v9 = 48 * *v7++ - 0x58000000000LL;
      *(_QWORD *)(v9 + 16) = v3;
      v3 = v9;
      --v8;
    }
    while ( v8 );
  }
  MiChangePageAttributeBatch(v3, a3, 0LL);
  if ( (_DWORD)v4 )
  {
    v10 = v4;
    do
    {
      v11 = *v6;
      MiZeroPhysicalPage(*v6, 1, a3);
      _InterlockedOr(v12, 0);
      MiSetPfnTbFlushStamp(48 * v11 - 0x58000000000LL, (unsigned int)KiTbFlushTimeStamp, 0);
      ++v6;
      --v10;
    }
    while ( v10 );
  }
}
