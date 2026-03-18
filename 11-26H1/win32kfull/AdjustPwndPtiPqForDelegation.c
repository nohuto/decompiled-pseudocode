/*
 * XREFs of AdjustPwndPtiPqForDelegation @ 0x14005527C
 * Callers:
 *     PostDeviceNotification @ 0x140171974 (PostDeviceNotification.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     EditionPostInputMessage @ 0x140277240 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x1402773C0 (EditionPostMouseMoveToQ.c)
 *     EditionPostMouseWheelToForeground @ 0x140277510 (EditionPostMouseWheelToForeground.c)
 *     EditionHandleAndPostKeyEvent @ 0x14027AA50 (EditionHandleAndPostKeyEvent.c)
 *     ?PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z @ 0x1402D0F94 (-PostButtonUpToWindowForIntercept@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     CalcWakeMask @ 0x140055540 (CalcWakeMask.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140055DDC (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall AdjustPwndPtiPqForDelegation(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // ebp
  int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 result; // rax
  int v18; // eax
  __int64 v19; // rdx
  char v20; // si
  unsigned __int8 v21; // al
  bool v22; // zf
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( a4 == 255 )
    return 1LL;
  v10 = *a2;
  v11 = *a1;
  v13 = CalcWakeMask(a4, a4, 0LL);
  if ( (v12 == 513 || v12 == 516)
    && v10
    && (*(_DWORD *)(v10 + 260) & 6) != 0
    && !*(_QWORD *)(*(_QWORD *)(v10 + 16) + 1472LL)
    && a5
    && (*a5 == 2 || *a5 == 18) )
  {
    v20 = (v14 != 513) + 1;
    if ( !*(_QWORD *)(v11 + 144) )
    {
      v23[0] = v11 + 144;
      v23[1] = v10;
      HMAssignmentLock(v23, 0LL);
    }
    *(_BYTE *)(v11 + 152) |= v20;
    *a2 = v10;
    goto LABEL_32;
  }
  v15 = *(_QWORD *)(v11 + 144);
  if ( !v15 )
  {
LABEL_5:
    *a2 = v10;
    v16 = 0LL;
    if ( !v10 )
      return 1LL;
LABEL_7:
    if ( (v13 & 0x1000) != 0 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 1496LL);
      if ( v16 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v16 + 520), 0, 0) & 1) == 0 )
        {
LABEL_15:
          vAdjustDelegatePriority((struct tagTHREADINFO *)v16);
          *a1 = *(_QWORD *)(v16 + 464);
          v19 = (*(_QWORD *)(v16 + 1360) >> 37) & 1LL;
          *a3 = v16;
          *a6 = 1;
          *a7 = v19;
          return 1LL;
        }
        v16 = 0LL;
      }
    }
    v18 = *(_DWORD *)(v10 + 260);
    if ( v18 )
    {
      if ( (v18 & v13) != 0 )
        v16 = *(_QWORD *)(v10 + 264);
    }
    if ( !v16 )
      return 1LL;
    goto LABEL_15;
  }
  if ( v14 != 514 && v14 != 517 )
  {
    if ( v14 == 512 )
    {
      v10 = *(_QWORD *)(v11 + 144);
      *a2 = v15;
LABEL_32:
      v16 = 0LL;
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v11 + 144);
  v21 = (v14 == 514) - 3;
  v22 = (v21 & *(_BYTE *)(v11 + 152)) == 0;
  *(_BYTE *)(v11 + 152) &= v21;
  if ( !v22 )
    goto LABEL_5;
  result = HMAssignmentUnlock(v11 + 144);
  v10 = result;
  if ( result )
    goto LABEL_5;
  return result;
}
