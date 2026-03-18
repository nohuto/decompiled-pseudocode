/*
 * XREFs of ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0046F10
 * Callers:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0010CC8 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001196C (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00127F4 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C007C060 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007D970 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007EFD0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00D5F90 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::Current(__int64 a1)
{
  __int64 v1; // rbx
  __int64 CurrentProcessWin32Process; // rax

  v1 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    return *(struct DirectComposition::CProcessData **)(CurrentProcessWin32Process + 256);
  return (struct DirectComposition::CProcessData *)v1;
}
