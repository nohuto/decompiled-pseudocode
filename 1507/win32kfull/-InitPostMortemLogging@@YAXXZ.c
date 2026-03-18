/*
 * XREFs of ?InitPostMortemLogging@@YAXXZ @ 0x1C01550F8
 * Callers:
 *     InitModuleAllocations @ 0x1C01550F0 (InitModuleAllocations.c)
 * Callees:
 *     InitQMiPTrace @ 0x1C0155198 (InitQMiPTrace.c)
 */

// write access to const memory has been detected, the output may be wrong!
void InitPostMortemLogging(void)
{
  char v0; // al

  FastGetProfileDwordW(0LL, 2LL, L"USERPostMortemLogging", (unsigned int)gdwPostMortemLogging, &gdwPostMortemLogging, 0);
  v0 = gdwPostMortemLogging;
  if ( (gdwPostMortemLogging & 1) != 0 )
  {
    InitQMiPTrace();
    v0 = gdwPostMortemLogging;
  }
  if ( (v0 & 2) != 0 )
  {
    gdwAtomicCheckLogSize = 12;
    gpAtomickCheckStacks = Win32AllocPoolZInit(768LL, 1297118037LL);
    v0 = gdwPostMortemLogging;
  }
  if ( (v0 & 4) != 0 )
  {
    gpLinkWindowLog = (struct LINKWINDOW_LOG *)Win32AllocPoolZInit(8704LL, 1297118037LL);
    guiLinkWindowLogSize = 64;
  }
}
