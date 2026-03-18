/*
 * XREFs of xxxForceWindowToDpiForTest @ 0x1402A22C0
 * Callers:
 *     NtUserForceWindowToDpiForTest @ 0x1402B2180 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 */

_BOOL8 __fastcall xxxForceWindowToDpiForTest(struct tagWND *a1, int a2)
{
  _OWORD *v4; // rbx
  _OWORD *v5; // rax
  unsigned int v6; // edx
  unsigned __int16 v7; // r12
  struct tagBWL *v8; // rax
  BOOL v9; // r14d
  __int64 *i; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  _DWORD *v13; // rax
  _DWORD *v14; // rcx

  v4 = (_OWORD *)Win32AllocPoolZInit(100LL, 1886872661LL);
  if ( v4 )
  {
    v5 = (_OWORD *)*((_QWORD *)a1 + 36);
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    *(_DWORD *)v4 = 1;
    v6 = (100 * a2 + 48) / 0x60u;
    *((_DWORD *)v4 + 1) = v6;
    *((_DWORD *)v4 + 2) = v6;
    *((_DWORD *)v4 + 3) = v6;
    *((_DWORD *)v4 + 4) = v6;
    v7 = *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL);
    v8 = BuildHwndList(a1, 1LL, 0LL, 1);
    v9 = v8 != 0LL;
    if ( v8 )
    {
      *((_DWORD *)a1 + 95) |= 0x40000u;
      for ( i = (__int64 *)((char *)v8 + 32); *i != 1; ++i )
      {
        v11 = HMValidateHandleNoSecure(*i, 1);
        v12 = v11;
        if ( v11 )
        {
          *(_WORD *)(*(_QWORD *)(v11 + 40) + 284LL) = a2;
          v13 = *(_DWORD **)(v11 + 288);
          if ( v13 )
          {
            --*v13;
            v14 = *(_DWORD **)(v12 + 288);
            if ( !*v14 )
              Win32FreePool(v14);
          }
          *(_QWORD *)(v12 + 288) = v4;
          ++*(_DWORD *)v4;
        }
      }
    }
    if ( (*(_DWORD *)v4)-- == 1 )
      Win32FreePool(v4);
    xxxNotifyMonitorChanged(a1, 0LL, 0LL, v7);
  }
  else
  {
    return 0;
  }
  return v9;
}
