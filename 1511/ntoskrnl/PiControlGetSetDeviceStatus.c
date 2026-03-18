/*
 * XREFs of PiControlGetSetDeviceStatus @ 0x140458AB4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404390E4 (PiControlMakeUserModeCallersCopy.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140458DB0 (PiControlGetUserFlagsFromDeviceNode.c)
 */

__int64 __fastcall PiControlGetSetDeviceStatus(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned __int16 v4; // cx
  __int64 v5; // rdi
  SIZE_T v7; // r12
  void *v9; // r15
  __int64 result; // rax
  _QWORD *v11; // rsi
  int v12; // ecx
  BOOL v13; // r14d
  int v14; // ebx
  int v15; // ecx
  PVOID PoolWithTag; // rax
  __int64 v17; // r9
  int v18; // eax
  _WORD v19[4]; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+98h] [rbp+38h] BYREF

  v4 = *(_WORD *)a2;
  v5 = 0LL;
  LODWORD(v22) = 0;
  v7 = a3;
  v19[1] = v4;
  v19[0] = v4;
  v9 = 0LL;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&P, *(void **)(a2 + 8), v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v11 = (_QWORD *)PnpDeviceObjectFromDeviceInstance(v19);
    if ( a4 && P )
      ExFreePoolWithTag(P, 0);
    if ( v11 )
      v5 = *(_QWORD *)(v11[39] + 40LL);
    PpDevNodeUnlockTree(0LL);
    if ( v5 )
    {
      if ( v5 == IopRootDeviceNode && *(_DWORD *)(a2 + 16) )
      {
        v14 = -1073741790;
      }
      else
      {
        v12 = *(_DWORD *)(a2 + 16);
        v13 = (*(_BYTE *)(a2 + 28) & 1) == 0;
        if ( v12 )
        {
          v15 = v12 - 1;
          if ( v15 )
          {
            if ( v15 != 1 )
            {
              v14 = -1073741808;
              goto LABEL_11;
            }
            KeInitializeEvent(&Event, NotificationEvent, 0);
            v14 = PnpRequestDeviceAction(v11, 1, 0, 0LL, (__int64)&Event, (__int64)&v22);
            if ( v14 < 0 )
              goto LABEL_11;
          }
          else
          {
            if ( (*(_BYTE *)(a2 + 28) & 1) != 0 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x55706E50u);
              v9 = PoolWithTag;
              if ( !PoolWithTag )
              {
                v14 = -1073741670;
                goto LABEL_11;
              }
              memmove(PoolWithTag, (const void *)a2, v7);
            }
            else
            {
              KeInitializeEvent(&Event, NotificationEvent, 0);
            }
            v17 = (__int64)v9;
            if ( v13 )
              v17 = a2;
            v18 = PnpRequestDeviceAction(
                    v11,
                    15,
                    0,
                    v17,
                    (unsigned __int64)&Event & -(__int64)v13,
                    (unsigned __int64)&v22 & -(__int64)v13);
            v14 = v18;
            if ( !v13 || v18 < 0 )
              goto LABEL_11;
          }
          v14 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          if ( !v14 )
            v14 = v22;
          goto LABEL_11;
        }
        PiControlGetUserFlagsFromDeviceNode(v5, a2 + 20);
        *(_DWORD *)(a2 + 24) = *(_DWORD *)(v5 + 404);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(v5 + 408);
        v14 = 0;
      }
    }
    else
    {
      v14 = -1073741810;
    }
LABEL_11:
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v14 < 0 )
    {
      if ( v9 )
        ExFreePoolWithTag(v9, 0x55706E50u);
    }
    return (unsigned int)v14;
  }
  return result;
}
