/*
 * XREFs of EditionIsGpqForegroundAccessibleCurrent @ 0x1401736D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x140173750 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     ?MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z @ 0x140173868 (-MSGLUA_GPQFOREGROUNDPTI@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessibleCurrent(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // r9
  __int64 v5; // xmm0_8
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  v1 = a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  v4 = *(_QWORD *)(v3 + 456);
  v5 = *(_QWORD *)(v4 + 864);
  v6 = *(_DWORD *)(v4 + 872);
  v7 = *(_DWORD *)(v4 + 12) & 0x80000000;
  v11 = v5;
  v12 = v6;
  if ( (unsigned int)IsGpqForegroundAccessibleExplicit(v1, v3, &v11, v7) )
    return 1LL;
  v10 = PtiCurrent(v8);
  MSGLUA_GPQFOREGROUNDPTI(v10);
  return 0LL;
}
