/*
 * XREFs of PiControlGetSetDeviceStatus @ 0x1404E1D68
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1404E2194 (PiControlGetUserFlagsFromDeviceNode.c)
 */

__int64 __fastcall PiControlGetSetDeviceStatus(__int64 a1, void **a2, unsigned int a3, char a4)
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
  result = PiControlMakeUserModeCallersCopy(&P, a2[1], v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v11 = (_QWORD *)PnpDeviceObjectFromDeviceInstance(v19);
    if ( a4 && P )
      ExFreePoolWithTag(P, 0);
    if ( v11 )
      v5 = *(_QWORD *)(v11[39] + 40LL);
    PpDevNodeUnlockTree(0LL);
    if ( !v5 )
    {
      v14 = -1073741810;
      goto LABEL_11;
    }
    if ( v5 == IopRootDeviceNode && *((_DWORD *)a2 + 4) )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    v12 = *((_DWORD *)a2 + 4);
    v13 = (*((_BYTE *)a2 + 28) & 1) == 0;
    if ( !v12 )
    {
      PiControlGetUserFlagsFromDeviceNode(v5, (char *)a2 + 20);
      *((_DWORD *)a2 + 6) = *(_DWORD *)(v5 + 404);
      *((_DWORD *)a2 + 8) = *(_DWORD *)(v5 + 408);
      v14 = 0;
      goto LABEL_11;
    }
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
      {
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
    }
    else
    {
      if ( (*((_BYTE *)a2 + 28) & 1) != 0 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x55706E50u);
        v9 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v14 = -1073741670;
          goto LABEL_11;
        }
        memmove(PoolWithTag, a2, v7);
      }
      else
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
      }
      v17 = (__int64)v9;
      if ( v13 )
        v17 = (__int64)a2;
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
  return result;
}
