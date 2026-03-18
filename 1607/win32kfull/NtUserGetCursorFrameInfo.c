/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C01528C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     GetAnimatedCursorFrame @ 0x1C005DA50 (GetAnimatedCursorFrame.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, int a2, _DWORD *a3, int *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  _DWORD *v16; // rdx
  int v17; // eax
  __int64 v19; // r9
  __int64 AnimatedCursorFrame; // r10

  v6 = a2;
  v8 = 0LL;
  v9 = 1;
  EnterSharedCrit(0LL, 1LL);
  LOBYTE(v10) = 3;
  v15 = HMValidateHandle(a1, v10, v11, v12);
  if ( v15 )
  {
    v16 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v16 = (_DWORD *)W32UserProbeAddress;
    *v16 = *v16;
    v13 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v13 = (int *)W32UserProbeAddress;
    *v13 = *v13;
    if ( (*(_DWORD *)(v15 + 80) & 8) != 0 )
    {
      AnimatedCursorFrame = GetAnimatedCursorFrame(v15, v6);
      if ( !AnimatedCursorFrame )
        goto LABEL_9;
      v9 = *(_DWORD *)(v19 + 92);
      v17 = *(_DWORD *)(*(_QWORD *)(v19 + 112) + 4 * v6);
      v15 = AnimatedCursorFrame;
    }
    else
    {
      v17 = 0;
    }
    v8 = *(_QWORD *)v15;
    *a3 = v17;
    *a4 = v9;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v14, v13);
  return v8;
}
