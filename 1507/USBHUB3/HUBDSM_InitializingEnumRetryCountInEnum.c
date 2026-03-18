/*
 * XREFs of HUBDSM_InitializingEnumRetryCountInEnum @ 0x1C00177F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_InitializingEnumRetryCountInEnum(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 1620), 0xFFFFDFFF);
  *(_DWORD *)(v1 + 2416) = 0;
  *(_DWORD *)(v1 + 32) = 0;
  *(_WORD *)(v1 + 2196) = 0;
  *(_WORD *)(v1 + 2192) = 0;
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2452), 0xFFFFFFFD);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2452), 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2200), 0xFFFFFFFB);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2200), 0xFFFFFFF7);
  return 4077LL;
}
