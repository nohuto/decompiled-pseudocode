/*
 * XREFs of MiImageUnused @ 0x1400E6C4C
 * Callers:
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall MiImageUnused(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // rax
  KIRQL v6; // al
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_QWORD **)(a1 + 96);
  *(_DWORD *)a3 = -1;
  if ( *v5 )
  {
    if ( a2 == 1 )
      v6 = 17;
    else
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v7 = *(_DWORD *)(a1 + 88);
    if ( v7 != -1 )
    {
      v8 = *(_DWORD *)(a1 + 92);
      *(_DWORD *)a3 = v7;
      *(_DWORD *)(a3 + 4) = (unsigned __int16)v8;
      *(_DWORD *)(a3 + 8) = (v8 >> 29) & 3;
      v9 = *(_DWORD *)(a1 + 56);
      if ( (v9 & 0x10000000) != 0 )
      {
        *(_DWORD *)(a1 + 56) = v9 & 0xEFFFFFFF;
        *(_BYTE *)(a3 + 13) = (v8 & 0x2000000) != 0;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
    }
    *(_DWORD *)(a1 + 92) &= ~0x80000000;
    if ( v6 != 17 )
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
  }
}
