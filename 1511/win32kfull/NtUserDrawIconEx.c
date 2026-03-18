/*
 * XREFs of NtUserDrawIconEx @ 0x1C0014F60
 * Callers:
 *     <none>
 * Callees:
 *     _DrawIconEx @ 0x1C00150EC (_DrawIconEx.c)
 *     _GetIconSize @ 0x1C004A0CC (_GetIconSize.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetAnimatedCursorFrame @ 0x1C00EBBAC (GetAnimatedCursorFrame.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDrawIconEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned __int64 a11)
{
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 AnimatedCursorFrame; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rax
  _BYTE *v24; // rdx
  _BYTE v25[8]; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  v15 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  LOBYTE(v16) = 3;
  v17 = HMValidateHandle(a4, v16);
  AnimatedCursorFrame = v17;
  if ( v17 )
  {
    if ( a10 )
    {
      if ( (*(_DWORD *)(v17 + 80) & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(v17, 0LL)) != 0 )
      {
        v23 = -PsGetCurrentProcessWow64Process(v18);
        v26 = (-(__int64)(v23 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
        if ( ((v23 != 0 ? 0 : 3) & (unsigned int)a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v24 = (_BYTE *)a11;
        if ( a11 >= W32UserProbeAddress )
          v24 = (_BYTE *)W32UserProbeAddress;
        *v24 = *v24;
        v24[39] = v24[39];
        *(_QWORD *)a11 = *(_QWORD *)(AnimatedCursorFrame + 88);
        *(_QWORD *)(a11 + 8) = *(_QWORD *)(AnimatedCursorFrame + 96);
        *(_QWORD *)(a11 + 32) = *(_QWORD *)(AnimatedCursorFrame + 128);
        GetIconSize(AnimatedCursorFrame, a11 + 24, a11 + 28);
        *(_DWORD *)(a11 + 16) = *(_DWORD *)(AnimatedCursorFrame + 140);
        *(_DWORD *)(a11 + 20) = *(_DWORD *)(AnimatedCursorFrame + 144);
        v15 = 1;
      }
    }
    else
    {
      v15 = DrawIconEx(a1, a2, a3, v17, a5, a6, a7, a8, a9);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  UserSessionSwitchLeaveCrit(v21, v20);
  return v15;
}
