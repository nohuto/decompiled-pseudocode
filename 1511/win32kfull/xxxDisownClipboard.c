/*
 * XREFs of xxxDisownClipboard @ 0x1C01F0B0C
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C0069824 (xxxDW_SendDestroyMessages.c)
 *     xxxSetProcessWindowStation @ 0x1C00E3150 (xxxSetProcessWindowStation.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00DBFC0 (CheckClipboardAccess.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014A038 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014C8A4 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C014D784 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxDisownClipboard(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // edx
  _OWORD *v7; // r9
  int v8; // ebp
  __int64 v9; // rcx
  unsigned int v10; // ecx
  int v11; // r10d
  int v12; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  result = CheckClipboardAccess();
  v3 = result;
  if ( result )
  {
    PushW32ThreadLock(result, v13, (__int64)UserDereferenceObject);
    ObfReferenceObject((PVOID)v3);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)v3, 0x306u);
    v4 = *(_QWORD *)(v3 + 96);
    v5 = 0;
    v6 = *(_DWORD *)(v3 + 104);
    v7 = (_OWORD *)v4;
    v8 = 0;
    while ( v6 )
    {
      v9 = *(_QWORD *)(v4 + 8);
      --v6;
      if ( v9 && (v9 != 1 || v5) )
      {
        ++v8;
        *v7 = *(_OWORD *)v4;
        v7[1] = *(_OWORD *)(v4 + 16);
        v10 = *(_DWORD *)v4;
        v7 += 2;
        if ( *(_QWORD *)(v4 + 8) != 1LL && v10 <= 0xD )
        {
          v11 = 8322;
          if ( _bittest(&v11, v10) )
            v5 = 1;
        }
      }
      v4 += 32LL;
    }
    if ( a1 == *(_QWORD *)(v3 + 80) )
      HMAssignmentUnlock(v3 + 80);
    if ( v8 != *(_DWORD *)(v3 + 104) )
    {
      *(_DWORD *)(v3 + 32) |= 0x40u;
      ++*(_DWORD *)(v3 + 112);
    }
    v12 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 104) = v8;
    if ( (v12 & 0x40) != 0 )
    {
      xxxDrawClipboard((struct tagWINDOWSTATION *)v3);
      MungeClipData((struct tagWINDOWSTATION *)v3);
    }
    if ( a1 == *(_QWORD *)(v3 + 80) )
      HMAssignmentUnlock(v3 + 80);
    return PopAndFreeW32ThreadLock((__int64)v13);
  }
  return result;
}
