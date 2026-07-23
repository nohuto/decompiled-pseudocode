/*
 * XREFs of MiUpdatePfnBackingStore @ 0x14011A048
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 *v10; // r11
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 v14; // r10

  v8 = 1;
  if ( !a4 )
    MiLockPageInline(a1);
  if ( (*(_BYTE *)(a1 + 16) & 2) != 0 )
    v8 = 3;
  v9 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), a2, a3, v8);
  *v10 = v9;
  result = MiPteInShadowRange(v10, v9);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v13, v12);
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v14;
    __writecr8(v14);
  }
  return result;
}
