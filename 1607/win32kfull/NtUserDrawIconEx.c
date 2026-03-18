/*
 * XREFs of NtUserDrawIconEx @ 0x1C00B0AD0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     _GetIconSize @ 0x1C003BDD8 (_GetIconSize.c)
 *     GetAnimatedCursorFrame @ 0x1C005DA50 (GetAnimatedCursorFrame.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
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
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 AnimatedCursorFrame; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  _BYTE v27[8]; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  v15 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  LOBYTE(v16) = 3;
  v19 = HMValidateHandle(a4, v16, v17, v18);
  AnimatedCursorFrame = v19;
  if ( v19 )
  {
    if ( a10 )
    {
      if ( (*(_DWORD *)(v19 + 80) & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(v19, 0)) != 0 )
      {
        v25 = -PsGetCurrentProcessWow64Process(v20);
        v28 = (-(__int64)(v25 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
        if ( ((v25 != 0 ? 0 : 3) & (unsigned int)a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v26 = (_BYTE *)a11;
        if ( a11 >= W32UserProbeAddress )
          v26 = (_BYTE *)W32UserProbeAddress;
        *v26 = *v26;
        v26[39] = v26[39];
        *(_QWORD *)a11 = *(_QWORD *)(AnimatedCursorFrame + 88);
        *(_QWORD *)(a11 + 8) = *(_QWORD *)(AnimatedCursorFrame + 96);
        *(_QWORD *)(a11 + 32) = *(_QWORD *)(AnimatedCursorFrame + 128);
        GetIconSize(AnimatedCursorFrame, (_DWORD *)(a11 + 24), (_DWORD *)(a11 + 28));
        *(_DWORD *)(a11 + 16) = *(_DWORD *)(AnimatedCursorFrame + 140);
        *(_DWORD *)(a11 + 20) = *(_DWORD *)(AnimatedCursorFrame + 144);
        v15 = 1;
      }
    }
    else
    {
      v15 = DrawIconEx(a1, a2, a3, v19, a5, a6, a7, a8, a9);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  UserSessionSwitchLeaveCrit(v23, v22);
  return v15;
}
