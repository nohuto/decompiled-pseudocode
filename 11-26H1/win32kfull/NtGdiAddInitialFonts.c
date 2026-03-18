/*
 * XREFs of NtGdiAddInitialFonts @ 0x14025CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CBA10 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 NtGdiAddInitialFonts()
{
  __int64 CSRSSProcess; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdx
  int v3; // ecx
  __int64 result; // rax
  __int64 SessionState; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rcx

  CSRSSProcess = UserGetCSRSSProcess();
  if ( PsGetCurrentProcess(v1) != CSRSSProcess )
    return 3221225506LL;
  SessionState = W32GetSessionState(v3, v2);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 24192LL) = CurrentThread;
  v9 = UmfdHostLifeTimeManager::AddInitialFonts((__int64)CurrentThread, v7, v8) == 0 ? 0xC0000017 : 0;
  v12 = *(_QWORD *)(W32GetSessionState(v11, v10) + 96);
  result = v9;
  *(_QWORD *)(v12 + 24192) = KeGetCurrentThread();
  return result;
}
