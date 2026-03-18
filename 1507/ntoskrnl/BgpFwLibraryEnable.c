/*
 * XREFs of BgpFwLibraryEnable @ 0x14015003C
 * Callers:
 *     BgLibraryEnable @ 0x14014C8C8 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140115984 (MmMapIoSpaceEx.c)
 *     ResFwBackgroundTransition @ 0x14075CC74 (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v2; // ecx
  int v3; // esi
  bool v4; // bl
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax

  v2 = dword_140323CF0;
  if ( (dword_140323CF0 & 2) != 0 )
    return 0LL;
  v3 = 0;
  v4 = (dword_140323CF0 & 0xC00) == 3072;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
    goto LABEL_17;
  if ( (dword_140323CF0 & 0xC00) == 0xC00 )
  {
    if ( !(_BYTE)xmmword_140323CA8
      || !BYTE1(xmmword_140323CA8)
      || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_140323CB8
      || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_140323CA8 + 4)
      || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_140323CA8)
      || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(BaseAddress) )
    {
      return 3221225659LL;
    }
    *(_BYTE *)(a1 + 1) = 1;
    *(_QWORD *)(a1 + 32) = BaseAddress;
    v2 = dword_140323CF0;
LABEL_17:
    if ( v4 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(a1 + 32);
  v6 = ((unsigned int)(*(_DWORD *)(a1 + 16) != 4) + 3)
     * (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 12));
  v7 = MmMapIoSpaceEx(v5, v6, 0x404u);
  *(_QWORD *)(a1 + 32) = v7;
  if ( !v7 )
    *(_QWORD *)(a1 + 32) = MmMapIoSpaceEx(v5, v6, 0x204u);
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 1) = 1;
    if ( (_BYTE)xmmword_140323CA8 && BYTE1(xmmword_140323CA8) )
    {
      LOBYTE(v3) = (_DWORD)xmmword_140323CB8 != 4;
      MmUnmapIoSpace(
        BaseAddress,
        (unsigned int)(v3 + 3)
      * (unsigned __int64)(unsigned int)(HIDWORD(xmmword_140323CA8) * DWORD1(xmmword_140323CA8)));
    }
    xmmword_140323CA8 = *(_OWORD *)a1;
    xmmword_140323CB8 = *(_OWORD *)(a1 + 16);
    BaseAddress = *(PVOID *)(a1 + 32);
LABEL_10:
    ResFwBackgroundTransition(0LL);
    v2 = dword_140323CF0;
LABEL_11:
    BgInternal = *(_OWORD *)a1;
    v8 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
    xmmword_140323C90 = *(_OWORD *)(a1 + 16);
    qword_140323CA0 = *(PVOID *)(a1 + 32);
    if ( v8 == 1 )
    {
      LODWORD(xmmword_140323C90) = 5;
      v2 |= 8u;
    }
    dword_140323CF0 = v2 | 2;
    return 0LL;
  }
  return 3221225626LL;
}
