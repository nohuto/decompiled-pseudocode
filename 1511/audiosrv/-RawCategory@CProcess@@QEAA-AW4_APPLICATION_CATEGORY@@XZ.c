/*
 * XREFs of ?RawCategory@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800A0B80
 * Callers:
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800A0B00 (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::RawCategory(unsigned int *a1)
{
  if ( a1[111] && a1[110] == 4 )
    return a1[112];
  else
    return a1[78];
}
