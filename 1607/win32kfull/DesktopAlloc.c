/*
 * XREFs of DesktopAlloc @ 0x1C006B8F0
 * Callers:
 *     DefSetText @ 0x1C006AF9C (DefSetText.c)
 *     xxxInsertMenuItem @ 0x1C006B448 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     CreateProp @ 0x1C007B05C (CreateProp.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009D254 (xxxCreateDefaultImeWindow.c)
 *     _InitPwSB @ 0x1C00AFCC8 (_InitPwSB.c)
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C0121260 (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0121D44 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C0127104 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     TraceLoggingDesktopAllocFailureEvent @ 0x1C021F4A0 (TraceLoggingDesktopAllocFailureEvent.c)
 */

PVOID __fastcall DesktopAlloc(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID Heap; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx

  v4 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 8) != 0 )
    return 0LL;
  Heap = RtlAllocateHeap(*(PVOID *)(a1 + 120), 0, a2);
  if ( Heap )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
    if ( CurrentProcessWin32Process )
    {
      *(_QWORD *)(CurrentProcessWin32Process + 1000) += v4;
      v14 = *(_QWORD *)(CurrentProcessWin32Process + 632);
      if ( v14 )
        *(_QWORD *)(v14 + 200) += v4;
    }
  }
  else
  {
    v9 = PsGetCurrentProcessWin32Process(v7, v6);
    v11 = v9;
    if ( v9 )
    {
      ++*(_DWORD *)(v9 + 980);
      v12 = *(_QWORD *)(v9 + 632);
      if ( v12 )
        ++*(_DWORD *)(v12 + 184);
      TraceLoggingDesktopAllocFailureEvent(
        v4,
        a3,
        *(_QWORD *)(v9 + 1000),
        *(_DWORD *)(v9 + 980),
        1,
        ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
      - *(_BYTE *)(v9 + 984),
        *(_DWORD *)(v9 + 56));
    }
    if ( (*gpsi & 0x100) != 0 )
    {
      *gpsi &= ~0x100u;
      UserLogError(2147483891LL, v10, v11);
    }
  }
  return Heap;
}
