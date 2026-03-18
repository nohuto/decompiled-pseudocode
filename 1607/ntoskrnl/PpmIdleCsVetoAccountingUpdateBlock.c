/*
 * XREFs of PpmIdleCsVetoAccountingUpdateBlock @ 0x1402004E8
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1401FFB38 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140200460 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PpmIdleStartCsVetoAccounting @ 0x140200A5C (PpmIdleStartCsVetoAccounting.c)
 *     PopFxPlatformStateAvailable @ 0x140203228 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PpmIdleCsVetoAccountingUpdateBlock(__int64 a1, char a2, char a3)
{
  __int64 v4; // rax
  unsigned int j; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 v8; // dl
  bool v9; // zf
  __int64 InterruptTimePrecise; // rax
  unsigned int i; // edx
  unsigned __int64 v12; // rcx
  LARGE_INTEGER v13; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    v8 = ~a2;
    v9 = (v8 & *(_BYTE *)(a1 + 24)) == 0;
    *(_BYTE *)(a1 + 24) &= v8;
    if ( v9 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v13);
      for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
      {
        v12 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)i << 6);
        if ( *(_QWORD *)(v12 + 32) )
          *(_QWORD *)(v12 + 48) = InterruptTimePrecise;
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) |= a2;
    if ( *(_BYTE *)(a1 + 24) == a2 )
    {
      v4 = RtlGetInterruptTimePrecise(&v13);
      for ( j = 0; j < *(_DWORD *)(a1 + 28); ++j )
      {
        v6 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)j << 6);
        v7 = *(_QWORD *)(v6 + 48);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 56) += v4 - v7;
          *(_QWORD *)(v6 + 48) = 0LL;
        }
      }
    }
  }
}
