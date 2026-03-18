/*
 * XREFs of FxPurgeBugCheckDriverInfo @ 0x1C00A2C40
 * Callers:
 *     FxDestroy @ 0x1C007FFF0 (FxDestroy.c)
 * Callees:
 *     memmove @ 0x1C0040140 (memmove.c)
 */

void __fastcall FxPurgeBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // al
  __int64 BugCheckDriverInfoIndex; // rbx
  KIRQL v4; // si
  _FX_DUMP_DRIVER_INFO_ENTRY *BugCheckDriverInfo; // r8
  unsigned int v6; // edx
  _FX_DUMP_DRIVER_INFO_ENTRY *v7; // rcx
  __int64 v8; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
  BugCheckDriverInfoIndex = FxDriverGlobals->BugCheckDriverInfoIndex;
  v4 = v2;
  if ( (_DWORD)BugCheckDriverInfoIndex )
  {
    BugCheckDriverInfo = FxLibraryGlobals.BugCheckDriverInfo;
    if ( FxLibraryGlobals.BugCheckDriverInfo )
    {
      v6 = FxLibraryGlobals.BugCheckDriverInfoIndex;
      if ( (unsigned int)BugCheckDriverInfoIndex < FxLibraryGlobals.BugCheckDriverInfoIndex )
      {
        v7 = &FxLibraryGlobals.BugCheckDriverInfo[BugCheckDriverInfoIndex];
        if ( v7->FxDriverGlobals == FxDriverGlobals )
        {
          if ( FxLibraryGlobals.BugCheckDriverInfoIndex - (_DWORD)BugCheckDriverInfoIndex != 1 )
          {
            memmove(
              v7,
              &v7[1],
              56LL * (unsigned int)(FxLibraryGlobals.BugCheckDriverInfoIndex - BugCheckDriverInfoIndex - 1));
            BugCheckDriverInfo = FxLibraryGlobals.BugCheckDriverInfo;
            v6 = FxLibraryGlobals.BugCheckDriverInfoIndex;
          }
          FxLibraryGlobals.BugCheckDriverInfoIndex = v6 - 1;
          if ( (unsigned int)BugCheckDriverInfoIndex < v6 - 1 )
          {
            while ( 1 )
            {
              v8 = (unsigned int)BugCheckDriverInfoIndex;
              LODWORD(BugCheckDriverInfoIndex) = BugCheckDriverInfoIndex + 1;
              --BugCheckDriverInfo[v8].FxDriverGlobals->BugCheckDriverInfoIndex;
              if ( (unsigned int)BugCheckDriverInfoIndex >= FxLibraryGlobals.BugCheckDriverInfoIndex )
                break;
              BugCheckDriverInfo = FxLibraryGlobals.BugCheckDriverInfo;
            }
          }
        }
      }
    }
  }
  KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v4);
}
