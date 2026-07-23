/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x140491900
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x1404918C0 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x1404EC2A8 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x1405F9DA0 (IoCreateStreamFileObject.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IopDecrementDeviceObjectRef @ 0x14007E3E0 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14007E610 (IopIncrementDeviceObjectRefCount.c)
 *     IopIncrementVpbRefCount @ 0x1400AFB14 (IopIncrementVpbRefCount.c)
 *     IopGetSetSpecificExtension @ 0x1400CC2E8 (IopGetSetSpecificExtension.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 */

int __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, PVOID *a4, HANDLE *a5)
{
  char v5; // al
  ULONG_PTR v7; // r15
  HANDLE *v8; // rsi
  int v10; // r14d
  NTSTATUS SetSpecificExtension; // ebx
  _QWORD *v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  _SLIST_ENTRY *v15; // rdx
  ULONG_PTR v16; // rcx
  int result; // eax
  PVOID v18; // rcx
  PVOID *NewObject; // [rsp+20h] [rbp-41h]
  _QWORD *v20; // [rsp+50h] [rbp-11h] BYREF
  int v21; // [rsp+58h] [rbp-9h] BYREF
  __int64 v22; // [rsp+60h] [rbp-1h]
  __int64 v23; // [rsp+68h] [rbp+7h]
  int v24; // [rsp+70h] [rbp+Fh]
  __int128 v25; // [rsp+78h] [rbp+17h]
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
    goto LABEL_8;
  }
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return -1073741811;
  }
LABEL_8:
  IopIncrementDeviceObjectRefCount(v7, 1);
  v22 = 0LL;
  v23 = 0LL;
  v21 = 48;
  v24 = 512;
  v25 = 0LL;
  LOBYTE(a5) = 1;
  SetSpecificExtension = ObCreateObjectEx(
                           0,
                           IoFileObjectType,
                           (__int64)&v21,
                           0,
                           (__int64)NewObject,
                           216,
                           216,
                           0,
                           &Object,
                           &a5);
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
  v12 = (char *)Object + 192;
  *((_QWORD *)Object + 25) = (char *)Object + 192;
  *v12 = v12;
  if ( !v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    v15 = (_SLIST_ENTRY *)*((_QWORD *)Object - 2);
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v15);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v15);
    }
    *((_QWORD *)Object - 2) = 0LL;
LABEL_13:
    *((_DWORD *)Object + 20) |= 0x40000u;
    v16 = *(_QWORD *)(v7 + 56);
    if ( v16 )
      IopIncrementVpbRefCount(v16, 1);
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
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)Object, 1u, 0x20u, 1, &v20, 0LL);
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
      *v20 = *(_QWORD *)(a1 + 8);
    }
    *a4 = Object;
    return SetSpecificExtension;
  }
  result = ObInsertObject(Object, 0LL, 1u, 1u, &Object, &Handle);
  SetSpecificExtension = result;
  if ( result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
