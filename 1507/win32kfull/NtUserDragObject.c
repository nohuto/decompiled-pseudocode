/*
 * XREFs of NtUserDragObject @ 0x1C0218F30
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 */

__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v22[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v24[4]; // [rsp+60h] [rbp-38h] BYREF

  EnterCrit(1LL);
  v9 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v9;
  if ( v9 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v22;
    v22[1] = v9;
    ++*(_DWORD *)(v9 + 8);
    if ( a2 )
    {
      v16 = ValidateHwnd(a2);
      if ( !v16 )
      {
LABEL_15:
        ThreadUnlock1(v15, v14);
        goto LABEL_16;
      }
    }
    else
    {
      v16 = 0LL;
    }
    if ( a5 )
    {
      v15 = HMValidateHandle(a5, 3);
      if ( !v15 )
        goto LABEL_15;
    }
    else
    {
      v15 = 0LL;
    }
    v23[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v23;
    v23[1] = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v24[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v24;
    v24[1] = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v12 = xxxDragObject(v13, v16, a3, a4, v15);
    ThreadUnlock1(v18, v17);
    ThreadUnlock1(v20, v19);
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
