/*
 * XREFs of EdgyRegisterListener @ 0x1402C3A30
 * Callers:
 *     NtUserRegisterEdgy @ 0x14024B4E0 (NtUserRegisterEdgy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1402C2E94 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall EdgyRegisterListener(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  struct tagDESKTOP *v4; // rsi
  struct tagTHREADINFO *v5; // rax

  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(struct tagDESKTOP **)a1;
  v5 = PtiCurrent(a1);
  return Edgy::_AddOrUpdateListener(*((Edgy **)v5 + 61), v4, v3, v2);
}
