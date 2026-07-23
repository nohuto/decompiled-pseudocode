/*
 * XREFs of PsConvertToGuiThread @ 0x14045BF90
 * Callers:
 *     KiConvertToGuiThread @ 0x140162150 (KiConvertToGuiThread.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x140013A80 (MmSessionGetWin32Callouts.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     SeCaptureAtomTableCallout @ 0x140074C74 (SeCaptureAtomTableCallout.c)
 *     ExCallCallBack @ 0x140427C90 (ExCallCallBack.c)
 *     SeCompareSigningLevels @ 0x14045C0B0 (SeCompareSigningLevels.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rdi
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 result; // rax
  _RTL_RUN_ONCE *v8; // rax
  __int64 v9; // rcx
  int v10; // esi
  _KPROCESS *v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0 )
    return 1073741851LL;
  Process = CurrentThread->ApcState.Process;
  if ( SLODWORD(Process[1].DirectoryTableBase) < 0 )
    return 3221225506LL;
  v11 = CurrentThread->ApcState.Process;
  v12 = 1;
  if ( Process == KeGetCurrentThread()->Process )
  {
    v2 = Process[1].Affinity.Bitmap[17];
    if ( v2 )
    {
      v3 = MiSectionControlArea(v2);
      LOBYTE(v4) = 12;
      v5 = *(_QWORD *)v3;
      LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)v3 + 15LL) >> 4;
      v12 ^= ((unsigned __int8)v12 ^ (unsigned __int8)(2 * SeCompareSigningLevels(v5, v4))) & 2;
    }
  }
  Win32Callouts = MmSessionGetWin32Callouts();
  result = ExCallCallBack((signed __int64 *)Win32Callouts, 0LL, (__int64)&v11);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x1800000000000LL) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x13u);
    v14 = 0;
    v13 = CurrentThread;
    v8 = MmSessionGetWin32Callouts();
    v10 = ExCallCallBack((signed __int64 *)v8, 1LL, (__int64)&v13);
    if ( v10 < 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
      if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x1800000000000LL) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x13u);
    }
    SeCaptureAtomTableCallout(v9);
    return (unsigned int)v10;
  }
  return result;
}
