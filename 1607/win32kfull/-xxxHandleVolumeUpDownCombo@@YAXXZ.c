/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01E0B2C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01E0BF0 (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
 *     UserBeep @ 0x1C0228C40 (UserBeep.c)
 */

void xxxHandleVolumeUpDownCombo(void)
{
  LARGE_INTEGER PerformanceCounter; // rax
  int v1; // r8d
  LONGLONG v2; // rdx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v1 = guVolComboCount;
  if ( guVolComboCount )
  {
    if ( PerformanceCounter.QuadPart <= gliVolComboTicks )
      goto LABEL_6;
    v2 = PerformanceCounter.QuadPart + 2000 * gliQpcFreq.QuadPart / 1000;
    v1 = 0;
  }
  else
  {
    v2 = PerformanceCounter.QuadPart + 2000 * gliQpcFreq.QuadPart / 1000;
  }
  gliVolComboTicks = v2;
LABEL_6:
  guVolComboCount = v1 + 1;
  if ( (unsigned int)(v1 + 1) >= 3 )
  {
    if ( (unsigned int)xxxVolumeUpDownComboSupported() )
    {
      UserBeep(494LL, 200LL);
      xxxDisplayDiagBlackScreenDetected(2u);
    }
    guVolComboCount = 0;
  }
}
