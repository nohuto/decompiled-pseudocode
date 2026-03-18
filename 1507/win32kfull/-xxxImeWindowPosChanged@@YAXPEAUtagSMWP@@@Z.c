/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0062824
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     ThreadLockExchange @ 0x1C0062A1C (ThreadLockExchange.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // r12
  __int64 ThreadDesktopWindow; // rax
  __int64 v3; // r13
  struct tagBWL *v4; // rax
  struct tagBWL *v5; // r14
  _QWORD *i; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[3]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v20[11]; // [rsp+50h] [rbp-58h] BYREF

  v1 = a1;
  ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
  v3 = ThreadDesktopWindow;
  if ( ThreadDesktopWindow )
  {
    v4 = BuildHwndList(*(_QWORD *)(ThreadDesktopWindow + 96), 2, gptiCurrent);
    v5 = v4;
    if ( v4 )
    {
      for ( i = (_QWORD *)((char *)v4 + 32); *i != 1LL; ++i )
      {
        v7 = ValidateHwnd(*i);
        v8 = v7;
        if ( (*(_DWORD *)(gptiCurrent + 448LL) & 1) != 0 )
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
            v11 = *(_QWORD *)(v10 + 16);
            LOBYTE(v10) = 1;
            v12 = HMValidateHandleNoSecure(v11, v10);
            if ( v12 )
            {
              v20[0] = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = v20;
              v20[1] = v8;
              ++*(_DWORD *)(v8 + 8);
              v13 = gptiCurrent;
              v14 = gptiCurrent;
              v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = v19;
              v19[1] = v12;
              ++*(_DWORD *)(v12 + 8);
              while ( v12 && v12 != v3 )
              {
                v13 = *(_QWORD *)v12;
                v15 = *((_QWORD *)v1 + 5);
                v16 = *((_DWORD *)v1 + 7);
                while ( --v16 >= 0 )
                {
                  if ( v13 == *(_QWORD *)v15 )
                  {
                    if ( (~*(_BYTE *)(v15 + 32) & 3) != 0 )
                      xxxSendMessage(v8, 647LL, 6LL);
                    break;
                  }
                  v15 += 168LL;
                }
                if ( v16 >= 0 )
                  break;
                v12 = *(_QWORD *)(v12 + 88);
                ThreadLockExchange(v12, v19);
                v1 = a1;
              }
              ThreadUnlock1(v13, v14);
              ThreadUnlock1(v18, v17);
            }
          }
        }
        v1 = a1;
      }
      FreeHwndList(v5);
    }
  }
}
