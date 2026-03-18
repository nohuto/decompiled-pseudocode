/*
 * XREFs of BgpFwLibraryEnable @ 0x14011BDB8
 * Callers:
 *     BgLibraryEnable @ 0x1401178FC (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1400C0C7C (MmMapIoSpaceEx.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     ResFwBackgroundTransition @ 0x1406D9C2C (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v1; // esi
  int v3; // ecx
  bool v4; // bl
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax

  v1 = 0;
  v3 = dword_1402D4BB0;
  v4 = (dword_1402D4BB0 & 0xC00) == 3072;
  if ( (dword_1402D4BB0 & 2) != 0 && (dword_1402D4BB0 & 0xC00) != 0xC00 )
    return 0LL;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
    goto LABEL_17;
  if ( (dword_1402D4BB0 & 0xC00) == 0xC00 )
  {
    if ( !(_BYTE)xmmword_1402D4B68
      || !BYTE1(xmmword_1402D4B68)
      || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_1402D4B78
      || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_1402D4B68 + 4)
      || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_1402D4B68)
      || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(BaseAddress) )
    {
      return 3221225659LL;
    }
    *(_BYTE *)(a1 + 1) = 1;
    *(_QWORD *)(a1 + 32) = BaseAddress;
    v3 = dword_1402D4BB0;
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
    if ( (_BYTE)xmmword_1402D4B68 && BYTE1(xmmword_1402D4B68) )
    {
      LOBYTE(v1) = (_DWORD)xmmword_1402D4B78 != 4;
      MmUnmapIoSpace(
        BaseAddress,
        (unsigned int)(v1 + 3)
      * (unsigned __int64)(unsigned int)(HIDWORD(xmmword_1402D4B68) * DWORD1(xmmword_1402D4B68)));
    }
    xmmword_1402D4B68 = *(_OWORD *)a1;
    xmmword_1402D4B78 = *(_OWORD *)(a1 + 16);
    BaseAddress = *(PVOID *)(a1 + 32);
LABEL_10:
    ResFwBackgroundTransition(0LL);
    v3 = dword_1402D4BB0;
LABEL_11:
    BgInternal = *(_OWORD *)a1;
    v8 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
    xmmword_1402D4B50 = *(_OWORD *)(a1 + 16);
    Src = *(PVOID *)(a1 + 32);
    if ( v8 == 1 )
    {
      LODWORD(xmmword_1402D4B50) = 5;
      v3 |= 8u;
    }
    dword_1402D4BB0 = v3 | 2;
    return 0LL;
  }
  return 3221225626LL;
}
