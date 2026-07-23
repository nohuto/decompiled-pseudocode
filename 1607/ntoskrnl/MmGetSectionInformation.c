/*
 * XREFs of MmGetSectionInformation @ 0x140470AD8
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     NtQuerySection @ 0x1404709B4 (NtQuerySection.c)
 *     AlpcpMapLegacyPortView @ 0x1404713B8 (AlpcpMapLegacyPortView.c)
 *     MiInitializeWowPeb @ 0x1404FF1B4 (MiInitializeWowPeb.c)
 *     PspLocateSystemDll @ 0x140554BC0 (PspLocateSystemDll.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiRelocateAmount @ 0x14050A68C (MiRelocateAmount.c)
 */

__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2, __int64 *a3)
{
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // r8
  __int16 v8; // r9
  int v9; // r10d
  unsigned int v10; // r11d
  int v11; // edx
  __int128 *v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int16 v20; // dx
  _BYTE v21[80]; // [rsp+90h] [rbp+90h] BYREF

  v6 = (_DWORD *)MiSectionControlArea(a1);
  if ( !v11 )
  {
    if ( (v8 & 0x20) != 0 )
      v9 = 0x1000000;
    if ( (v8 & 0x40) != 0 )
      v9 |= 0x200000u;
    if ( (v8 & 0x80u) != 0 )
      v9 |= 0x800000u;
    v20 = *(_WORD *)(*(_QWORD *)v6 + 12LL);
    if ( v20 < 0 )
      v9 |= 0x10000000u;
    if ( (v20 & 0x4000) != 0 )
      v9 |= 0x40000000u;
    if ( (v8 & 0x1000) != 0 )
      v9 |= 0x4000000u;
    if ( (v8 & 0x2000) != 0 )
      v9 |= 0x8000000u;
    if ( (v6[14] & 0x20020) == 0x20020 )
      v9 |= 0x20000000u;
  }
  if ( !a2 )
  {
    *(_QWORD *)v7 = *(_QWORD *)(v5 + 24) << 12;
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(v5 + 48);
    *(_DWORD *)(v7 + 8) = v9;
    return v10;
  }
  if ( a2 == 1 )
  {
    if ( (v8 & 0x20) != 0 )
    {
      v12 = *(__int128 **)(*(_QWORD *)v6 + 56LL);
      v13 = *v12;
      *(_OWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *v12;
      v14 = v12[1];
      v15 = v12[2];
      v16 = v12[3];
      if ( (v6[14] & 0x10000000) != 0 )
      {
        v18 = *(unsigned __int16 *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v18;
        *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = qword_1403269A0 | v18;
        v13 = *(_OWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      }
      *(_OWORD *)v7 = v13;
      *(_OWORD *)(v7 + 16) = v14;
      *(_OWORD *)(v7 + 32) = v15;
      *(_OWORD *)(v7 + 48) = v16;
      return v10;
    }
LABEL_14:
    v10 = -1073741751;
    *(_DWORD *)((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) = -1073741751;
    return v10;
  }
  if ( (v8 & 0x20) == 0 )
    goto LABEL_14;
  v17 = MiRelocateAmount(v6, 0LL);
  if ( a2 == 2 )
  {
    if ( (v6[14] & 0x10000000) != 0 )
      v17 += qword_1403269A0 - *(_QWORD *)(*(_QWORD *)v6 + 32LL);
    *a3 = v17;
  }
  else
  {
    *a3 = *(_QWORD *)(*(_QWORD *)v6 + 32LL) - v17;
  }
  return v10;
}
