/*
 * XREFs of BvgaUpdateProgressBar @ 0x1401F18CC
 * Callers:
 *     BvgaIndicateProgress @ 0x1407F93C0 (BvgaIndicateProgress.c)
 * Callees:
 *     BvgaAcquireLock @ 0x1401F150C (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1401F1754 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaUpdateProgressBar(int a1)
{
  int v1; // ebx
  int v2; // ecx
  __int64 result; // rax
  __int64 v4; // rdi

  v1 = 0;
  if ( ShowProgressBar )
  {
    if ( BvgaBootDriverInstalled )
    {
      if ( !BvgaDisplayState )
      {
        v2 = 18 * (BvgaProgressState + a1 * dword_14034CE38);
        result = (unsigned int)((unsigned __int64)(1759218605LL * v2) >> 32) >> 31;
        if ( v2 / 10000 > 0 )
        {
          v4 = (unsigned int)(v2 / 10000);
          do
          {
            BvgaAcquireLock();
            VidSolidColorFill(
              (unsigned int)(v1 + ProgressBarLeft),
              (unsigned int)ProgressBarTop,
              (unsigned int)(v1 + ProgressBarLeft + 7),
              (unsigned int)(ProgressBarTop + 7),
              11);
            result = BvgaReleaseLock();
            v1 += 9;
            --v4;
          }
          while ( v4 );
        }
      }
    }
  }
  return result;
}
