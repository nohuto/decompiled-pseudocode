/*
 * XREFs of MiTrimUnusedPageFileRegionsApc @ 0x14010F784
 * Callers:
 *     <none>
 * Callees:
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x1401F2578 (MiMakePageFilePte.c)
 */

LONG __fastcall MiTrimUnusedPageFileRegionsApc(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 PageFilePte; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int FreePageFileSpace; // ebp
  __int64 v8; // r8
  int PteTimeStamp; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(v1 + 8LL * *(unsigned int *)(a1 + 32) + 6304);
  PageFilePte = MiMakePageFilePte(*(unsigned int *)(a1 + 40));
  v5 = *(unsigned int *)(a1 + 36);
  v13 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | PageFilePte & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v1, &v13, v5, 0xABu);
  if ( FreePageFileSpace >= *(_DWORD *)(a1 + 36) )
  {
    PteTimeStamp = MiGetPteTimeStamp(v13, v6, v8);
    *(_DWORD *)(a1 + 40) = PteTimeStamp;
    v10 = MiMakePageFilePte(PteTimeStamp + FreePageFileSpace);
    v11 = *(_QWORD *)v3;
    v13 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | v10 & 0xFFFFFFFFFFFF0FFFuLL;
    *(_DWORD *)(a1 + 44) = FreePageFileSpace + MiFindFreePageFileSpace(v1, &v13, v11, 0x6Bu);
  }
  return KeSetEvent((PRKEVENT)a1, 0, 0);
}
