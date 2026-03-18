/*
 * XREFs of PsConvertToGuiThread @ 0x140448CAC
 * Callers:
 *     KiConvertToGuiThread @ 0x140157390 (KiConvertToGuiThread.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     SeCaptureAtomTableCallout @ 0x140091E20 (SeCaptureAtomTableCallout.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     SeCompareSigningLevels @ 0x140448D98 (SeCompareSigningLevels.c)
 */

__int64 PsConvertToGuiThread()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rcx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  int v8; // edi
  _KPROCESS *v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  struct _KTHREAD *v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread->PreviousMode )
    return 3221225485LL;
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0 )
    return 1073741851LL;
  Process = CurrentThread->ApcState.Process;
  if ( SLODWORD(Process[1].DirectoryTableBase) < 0 )
    return 3221225506LL;
  v9 = CurrentThread->ApcState.Process;
  v10 = 1;
  if ( Process == KeGetCurrentThread()->Process )
  {
    v2 = Process[1].Affinity.Bitmap[17];
    if ( v2 )
    {
      v3 = MiSectionControlArea(v2);
      LOBYTE(v4) = 12;
      v5 = *(_QWORD *)v3;
      LOBYTE(v5) = *(_BYTE *)(*(_QWORD *)v3 + 15LL) >> 4;
      v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(2 * SeCompareSigningLevels(v5, v4, v6))) & 2;
    }
  }
  result = PsInvokeWin32Callout(0LL, (__int64)&v9, 0, 0);
  if ( (int)result >= 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    v12 = 0;
    v11 = CurrentThread;
    v8 = PsInvokeWin32Callout((_KPROCESS *)1, (__int64)&v11, 0, 0);
    if ( v8 < 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    SeCaptureAtomTableCallout();
    return (unsigned int)v8;
  }
  return result;
}
