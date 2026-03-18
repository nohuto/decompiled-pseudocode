/*
 * XREFs of MiInitializeWowPeb @ 0x140462398
 * Callers:
 *     MmCreatePeb @ 0x140465AC4 (MmCreatePeb.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 *     MiCreatePebOrTeb @ 0x140421270 (MiCreatePebOrTeb.c)
 *     MmCheckImageMapping @ 0x1404626AC (MmCheckImageMapping.c)
 *     MmGetSectionInformation @ 0x140510EFC (MmGetSectionInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int64 v16; // rcx
  ULONG Size; // [rsp+24h] [rbp-74h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-70h] BYREF
  _WORD *v19; // [rsp+30h] [rbp-68h]
  _OWORD v20[4]; // [rsp+40h] [rbp-58h] BYREF
  BOOLEAN MappedAsImage; // [rsp+B8h] [rbp+20h] BYREF

  if ( *(_QWORD *)(a4 + 1064) )
  {
    result = MmCheckImageMapping(a4, &MappedAsImage);
    if ( (int)result < 0 )
      return result;
    v11 = RtlImageDirectoryEntryToData(*(PVOID *)(v10 + 960), MappedAsImage, 0xAu, &Size);
    v12 = v11;
    v19 = v11;
    if ( v11 )
    {
      if ( ((unsigned __int8)v11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = v19;
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
      if ( (v14 & qword_1403D15E8[*(unsigned __int16 *)(a5 + 8)]) != v14 )
        v14 = 0LL;
      *(_QWORD *)a5 = v14;
    }
  }
  result = MiCreatePebOrTeb(a4, 0LL, 0x260u, &v18);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a4 + 1064) )
    {
      v16 = v18;
      *(_QWORD *)(a4 + 1064) = v18;
    }
    else
    {
      result = MmGetSectionInformation(*(_QWORD *)(a4 + 952), 1LL, v20);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a3 + 4008) = 0xFF00FF0011001100uLL;
      *(_OWORD *)(a3 + 4024) = v20[0];
      *(_OWORD *)(a3 + 4040) = v20[1];
      *(_OWORD *)(a3 + 4056) = v20[2];
      *(_OWORD *)(a3 + 4072) = v20[3];
      *(_QWORD *)(a3 + 4088) = 0xFF00FF0011001100uLL;
      v16 = v18;
      *(_QWORD *)(a3 + 4016) = v18;
    }
    if ( *(_QWORD *)(a1 + 32) > 0x40000000uLL )
      *(_QWORD *)(a1 + 32) = 0x100000LL;
    if ( *(_QWORD *)(a1 + 40) > *(_QWORD *)(a1 + 32) )
      *(_QWORD *)(a1 + 40) = 0x2000LL;
    *(_QWORD *)(a1 + 72) = v16 + 592;
    *(_DWORD *)(a1 + 56) = 872;
    *(_DWORD *)(v16 + 164) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(v16 + 168) = *(_DWORD *)(a1 + 16);
    *(_WORD *)(v16 + 172) = *(_WORD *)(a1 + 24);
    *(_DWORD *)(v16 + 176) = *(_DWORD *)(a1 + 20);
    *(_WORD *)(v16 + 174) = *(_WORD *)(a1 + 26);
    *(_DWORD *)(v16 + 120) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v16 + 124) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(v16 + 100) = KeNumberProcessors_0;
    *(_DWORD *)(v16 + 104) = NtGlobalFlag;
    *(_QWORD *)(v16 + 112) = qword_14034EB40;
    *(_DWORD *)(v16 + 520) = dword_1403D0104;
    *(_DWORD *)(v16 + 144) = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(v16 + 128) = qword_1403D0118;
    *(_DWORD *)(v16 + 132) = qword_1403D0110;
    *(_DWORD *)(v16 + 140) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(v16 + 468) = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(v16 + 180) = *(_DWORD *)a1;
    *(_DWORD *)(v16 + 184) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v16 + 188) = *(_DWORD *)(a1 + 8);
    *(_BYTE *)v16 = *(_BYTE *)(a1 + 104);
    *(_BYTE *)(v16 + 3) = *(_BYTE *)(a1 + 105);
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(a1 + 112);
    *(_DWORD *)(v16 + 8) = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(v16 + 88) = *(_DWORD *)(a1 + 128);
    *(_DWORD *)(v16 + 92) = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v16 + 96) = *(_DWORD *)(a1 + 144);
    return 0LL;
  }
  return result;
}
