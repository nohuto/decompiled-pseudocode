/*
 * XREFs of PsConvertToGuiThread @ 0x1405091AC
 * Callers:
 *     KiConvertToGuiThread @ 0x140186980 (KiConvertToGuiThread.c)
 * Callees:
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     SeCaptureAtomTableCallout @ 0x1400EFDC0 (SeCaptureAtomTableCallout.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     SeCompareSigningLevels @ 0x140509298 (SeCompareSigningLevels.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rcx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // edi
  _KPROCESS *v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0 )
    return 1073741851LL;
  Process = CurrentThread->ApcState.Process;
  if ( SLODWORD(Process[1].DirectoryTableBase) < 0 )
    return 3221225506LL;
  v8 = CurrentThread->ApcState.Process;
  v9 = 1;
  if ( Process == KeGetCurrentThread()->Process )
  {
    v2 = Process[1].Affinity.Bitmap[17];
    if ( v2 )
    {
      v3 = MiSectionControlArea(v2);
      LOBYTE(v4) = 12;
      v5 = *(_QWORD *)v3;
      LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)v3 + 15LL) >> 4;
      v9 ^= ((unsigned __int8)v9 ^ (unsigned __int8)(2 * SeCompareSigningLevels(v5, v4))) & 2;
    }
  }
  result = PsInvokeWin32Callout(0LL, (__int64)&v8, 0, 0);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    v11 = 0;
    v10 = CurrentThread;
    v7 = PsInvokeWin32Callout((_KPROCESS *)1, (__int64)&v10, 0, 0);
    if ( v7 < 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    SeCaptureAtomTableCallout();
    return (unsigned int)v7;
  }
  return result;
}
