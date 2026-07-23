/*
 * XREFs of MiInitializeWowPeb @ 0x1404FF1B4
 * Callers:
 *     MmCreatePeb @ 0x14046AF88 (MmCreatePeb.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     MmGetSectionInformation @ 0x140470AD8 (MmGetSectionInformation.c)
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 *     MmCheckImageMapping @ 0x1404FF44C (MmCheckImageMapping.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiInitializeWowPeb(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // r9
  _WORD *v11; // rax
  _WORD *v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int16 v15; // ax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rcx
  ULONG Size; // [rsp+24h] [rbp-74h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-70h] BYREF
  _WORD *v20; // [rsp+30h] [rbp-68h]
  _OWORD v21[4]; // [rsp+40h] [rbp-58h] BYREF
  BOOLEAN MappedAsImage; // [rsp+B8h] [rbp+20h] BYREF

  if ( *(_QWORD *)(a4 + 1064) )
  {
    result = MmCheckImageMapping(a4, &MappedAsImage);
    if ( (int)result < 0 )
      return result;
    v11 = RtlImageDirectoryEntryToData(*(PVOID *)(v10 + 960), MappedAsImage, 0xAu, &Size);
    v12 = v11;
    v20 = v11;
    if ( v11 )
    {
      if ( ((unsigned __int8)v11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = v20;
    }
    *(_DWORD *)a1 = *(unsigned __int16 *)(a2 + 92);
    *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(a2 + 72);
    *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(a2 + 74);
    v13 = *(_DWORD *)(a2 + 76);
    if ( v13 )
    {
      *(_DWORD *)(a1 + 12) = (unsigned __int8)v13;
      *(_DWORD *)(a1 + 16) = BYTE1(v13);
      *(_WORD *)(a1 + 24) = HIWORD(v13) & 0x3FFF;
      if ( v12 )
      {
        v15 = v12[26];
        if ( v15 )
          *(_WORD *)(a1 + 26) = v15;
      }
      *(_DWORD *)(a1 + 20) = (v13 ^ 0xBFFFFFFF) >> 30;
    }
    if ( v12 )
    {
      v14 = *((unsigned int *)v12 + 12);
      if ( (v14 & qword_1403AA618[*(unsigned __int16 *)(a5 + 8)]) != v14 )
        v14 = 0LL;
      *(_QWORD *)a5 = v14;
    }
  }
  result = MiCreatePebOrTeb(8, 0LL, &v19);
  if ( (int)result >= 0 )
  {
    v16 = *(_QWORD **)(a4 + 1064);
    if ( v16 )
    {
      v17 = v19;
      *v16 = v19;
    }
    else
    {
      result = MmGetSectionInformation(*(_QWORD *)(a4 + 952), 1, (__int64 *)v21);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a3 + 4008) = 0xFF00FF0011001100uLL;
      *(_OWORD *)(a3 + 4024) = v21[0];
      *(_OWORD *)(a3 + 4040) = v21[1];
      *(_OWORD *)(a3 + 4056) = v21[2];
      *(_OWORD *)(a3 + 4072) = v21[3];
      *(_QWORD *)(a3 + 4088) = 0xFF00FF0011001100uLL;
      v17 = v19;
      *(_QWORD *)(a3 + 4016) = v19;
    }
    if ( *(_QWORD *)(a1 + 32) > 0x40000000uLL )
      *(_QWORD *)(a1 + 32) = 0x100000LL;
    if ( *(_QWORD *)(a1 + 40) > *(_QWORD *)(a1 + 32) )
      *(_QWORD *)(a1 + 40) = 0x2000LL;
    *(_QWORD *)(a1 + 72) = v17 + 1120;
    *(_DWORD *)(a1 + 56) = 740;
    *(_DWORD *)(v17 + 164) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v17 + 168) = *(_DWORD *)(a1 + 16);
    *(_WORD *)(v17 + 172) = *(_WORD *)(a1 + 24);
    *(_DWORD *)(v17 + 176) = *(_DWORD *)(a1 + 20);
    *(_WORD *)(v17 + 174) = *(_WORD *)(a1 + 26);
    *(_DWORD *)(v17 + 120) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v17 + 124) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(v17 + 100) = KeNumberProcessors_0;
    *(_DWORD *)(v17 + 104) = NtGlobalFlag;
    *(_QWORD *)(v17 + 112) = qword_1403269B0;
    *(_DWORD *)(v17 + 520) = dword_1403A915C;
    *(_DWORD *)(v17 + 144) = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(v17 + 128) = qword_1403A9170;
    *(_DWORD *)(v17 + 132) = qword_1403A9168;
    *(_DWORD *)(v17 + 140) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(v17 + 468) = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(v17 + 180) = *(_DWORD *)a1;
    *(_DWORD *)(v17 + 184) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v17 + 188) = *(_DWORD *)(a1 + 8);
    *(_BYTE *)v17 = *(_BYTE *)(a1 + 104);
    *(_BYTE *)(v17 + 3) = *(_BYTE *)(a1 + 105);
    *(_DWORD *)(v17 + 4) = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(v17 + 8) = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(v17 + 88) = *(_DWORD *)(a1 + 128);
    *(_DWORD *)(v17 + 92) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v17 + 96) = *(_DWORD *)(a1 + 144);
    return 0LL;
  }
  return result;
}
