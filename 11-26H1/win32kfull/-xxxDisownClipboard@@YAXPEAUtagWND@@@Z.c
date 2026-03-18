/*
 * XREFs of ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14029419C
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x140042FEC (xxxDW_SendDestroyMessages.c)
 *     xxxSetProcessWindowStation @ 0x14022F3A0 (xxxSetProcessWindowStation.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401AF5E0 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B19BC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1401B2498 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

void __fastcall xxxDisownClipboard(struct tagWND *a1)
{
  struct tagWINDOWSTATION *v2; // rax
  struct tagWINDOWSTATION *v3; // rbx
  int *v4; // rax
  int v5; // r8d
  int v6; // edx
  _OWORD *v7; // r9
  int v8; // ebp
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // eax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = CheckClipboardAccess((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v12, v2);
    xxxSendClipboardMessage(v3, 0x306u);
    v4 = (int *)*((_QWORD *)v3 + 12);
    v5 = 0;
    v6 = *((_DWORD *)v3 + 26);
    v7 = v4;
    v8 = 0;
    while ( v6 )
    {
      v9 = *((_QWORD *)v4 + 1);
      --v6;
      if ( v9 && (v9 != 1 || v5) )
      {
        ++v8;
        *v7 = *(_OWORD *)v4;
        v7[1] = *((_OWORD *)v4 + 1);
        v7 += 2;
        if ( *((_QWORD *)v4 + 1) != 1LL )
        {
          v10 = *v4;
          if ( *v4 == 1 || v10 == 7 || v10 == 13 )
            v5 = 1;
        }
      }
      v4 += 8;
    }
    if ( a1 == *((struct tagWND **)v3 + 10) )
      HMAssignmentUnlock((char *)v3 + 80);
    if ( v8 != *((_DWORD *)v3 + 26) )
    {
      *((_DWORD *)v3 + 8) |= 0x40u;
      ++*((_DWORD *)v3 + 28);
    }
    v11 = *((_DWORD *)v3 + 8);
    *((_DWORD *)v3 + 26) = v8;
    if ( (v11 & 0x40) != 0 )
    {
      xxxDrawClipboard(v3);
      MungeClipData(v3);
    }
    if ( a1 == *((struct tagWND **)v3 + 10) )
      HMAssignmentUnlock((char *)v3 + 80);
    if ( v12[2] != -1LL )
      PopAndFreeW32ThreadLock((__int64)v12);
  }
}
