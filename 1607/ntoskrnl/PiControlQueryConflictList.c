/*
 * XREFs of PiControlQueryConflictList @ 0x14064A99C
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x1400093B8 (PiControlAllocateBufferForUserModeCaller.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 *     IopQueryConflictList @ 0x14064E648 (IopQueryConflictList.c)
 */

__int64 __fastcall PiControlQueryConflictList(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  __int64 *v4; // r12
  _DWORD *v7; // rdx
  unsigned int v8; // r8d
  void *v9; // r15
  void *v10; // r14
  int UserModeCallersCopy; // edi
  _QWORD *v12; // rax
  int v13; // r8d
  __int64 v14; // rax
  int v15; // eax
  void *v17; // [rsp+30h] [rbp-20h] BYREF
  __int16 v18; // [rsp+38h] [rbp-18h] BYREF
  __int16 v19; // [rsp+3Ah] [rbp-16h]
  void *v20; // [rsp+40h] [rbp-10h] BYREF
  void *v21; // [rsp+88h] [rbp+38h] BYREF

  v4 = (__int64 *)(a2 + 16);
  if ( !*((_QWORD *)a2 + 4) || *((_DWORD *)a2 + 10) < 0x20u )
    return 3221225507LL;
  v7 = (_DWORD *)*((_QWORD *)a2 + 2);
  if ( !v7 )
    return 3221225485LL;
  v8 = *((_DWORD *)a2 + 6);
  if ( v8 < 0x28 )
    return 3221225485LL;
  if ( *v7 != 1 )
    return 3221225485LL;
  if ( v7[4] != 1 )
    return 3221225485LL;
  v19 = *a2;
  v18 = v19;
  if ( (unsigned __int16)(v19 - 1) > 0x18Fu || (v19 & 1) != 0 )
    return 3221225485LL;
  v17 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v17, v7, v8, 1u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiControlAllocateBufferForUserModeCaller(&v21, *((_DWORD *)a2 + 10), a4, *v4);
    if ( UserModeCallersCopy < 0
      || (UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v20, *((void **)a2 + 1), *a2, 2u, a4, 1),
          UserModeCallersCopy < 0) )
    {
      v9 = v21;
    }
    else
    {
      UserModeCallersCopy = -1073741810;
      PpDevNodeLockTree(1);
      v12 = PnpDeviceObjectFromDeviceInstance((__int64)&v18);
      v9 = v21;
      v10 = v12;
      if ( v12 )
      {
        v14 = *(_QWORD *)(v12[39] + 40LL);
        if ( v14 )
        {
          if ( v14 != IopRootDeviceNode && (unsigned int)(*(_DWORD *)(v14 + 300) - 787) > 1 )
          {
            UserModeCallersCopy = IopQueryConflictList((_DWORD)v10, (_DWORD)v17, v13, (_DWORD)v21, *((_DWORD *)a2 + 10));
            v15 = PiControlMakeUserModeCallersCopy((void **)v4, v9, *((_DWORD *)a2 + 10), 1u, a4, 0);
            if ( v15 < 0 )
              UserModeCallersCopy = v15;
          }
        }
      }
      PpDevNodeUnlockTree(1);
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, v17);
  PiControlFreeUserModeCallersBuffer(a4, v9);
  PiControlFreeUserModeCallersBuffer(a4, v20);
  if ( v10 )
    ObfDereferenceObject(v10);
  *((_DWORD *)a2 + 12) = UserModeCallersCopy;
  return (unsigned int)UserModeCallersCopy;
}
