/*
 * XREFs of MiComputeProcessUserVa @ 0x140468250
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiAllocateVad @ 0x140468608 (MiAllocateVad.c)
 */

__int64 __fastcall MiComputeProcessUserVa(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned __int64 *a5)
{
  char *v8; // rcx
  _QWORD *Vad; // rcx
  int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d

  *(_QWORD *)(a1 + 1144) = MmUserProbeAddress;
  MEMORY[0xFFFFF58010804240] = (char *)MmHighestUserAddress - 0x9FFFF0FFFLL;
  v8 = (char *)MmHighestUserAddress;
  *a5 = 0LL;
  if ( (char *)MmHighestUserAddress - 0x10000 > (char *)0x7FFE0000 && !a2 && (*(_DWORD *)(a1 + 1716) & 1) == 0 )
  {
    Vad = (_QWORD *)MiAllocateVad(2147352576LL, 2147418111LL);
    if ( !Vad )
      return 3221225495LL;
    *Vad = *a4;
    *a4 = Vad;
    v8 = (char *)MmHighestUserAddress;
  }
  v11 = 1;
  v12 = 0LL;
  if ( (unsigned __int64)(v8 - 0x10000) > 0x7FFE0000
    && !a2
    && a3
    && (*(_DWORD *)(a3 + 56) & 0x20) != 0
    && (*(_DWORD *)(a1 + 772) & 0x20000) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)MiSectionControlArea(a3) + 56LL) + 44LL) & 0x20) != 0 )
    {
      if ( !*(_QWORD *)(a1 + 1064) )
      {
LABEL_13:
        if ( v12 )
        {
          *(_QWORD *)(a1 + 1144) = v12;
          MEMORY[0xFFFFF58010804240] = v12 - v13;
          if ( v12 <= 0x80000000 )
            v11 = 0;
        }
        goto LABEL_14;
      }
      v12 = 0x100000000LL;
      v13 = 0x10000;
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x200u);
    }
    else
    {
      v12 = 0x80000000LL;
    }
    if ( *(_QWORD *)(a1 + 1064) )
      v12 -= 0x10000LL;
    goto LABEL_13;
  }
LABEL_14:
  MEMORY[0xFFFFF58010804248] = MEMORY[0xFFFFF58010804240];
  if ( dword_1403D00FC )
  {
    if ( v11 == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x200000u);
  }
  *a5 = v12;
  return 0LL;
}
