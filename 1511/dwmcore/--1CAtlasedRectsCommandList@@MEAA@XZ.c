/*
 * XREFs of ??1CAtlasedRectsCommandList@@MEAA@XZ @ 0x1800B0BE8
 * Callers:
 *     ??_ECAtlasedRectsCommandList@@MEAAPEAXI@Z @ 0x1800B0B90 (--_ECAtlasedRectsCommandList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CAtlasedRectsCommandList::~CAtlasedRectsCommandList(CAtlasedRectsCommandList *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CAtlasedRectsCommandList::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
