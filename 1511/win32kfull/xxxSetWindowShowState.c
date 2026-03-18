/*
 * XREFs of xxxSetWindowShowState @ 0x1C0224100
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C0220D90 (NtUserSetWindowShowState.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     CkptRestore @ 0x1C007734C (CkptRestore.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D812C (xxxNotifyShellTrackedWindowPosChanged.c)
 */

__int64 __fastcall xxxSetWindowShowState(__int64 a1, unsigned __int8 a2, _OWORD *a3)
{
  BOOL v6; // eax
  __int64 v7; // r8
  _OWORD *Prop; // rax
  char v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = (*(_BYTE *)(a1 + 55) & 0x20) != 0 || (*(_BYTE *)(a1 + 289) & 3) != 0;
  if ( (a2 == 16 || a2 == 18 || a2 == 20) && !v6 )
    goto LABEL_9;
  if ( a3 )
  {
    Prop = (_OWORD *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
      *Prop = *a3;
    }
    else if ( !CkptRestore(a1, a3) )
    {
      UserSetLastError(8);
      return 0LL;
    }
  }
  if ( (a2 == 15 || a2 == 17 || a2 == 19) && (*(_BYTE *)(a1 + 55) & 1) != 0 )
  {
LABEL_9:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
    xxxNotifyShellTrackedWindowPosChanged(a1, 1, v7);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
    return 1LL;
  }
  return PostEventMessageEx(
           *(_QWORD *)(a1 + 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL),
           1u,
           a1,
           1u,
           a3 != 0LL ? 4 : 0,
           a2 | (unsigned __int64)(gdwPUDFlags & 0x10000),
           0LL);
}
