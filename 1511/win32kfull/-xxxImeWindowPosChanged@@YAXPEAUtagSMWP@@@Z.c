/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006D350
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     ThreadLockExchange @ 0x1C006D548 (ThreadLockExchange.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     GetThreadDesktopWindow @ 0x1C006E690 (GetThreadDesktopWindow.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // r12
  __int64 ThreadDesktopWindow; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // r14
  _QWORD *i; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[3]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v19[11]; // [rsp+50h] [rbp-58h] BYREF

  v1 = a1;
  ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
  v3 = ThreadDesktopWindow;
  if ( ThreadDesktopWindow )
  {
    v4 = BuildHwndList(*(_QWORD *)(ThreadDesktopWindow + 96), 2LL);
    v5 = v4;
    if ( v4 )
    {
      for ( i = (_QWORD *)(v4 + 32); *i != 1LL; ++i )
      {
        v7 = ValidateHwnd(*i);
        v8 = v7;
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
          break;
        if ( v7 && *(_QWORD *)(v7 + 16) == gptiCurrent )
        {
          v9 = 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v7 + 152) + 8LL) == *(_WORD *)(gpsi + 882LL) )
            v9 = v7;
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 376);
            if ( v10 >= W32UserProbeAddress )
              v10 = W32UserProbeAddress;
            v11 = HMValidateHandleNoSecure(*(_QWORD *)(v10 + 16), 1);
            if ( v11 )
            {
              v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v19;
              v19[1] = v8;
              ++*(_DWORD *)(v8 + 8);
              v12 = gptiCurrent;
              v13 = gptiCurrent;
              v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v18;
              v18[1] = v11;
              ++*(_DWORD *)(v11 + 8);
              while ( v11 && v11 != v3 )
              {
                v12 = *(_QWORD *)v11;
                v14 = *((_QWORD *)v1 + 5);
                v15 = *((_DWORD *)v1 + 7);
                while ( --v15 >= 0 )
                {
                  if ( v12 == *(_QWORD *)v14 )
                  {
                    if ( (~*(_BYTE *)(v14 + 32) & 3) != 0 )
                      xxxSendMessage((struct tagWND *)v8, 0x287u, 6uLL, 0LL);
                    break;
                  }
                  v14 += 168LL;
                }
                if ( v15 >= 0 )
                  break;
                v11 = *(_QWORD *)(v11 + 88);
                ThreadLockExchange(v11, v18);
                v1 = a1;
              }
              ThreadUnlock1(v12, v13);
              ThreadUnlock1(v17, v16);
            }
          }
        }
        v1 = a1;
      }
      FreeHwndList(v5);
    }
  }
}
