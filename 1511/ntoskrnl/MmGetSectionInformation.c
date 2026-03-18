/*
 * XREFs of MmGetSectionInformation @ 0x14044F1E4
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     NtQuerySection @ 0x14044F0C8 (NtQuerySection.c)
 *     AlpcpMapLegacyPortView @ 0x14044FC24 (AlpcpMapLegacyPortView.c)
 *     MiInitializeWowPeb @ 0x140461E70 (MiInitializeWowPeb.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     PspLocateSystemDll @ 0x14053F9A8 (PspLocateSystemDll.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiRelocateAmount @ 0x14054B548 (MiRelocateAmount.c)
 */

__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2)
{
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  __int64 v5; // r8
  __int16 v6; // r9
  int v7; // r10d
  unsigned int v8; // r11d
  int v9; // edx
  __int128 *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int16 v19; // dx
  _DWORD v20[4]; // [rsp+60h] [rbp+0h] BYREF

  v4 = (_DWORD *)MiSectionControlArea(a1);
  if ( !v9 )
  {
    if ( (v6 & 0x20) != 0 )
      v7 = 0x1000000;
    if ( (v6 & 0x40) != 0 )
      v7 |= 0x200000u;
    if ( (v6 & 0x80u) != 0 )
      v7 |= 0x800000u;
    v19 = *(_WORD *)(*(_QWORD *)v4 + 12LL);
    if ( v19 < 0 )
      v7 |= 0x10000000u;
    if ( (v19 & 0x4000) != 0 )
      v7 |= 0x40000000u;
    if ( (v6 & 0x1000) != 0 )
      v7 |= 0x4000000u;
    if ( (v6 & 0x2000) != 0 )
      v7 |= 0x8000000u;
    if ( (v4[14] & 0x20020) == 0x20020 )
      v7 |= 0x20000000u;
  }
  if ( !a2 )
  {
    *(_QWORD *)v5 = *(_QWORD *)(v3 + 24) << 12;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(v3 + 48);
    *(_DWORD *)(v5 + 8) = v7;
    return v8;
  }
  if ( a2 == 1 )
  {
    if ( (v6 & 0x20) != 0 )
    {
      v10 = *(__int128 **)(*(_QWORD *)v4 + 56LL);
      v11 = *v10;
      *(_OWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v14 = v10[3];
      if ( (v4[14] & 0x10000000) != 0 )
      {
        v17 = *(unsigned __int16 *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v17;
        *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = qword_1402FE680 | v17;
        v11 = *(_OWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      }
      *(_OWORD *)v5 = v11;
      *(_OWORD *)(v5 + 16) = v12;
      *(_OWORD *)(v5 + 32) = v13;
      *(_OWORD *)(v5 + 48) = v14;
      return v8;
    }
LABEL_13:
    v8 = -1073741751;
    *(_DWORD *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) = -1073741751;
    return v8;
  }
  if ( (v6 & 0x20) == 0 )
    goto LABEL_13;
  v15 = MiRelocateAmount(v4);
  if ( (v4[14] & 0x10000000) != 0 )
    v15 += qword_1402FE680 - *(_QWORD *)(*(_QWORD *)v4 + 32LL);
  *v16 = v15;
  return v8;
}
