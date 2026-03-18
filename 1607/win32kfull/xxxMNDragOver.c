/*
 * XREFs of xxxMNDragOver @ 0x1C0233278
 * Callers:
 *     NtUserMNDragOver @ 0x1C0216F30 (NtUserMNDragOver.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005425C (safe_cast_fnid_to_PMENUWND.c)
 *     IsMFMWFPWindow @ 0x1C0142218 (IsMFMWFPWindow.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0142EC4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C020EFD8 (GetMenuStateWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C020F130 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  HDC v4; // rdi
  int v5; // eax
  _QWORD *v6; // rcx
  __int64 MenuStateWindow; // rax
  __int64 *v8; // r8
  unsigned __int16 *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rax
  int v19; // eax
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v4 = *(HDC *)(gptiCurrent + 528LL);
  if ( !v4 )
    return 0LL;
  v5 = *((_DWORD *)v4 + 2);
  if ( (v5 & 0x400) == 0 )
    return 0LL;
  v6 = *(_QWORD **)(gptiCurrent + 528LL);
  *((_DWORD *)v4 + 2) = v5 | 0x8000;
  MenuStateWindow = GetMenuStateWindow(v6);
  if ( !MenuStateWindow )
    return 0LL;
  ++*((_DWORD *)v4 + 10);
  v10 = *v8;
  v21[0] = *(_QWORD *)(*v8 + 368);
  *(_QWORD *)(v10 + 368) = v21;
  v21[1] = MenuStateWindow;
  ++*(_DWORD *)(MenuStateWindow + 8);
  xxxCallHandleMenuMessages(v4, MenuStateWindow, 160, 0LL, (v9[2] << 16) | *v9);
  ThreadUnlock1(v12, v11);
  if ( IsMFMWFPWindow(*((_QWORD *)v4 + 10)) )
  {
    v14 = safe_cast_fnid_to_PMENUWND(v13);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 360);
      if ( v15 )
      {
        v16 = *(__int64 **)(v15 + 40);
        if ( v16 )
          v17 = *v16;
        else
          v17 = 0LL;
        *(_QWORD *)(a2 + 8) = v17;
        *(_DWORD *)(struct HDC__ *)(a2 + 16) = v4[22];
        v18 = *(__int64 **)(v15 + 8);
        if ( v18 )
          v2 = *v18;
        *(_QWORD *)(a2 + 24) = v2;
        v19 = *((_DWORD *)v4 + 23);
        *(_DWORD *)a2 = v19;
        if ( (v19 & 2) != 0 )
          ++*(_DWORD *)(a2 + 16);
        LODWORD(v2) = 1;
      }
    }
  }
  xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v4, 1);
  return (unsigned int)v2;
}
