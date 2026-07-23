/*
 * XREFs of BgpFwLibraryEnable @ 0x14012754C
 * Callers:
 *     BgLibraryEnable @ 0x140126F20 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     MmUnmapIoSpace @ 0x14009ACB0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     ResFwBackgroundTransition @ 0x140725ACC (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v1; // esi
  int v3; // ecx
  bool v4; // bl
  int v6; // eax
  int v7; // ebp
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // esi

  v1 = 0;
  v3 = dword_1402F9F90;
  v4 = (dword_1402F9F90 & 0xC00) == 3072;
  if ( (dword_1402F9F90 & 2) != 0 && (dword_1402F9F90 & 0xC00) != 0xC00 )
    return 0LL;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
  {
LABEL_7:
    if ( v4 )
    {
LABEL_9:
      BgInternal = *(_OWORD *)a1;
      v6 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
      xmmword_1402F9F30 = *(_OWORD *)(a1 + 16);
      qword_1402F9F40 = *(PVOID *)(a1 + 32);
      if ( v6 == 1 )
      {
        LODWORD(xmmword_1402F9F30) = 5;
        v3 |= 8u;
      }
      dword_1402F9F90 = v3 | 2;
      return 0LL;
    }
LABEL_8:
    ResFwBackgroundTransition(0LL);
    v3 = dword_1402F9F90;
    goto LABEL_9;
  }
  if ( (dword_1402F9F90 & 0xC00) == 0xC00 )
  {
    if ( !(_BYTE)xmmword_1402F9F48
      || !BYTE1(xmmword_1402F9F48)
      || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_1402F9F58
      || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_1402F9F48 + 4)
      || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_1402F9F48)
      || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(BaseAddress) )
    {
      return 3221225659LL;
    }
    *(_BYTE *)(a1 + 1) = 1;
    *(_QWORD *)(a1 + 32) = BaseAddress;
    v3 = dword_1402F9F90;
    goto LABEL_7;
  }
  v7 = *(_DWORD *)(a1 + 12);
  if ( ((*(_BYTE *)(a1 + 2) - 1) & 0xFD) != 0 )
    v8 = (unsigned int)(*(_DWORD *)(a1 + 4) * v7);
  else
    v8 = (unsigned int)(*(_DWORD *)(a1 + 8) * v7);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = ((unsigned int)(*(_DWORD *)(a1 + 16) != 4) + 3) * v8;
  v11 = MmMapIoSpaceEx(v9, v10, 0x404u);
  *(_QWORD *)(a1 + 32) = v11;
  if ( !v11 )
    *(_QWORD *)(a1 + 32) = MmMapIoSpaceEx(v9, v10, 0x204u);
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 1) = 1;
    if ( (_BYTE)xmmword_1402F9F48 && BYTE1(xmmword_1402F9F48) )
    {
      v12 = DWORD1(xmmword_1402F9F48);
      LOBYTE(v1) = (_DWORD)xmmword_1402F9F58 != 4;
      v13 = v1 + 3;
      if ( ((BYTE2(xmmword_1402F9F48) - 1) & 0xFD) == 0 )
        v12 = DWORD2(xmmword_1402F9F48);
      MmUnmapIoSpace(BaseAddress, (unsigned int)(HIDWORD(xmmword_1402F9F48) * v12) * (unsigned __int64)v13);
    }
    xmmword_1402F9F48 = *(_OWORD *)a1;
    xmmword_1402F9F58 = *(_OWORD *)(a1 + 16);
    BaseAddress = *(PVOID *)(a1 + 32);
    goto LABEL_8;
  }
  return 3221225626LL;
}
