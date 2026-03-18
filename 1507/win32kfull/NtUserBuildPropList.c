/*
 * XREFs of NtUserBuildPropList @ 0x1C00F1360
 * Callers:
 *     <none>
 * Callees:
 *     _BuildPropList @ 0x1C00F1458 (_BuildPropList.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, volatile void *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  unsigned int v13; // ebx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v11 = gptiCurrent;
    v15[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v15;
    v15[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    if ( a2 )
    {
      ProbeForWrite(a3, 16LL * a2, 4u);
      v12 = a4;
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        v12 = (_DWORD *)W32UserProbeAddress;
      *v12 = *v12;
      v13 = BuildPropList(v10, a3, a2, a4);
    }
    else
    {
      v13 = -1073741816;
    }
    ThreadUnlock1(v11, v8);
  }
  else
  {
    v13 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v13;
}
