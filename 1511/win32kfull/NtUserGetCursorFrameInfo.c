/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C014D950
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     GetAnimatedCursorFrame @ 0x1C00EBBAC (GetAnimatedCursorFrame.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, int a2, _DWORD *a3, int *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  int v9; // esi
  int *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  _DWORD *v13; // rdx
  int v14; // eax
  __int64 v16; // r9
  __int64 AnimatedCursorFrame; // r10

  v6 = a2;
  v8 = 0LL;
  v9 = 1;
  EnterSharedCrit(0LL, 1LL);
  v12 = HMValidateHandle(a1, 3);
  if ( v12 )
  {
    v13 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v13 = (_DWORD *)W32UserProbeAddress;
    *v13 = *v13;
    v10 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v10 = (int *)W32UserProbeAddress;
    *v10 = *v10;
    if ( (*(_DWORD *)(v12 + 80) & 8) != 0 )
    {
      AnimatedCursorFrame = GetAnimatedCursorFrame(v12, v6);
      if ( !AnimatedCursorFrame )
        goto LABEL_9;
      v9 = *(_DWORD *)(v16 + 92);
      v14 = *(_DWORD *)(*(_QWORD *)(v16 + 112) + 4 * v6);
      v12 = AnimatedCursorFrame;
    }
    else
    {
      v14 = 0;
    }
    v8 = *(_QWORD *)v12;
    *a3 = v14;
    *a4 = v9;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v8;
}
