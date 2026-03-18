/*
 * XREFs of _ForceEnableNumpadTranslation @ 0x14025AFB0
 * Callers:
 *     NtUserForceEnableNumpadTranslation @ 0x14025AF70 (NtUserForceEnableNumpadTranslation.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall ForceEnableNumpadTranslation(__int64 a1)
{
  __int64 v1; // rbx
  struct tagTHREADINFO *v2; // rax
  unsigned __int64 v3; // r8

  v1 = (int)a1;
  v2 = PtiCurrent(a1);
  v3 = *((_QWORD *)v2 + 170);
  *((_QWORD *)v2 + 170) = (v1 << 23) ^ (v3 ^ (v1 << 23)) & 0xFFFFFFFFFF7FFFFFuLL;
  return (v3 >> 23) & 1;
}
