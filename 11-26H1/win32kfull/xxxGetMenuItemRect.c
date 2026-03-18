/*
 * XREFs of xxxGetMenuItemRect @ 0x14020D69C
 * Callers:
 *     NtUserGetMenuItemRect @ 0x14020D500 (NtUserGetMenuItemRect.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14020D7E4 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14020D8E4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 MenuPwnd; // rax
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rdx
  int v11; // r15d
  int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // r9d
  int v17; // r10d
  _DWORD *v18; // rcx
  int v19; // ebx
  int v20; // edx
  int v21; // edx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  *(_OWORD *)a4 = 0LL;
  if ( a3 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  MenuPwnd = GetMenuPwnd();
  v8 = MenuPwnd;
  if ( !MenuPwnd )
    return 0LL;
  v9 = *(_BYTE *)(*(_QWORD *)(MenuPwnd + 40) + 26LL) & 0x40;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0 )
  {
    v10 = *(_QWORD *)(MenuPwnd + 40);
    v11 = *(_DWORD *)(v10 + 108);
    v12 = *(_DWORD *)((v9 != 0 ? 8 : 0) + v10 + 104);
  }
  else
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, MenuPwnd);
    xxxMNRecomputeBarIfNeeded(v8, a2);
    v14 = *(_QWORD *)(v8 + 40);
    v11 = *(_DWORD *)(v14 + 92);
    v12 = *(_DWORD *)((v9 != 0 ? 8 : 0) + v14 + 88);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  v15 = *(_QWORD *)(**(_QWORD **)a2 + 88LL);
  v16 = *(_DWORD *)(*(_QWORD *)(v15 + 96 * v4) + 72LL);
  *(_DWORD *)(a4 + 8) = v16;
  v17 = *(_DWORD *)(*(_QWORD *)(v15 + 96 * v4) + 76LL);
  *(_DWORD *)(a4 + 12) = v17;
  v18 = *(_DWORD **)(v15 + 96 * v4);
  if ( v9 )
    v19 = v12 - (v18[16] + v18[18]);
  else
    v19 = v18[16] + v12;
  v20 = v18[17];
  result = 1LL;
  *(_DWORD *)a4 += v19;
  v21 = v11 + v20;
  *(_DWORD *)(a4 + 8) = v16 + v19;
  *(_DWORD *)(a4 + 4) += v21;
  *(_DWORD *)(a4 + 12) = v21 + v17;
  return result;
}
