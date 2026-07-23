/*
 * XREFs of MiComputeProcessUserVa @ 0x14046CB1C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiAllocateVad @ 0x14046BFD8 (MiAllocateVad.c)
 */

__int64 __fastcall MiComputeProcessUserVa(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned __int64 *a5)
{
  __int64 v9; // r11
  __int64 v10; // r10
  _QWORD *v11; // rcx
  _QWORD *Vad; // rcx
  int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d

  *(_QWORD *)(a1 + 1152) = 0x7FFFFFFF0000LL;
  *a5 = 0LL;
  v9 = 3LL;
  v10 = 276840576LL;
  do
  {
    v11 = (_QWORD *)(v10 + qword_140327FD0);
    v10 += 16LL;
    v11[1] = v11;
    *v11 = v11;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)(qword_140327FD0 + 276840456) = 0x7FF5FFFFF000LL;
  if ( (*(_DWORD *)(a1 + 1740) & 1) != 0 )
    *(_QWORD *)(qword_140327FD0 + 276840456) = 0x7FFFFFFE0000LL;
  if ( !a2 && (*(_DWORD *)(a1 + 1740) & 1) == 0 )
  {
    Vad = (_QWORD *)MiAllocateVad(0x7FFE0000uLL, 0x7FFEFFFFuLL);
    if ( !Vad )
      return 3221225495LL;
    *Vad = *a4;
    *a4 = Vad;
  }
  v13 = 1;
  v14 = 0LL;
  if ( !a2 && a3 && (*(_DWORD *)(a3 + 56) & 0x20) != 0 && (*(_DWORD *)(a1 + 772) & 0x20000) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)MiSectionControlArea(a3) + 56LL) + 44LL) & 0x20) != 0 )
    {
      if ( !*(_QWORD *)(a1 + 1064) )
      {
LABEL_15:
        if ( v14 )
        {
          *(_QWORD *)(a1 + 1152) = v14;
          if ( v14 <= 0x80000000 )
            v13 = 0;
          *(_QWORD *)(qword_140327FD0 + 276840456) = v14 - v15;
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
  if ( dword_1403A9154 )
  {
    if ( v13 == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x200000u);
  }
  *a5 = v14;
  return 0LL;
}
