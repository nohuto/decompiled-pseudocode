/*
 * XREFs of MiComputeProcessUserVa @ 0x140463054
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiAllocateVad @ 0x140463408 (MiAllocateVad.c)
 */

__int64 __fastcall MiComputeProcessUserVa(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned __int64 *a5)
{
  __int64 v9; // rcx
  _QWORD *v10; // rax
  char *v11; // rcx
  _QWORD *Vad; // rcx
  int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d

  *(_QWORD *)(a1 + 1152) = MmUserProbeAddress;
  v9 = 3LL;
  v10 = (_QWORD *)0xFFFFF58010804278LL;
  *a5 = 0LL;
  do
  {
    v10[1] = v10;
    *v10 = v10;
    v10 += 2;
    --v9;
  }
  while ( v9 );
  MEMORY[0xFFFFF58010804200] = (char *)MmHighestUserAddress - 0x9FFFF0FFFLL;
  v11 = (char *)MmHighestUserAddress;
  if ( (char *)MmHighestUserAddress - 0x10000 > (char *)0x7FFE0000 && !a2 && (*(_DWORD *)(a1 + 1724) & 1) == 0 )
  {
    Vad = (_QWORD *)MiAllocateVad(2147352576LL, 2147418111LL);
    if ( !Vad )
      return 3221225495LL;
    *Vad = *a4;
    *a4 = Vad;
    v11 = (char *)MmHighestUserAddress;
  }
  v13 = 1;
  v14 = 0LL;
  if ( (unsigned __int64)(v11 - 0x10000) > 0x7FFE0000
    && !a2
    && a3
    && (*(_DWORD *)(a3 + 56) & 0x20) != 0
    && (*(_DWORD *)(a1 + 772) & 0x20000) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)MiSectionControlArea(a3) + 56LL) + 44LL) & 0x20) != 0 )
    {
      if ( !*(_QWORD *)(a1 + 1064) )
      {
LABEL_15:
        if ( v14 )
        {
          *(_QWORD *)(a1 + 1152) = v14;
          MEMORY[0xFFFFF58010804200] = v14 - v15;
          if ( v14 <= 0x80000000 )
            v13 = 0;
        }
        goto LABEL_16;
      }
      v14 = 0x100000000LL;
      v15 = 0x10000;
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x200u);
    }
    else
    {
      v14 = 0x80000000LL;
    }
    if ( *(_QWORD *)(a1 + 1064) )
      v14 -= 0x10000LL;
    goto LABEL_15;
  }
LABEL_16:
  if ( dword_14038110C )
  {
    if ( v13 == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x200000u);
  }
  *a5 = v14;
  return 0LL;
}
