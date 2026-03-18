/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x140290668
 * Callers:
 *     ?xxxHandleVolumeUpDownKey@@YAXE_N@Z @ 0x1401FFB98 (-xxxHandleVolumeUpDownKey@@YAXE_N@Z.c)
 * Callees:
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x140251FAC (-xxxUserBeep@@YAHKK_N@Z.c)
 *     ?VolumeUpDownComboSupported@@YA_NXZ @ 0x1402A7A68 (-VolumeUpDownComboSupported@@YA_NXZ.c)
 */

void xxxHandleVolumeUpDownCombo(void)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rdi
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  UserSessionState = W32GetUserSessionState(v2, v1);
  v4 = *(_DWORD *)(UserSessionState + 66768);
  if ( v4 )
  {
    if ( PerformanceCounter.QuadPart <= *(_QWORD *)(UserSessionState + 66776) )
      goto LABEL_6;
    *(_QWORD *)(UserSessionState + 66776) = PerformanceCounter.QuadPart + 2LL * gliQpcFreq;
  }
  else
  {
    *(_QWORD *)(UserSessionState + 66776) = PerformanceCounter.QuadPart + 2LL * gliQpcFreq;
  }
  v4 = 0;
LABEL_6:
  v5 = v4 + 1;
  *(_DWORD *)(UserSessionState + 66768) = v5;
  if ( v5 >= 3 )
  {
    if ( VolumeUpDownComboSupported() )
    {
      xxxUserBeep(494LL, 200LL, 1);
      LOBYTE(v6) = 1;
      xxxDisplayDiagBlackScreenDetected(2LL, v6);
    }
    *(_DWORD *)(UserSessionState + 66768) = 0;
  }
}
