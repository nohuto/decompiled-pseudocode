/*
 * XREFs of MmGetSectionInformation @ 0x140510EFC
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     MiInitializeWowPeb @ 0x140462398 (MiInitializeWowPeb.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     AlpcpMapLegacyPortView @ 0x14052ABD8 (AlpcpMapLegacyPortView.c)
 *     NtQuerySection @ 0x140541E3C (NtQuerySection.c)
 *     PspLocateSystemDll @ 0x1405B57F8 (PspLocateSystemDll.c)
 * Callees:
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiRelocateAmount @ 0x1405C28DC (MiRelocateAmount.c)
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
  __int16 v18; // dx
  __int128 v19; // [rsp+30h] [rbp-48h]

  v4 = (_DWORD *)MiSectionControlArea(a1);
  if ( !v9 )
  {
    if ( (v6 & 0x20) != 0 )
      v7 = 0x1000000;
    if ( (v6 & 0x40) != 0 )
      v7 |= 0x200000u;
    if ( (v6 & 0x80u) != 0 )
      v7 |= 0x800000u;
    v18 = *(_WORD *)(*(_QWORD *)v4 + 12LL);
    if ( v18 < 0 )
      v7 |= 0x10000000u;
    if ( (v18 & 0x4000) != 0 )
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
      v19 = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v14 = v10[3];
      if ( (v4[14] & 0x10000000) != 0 )
      {
        *(_QWORD *)&v19 = qword_14034EB30 | (unsigned __int16)v19;
        v11 = v19;
      }
      *(_OWORD *)v5 = v11;
      *(_OWORD *)(v5 + 16) = v12;
      *(_OWORD *)(v5 + 32) = v13;
      *(_OWORD *)(v5 + 48) = v14;
      return v8;
    }
    return (unsigned int)-1073741751;
  }
  if ( (v6 & 0x20) == 0 )
    return (unsigned int)-1073741751;
  v15 = MiRelocateAmount(v4);
  if ( (v4[14] & 0x10000000) != 0 )
    v15 += qword_14034EB30 - *(_QWORD *)(*(_QWORD *)v4 + 32LL);
  *v16 = v15;
  return v8;
}
