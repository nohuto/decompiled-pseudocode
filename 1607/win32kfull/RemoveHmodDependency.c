/*
 * XREFs of RemoveHmodDependency @ 0x1C00A758C
 * Callers:
 *     FreeHook @ 0x1C00A4550 (FreeHook.c)
 *     DestroyEventHook @ 0x1C00A95F0 (DestroyEventHook.c)
 *     _RegisterUserApiHook @ 0x1C0111014 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C0111294 (_RegisterDManipHook.c)
 *     _UnregisterUserApiHook @ 0x1C0135250 (_UnregisterUserApiHook.c)
 *     _UnregisterDManipHook @ 0x1C0135480 (_UnregisterDManipHook.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1C01BF698 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveHmodDependency(int a1)
{
  unsigned __int64 v2; // rax

  if ( a1 < catomSysTableEntries && (*((_DWORD *)&acatomSysDepends + a1))-- == 1 )
  {
    if ( *((_DWORD *)&acatomSysUse + a1) )
    {
      ++gcSysExpunge;
      gdwSysExpungeMask |= 1 << a1;
    }
    else
    {
      v2 = 2LL * a1;
      if ( v2 >= 0x40 )
        _report_rangecheckfailure();
      *(_WORD *)((char *)&aatomSysLoaded + v2) = 0;
    }
  }
}
