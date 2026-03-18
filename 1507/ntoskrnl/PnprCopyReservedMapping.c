/*
 * XREFs of PnprCopyReservedMapping @ 0x1401FC738
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1401FCDFC (PnprRecopyMirrorPages.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnprGetPageDestination @ 0x1401FCA90 (PnprGetPageDestination.c)
 *     MmContainingPageForReservedMapping @ 0x140214D0C (MmContainingPageForReservedMapping.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140214DA4 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x140214F34 (MmUnmapReservedMapping.c)
 */

__int64 PnprCopyReservedMapping()
{
  __int64 v0; // rax
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // r8
  unsigned int v4; // esi
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdi
  PHYSICAL_ADDRESS v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r12
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  char *v26; // rdi
  char *v27; // rax
  SIZE_T v28; // rcx
  int v29; // eax
  int v30; // eax
  _QWORD v31[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v33[16]; // [rsp+B8h] [rbp-50h] BYREF

  v0 = *(unsigned int *)(PnprContext + 180);
  v1 = *(_QWORD *)(PnprContext + 144);
  v2 = 3 * v0;
  v3 = *(_QWORD *)(v1 + 24 * v0);
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
    MmUnmapReservedMapping(*(PVOID *)(v1 + 24 * v0 + 8), 0x51706E50u, (PMDL)v3);
  memset(Src, 0, sizeof(Src));
  memset(v33, 0, sizeof(v33));
  v4 = 0;
  PhysicalAddress = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v1 + 8 * v2) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)(
              (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
              v31) >= 0
    && v31[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = 1;
    v33[0] = v31[0] >> 12;
    Src[0] = PhysicalAddress.QuadPart >> 12;
  }
  v6 = *(_QWORD *)(v1 + 8 * v2 + 8);
  v7 = v6 + 0x10000;
  while ( v6 < v7 )
  {
    v8 = MmContainingPageForReservedMapping(v6);
    if ( !v4 || v8 != Src[v4 - 1] )
    {
      v9 = v8 << 12;
      if ( (int)PnprGetPageDestination(v9, v31) >= 0 && v31[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v4 >= 0x10 )
          return 3221225485LL;
        v10 = v4;
        v11 = v31[0] >> 12;
        ++v4;
        Src[v10] = v9 >> 12;
        v33[v10] = v11;
      }
    }
    v6 += 4096LL;
  }
  v12 = *(unsigned int *)(PnprContext + 180);
  v13 = *(_QWORD *)(PnprContext + 136);
  v14 = 3 * v12;
  v15 = MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v13 + 24 * v12) & 0xFFFFFFFFFFFFF000uLL));
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD))PnprGetPageDestination)((PHYSICAL_ADDRESS)v15.QuadPart, v31) >= 0
    && v31[0] != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v4 >= 0x10 )
      return 3221225485LL;
    v16 = v4;
    v17 = v31[0] >> 12;
    ++v4;
    Src[v16] = v15.QuadPart >> 12;
    v33[v16] = v17;
  }
  v18 = *(_QWORD *)(v13 + 8 * v14 + 8);
  v19 = v18 + 0x10000;
  while ( v18 < v19 )
  {
    v21 = MmContainingPageForReservedMapping(v18);
    if ( v4 > 0x10 )
      return 3221225485LL;
    if ( !v4 || v21 != Src[v4 - 1] )
    {
      v22 = v21 << 12;
      if ( (int)PnprGetPageDestination(v22, v31) >= 0 && v31[0] != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v4 >= 0x10 )
          return 3221225485LL;
        v23 = v4;
        v24 = v31[0] >> 12;
        ++v4;
        Src[v23] = v22 >> 12;
        v33[v23] = v24;
      }
    }
    v18 += 4096LL;
  }
  if ( !v4 )
    return 0LL;
  v25 = *(_QWORD *)(v1 + 8 * v2);
  *(_DWORD *)(v25 + 40) = v4 << 13;
  *(_QWORD *)v25 = 0LL;
  *(_WORD *)(v25 + 10) = 0;
  *(_QWORD *)(v25 + 32) = 0LL;
  *(_DWORD *)(v25 + 44) = 0;
  *(_WORD *)(v25 + 8) = 8 * ((((unsigned __int64)(v4 << 13) + 4095) >> 12) + 6);
  v26 = (char *)(*(_QWORD *)(v1 + 8 * v2) + 48LL);
  memmove(v26, Src, 8LL * v4);
  memmove(&v26[8 * v4], v33, 8LL * v4);
  *(_WORD *)(*(_QWORD *)(v1 + 8 * v2) + 10LL) |= *(_WORD *)(v1 + 8 * v2 + 16);
  v27 = (char *)MmMapLockedPagesWithReservedMapping(
                  *(PVOID *)(v1 + 8 * v2 + 8),
                  0x51706E50u,
                  *(PMDL *)(v1 + 8 * v2),
                  MmCached);
  if ( v27 )
  {
    memmove(&v27[4096 * v4], v27, v4 << 12);
    return 0LL;
  }
  v28 = PnprContext;
  v29 = *(_DWORD *)(PnprContext + 10744);
  if ( !v29 )
    v29 = 5965;
  *(_DWORD *)(PnprContext + 10744) = v29;
  v30 = *(_DWORD *)(v28 + 10748);
  if ( !v30 )
    v30 = 10;
  *(_DWORD *)(v28 + 10748) = v30;
  return 3221225626LL;
}
