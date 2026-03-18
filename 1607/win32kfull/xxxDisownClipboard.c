/*
 * XREFs of xxxDisownClipboard @ 0x1C01E684C
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C007147C (xxxDW_SendDestroyMessages.c)
 *     xxxSetProcessWindowStation @ 0x1C0105760 (xxxSetProcessWindowStation.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014F720 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0151C14 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0152EF0 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxDisownClipboard(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  _OWORD *v11; // r9
  int v12; // ebp
  __int64 v13; // rcx
  unsigned int v14; // ecx
  int v15; // r10d
  int v16; // eax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  result = CheckClipboardAccess(a1, a2, a3, a4);
  v7 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v17, UserDereferenceObject, v6);
    ObfReferenceObject((PVOID)v7);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)v7, 0x306u);
    v8 = *(_QWORD *)(v7 + 96);
    v9 = 0LL;
    v10 = *(unsigned int *)(v7 + 104);
    v11 = (_OWORD *)v8;
    v12 = 0;
    while ( (_DWORD)v10 )
    {
      v13 = *(_QWORD *)(v8 + 8);
      v10 = (unsigned int)(v10 - 1);
      if ( v13 && (v13 != 1 || (_DWORD)v9) )
      {
        ++v12;
        *v11 = *(_OWORD *)v8;
        v11[1] = *(_OWORD *)(v8 + 16);
        v14 = *(_DWORD *)v8;
        v11 += 2;
        if ( *(_QWORD *)(v8 + 8) != 1LL && v14 <= 0xD )
        {
          v15 = 8322;
          if ( _bittest(&v15, v14) )
            v9 = 1LL;
        }
      }
      v8 += 32LL;
    }
    if ( a1 == *(_QWORD *)(v7 + 80) )
      HMAssignmentUnlock(v7 + 80);
    if ( v12 != *(_DWORD *)(v7 + 104) )
    {
      *(_DWORD *)(v7 + 32) |= 0x40u;
      ++*(_DWORD *)(v7 + 112);
    }
    v16 = *(_DWORD *)(v7 + 32);
    *(_DWORD *)(v7 + 104) = v12;
    if ( (v16 & 0x40) != 0 )
    {
      xxxDrawClipboard((struct tagWINDOWSTATION *)v7);
      MungeClipData((struct tagWINDOWSTATION *)v7);
    }
    if ( a1 == *(_QWORD *)(v7 + 80) )
      HMAssignmentUnlock(v7 + 80);
    return PopAndFreeW32ThreadLock((__int64)v17, v10, v9, (__int64)v11);
  }
  return result;
}
