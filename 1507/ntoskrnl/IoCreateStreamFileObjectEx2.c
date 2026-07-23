/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x14040E4B0
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x14040E470 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x1405647AC (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x14067402C (IoCreateStreamFileObject.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IopIncrementVpbRefCount @ 0x14003F7B4 (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400458A0 (IopIncrementDeviceObjectRefCount.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140045A10 (IopDecrementDeviceObjectRef.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 */

int __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, PVOID *a4, HANDLE *a5)
{
  char v5; // al
  ULONG_PTR v7; // r15
  HANDLE *v8; // rsi
  int v10; // r14d
  int result; // eax
  NTSTATUS SetSpecificExtension; // ebx
  _QWORD *v13; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  _SLIST_ENTRY *v16; // rdx
  ULONG_PTR v17; // rcx
  PVOID v18; // rcx
  _QWORD *v19; // [rsp+50h] [rbp-11h] BYREF
  int v20; // [rsp+58h] [rbp-9h] BYREF
  __int64 v21; // [rsp+60h] [rbp-1h]
  __int64 v22; // [rsp+68h] [rbp+7h]
  int v23; // [rsp+70h] [rbp+Fh]
  __int128 v24; // [rsp+78h] [rbp+17h]
  PVOID Object; // [rsp+C0h] [rbp+5Fh] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+77h] BYREF

  v5 = *(_BYTE *)(a1 + 2);
  Handle = 0LL;
  *a4 = 0LL;
  v7 = a3;
  v8 = a5;
  v10 = ((unsigned __int8)~v5 >> 1) & 1;
  if ( a5 )
    *a5 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return -1073741637;
  }
  if ( !v10 && v8 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return -1073741811;
  }
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 8);
  }
  else if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return -1073741811;
  }
  IopIncrementDeviceObjectRefCount(v7, 1);
  v21 = 0LL;
  v22 = 0LL;
  v20 = 48;
  v23 = 512;
  v24 = 0LL;
  LOBYTE(a5) = 1;
  SetSpecificExtension = ObCreateObjectEx(0, (_DWORD)IoFileObjectType, (unsigned int)&v20, 0);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v7, 0, 0);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return SetSpecificExtension;
  }
  memset(Object, 0, 0xD8uLL);
  *(_WORD *)Object = 5;
  *((_WORD *)Object + 1) = 216;
  *((_QWORD *)Object + 1) = v7;
  *((_DWORD *)Object + 20) = 256;
  KeInitializeEvent((PRKEVENT)((char *)Object + 152), SynchronizationEvent, 0);
  *((_QWORD *)Object + 23) = 0LL;
  v13 = (char *)Object + 192;
  *((_QWORD *)Object + 25) = (char *)Object + 192;
  *v13 = v13;
  if ( !v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    v16 = (_SLIST_ENTRY *)*((_QWORD *)Object - 2);
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v16);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v16);
    }
    *((_QWORD *)Object - 2) = 0LL;
    goto LABEL_27;
  }
  result = ObInsertObject(Object, 0LL, 1u, 1u, &Object, &Handle);
  SetSpecificExtension = result;
  if ( result >= 0 )
  {
LABEL_27:
    *((_DWORD *)Object + 20) |= 0x40000u;
    v17 = *(_QWORD *)(v7 + 56);
    if ( v17 )
      IopIncrementVpbRefCount(v17, 1);
    if ( v10 )
    {
      if ( v8 )
      {
        v18 = Object;
        *v8 = Handle;
        ObfDereferenceObject(v18);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)Object, 1u, 0x20u, 1, &v19, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        if ( v8 )
        {
          ObCloseHandle(*v8, 0);
          *v8 = 0LL;
        }
        else
        {
          ObfDereferenceObject(Object);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(SetSpecificExtension);
        return SetSpecificExtension;
      }
      *v19 = *(_QWORD *)(a1 + 8);
    }
    *a4 = Object;
    return SetSpecificExtension;
  }
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
