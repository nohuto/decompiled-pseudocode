/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x1403EE178
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x1403EE138 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x14052E570 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x1406237CC (IoCreateStreamFileObject.c)
 * Callees:
 *     IopIncrementVpbRefCount @ 0x1400079F8 (IopIncrementVpbRefCount.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14002E870 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002E950 (IopIncrementDeviceObjectRefCount.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

int __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, _QWORD *a4, HANDLE *a5)
{
  HANDLE *v5; // rsi
  ULONG_PTR v7; // r15
  int v8; // r12d
  NTSTATUS SetSpecificExtension; // ebx
  char *v11; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _SLIST_ENTRY *v13; // rdx
  _GENERAL_LOOKASIDE *P; // r8
  __int64 v15; // r9
  PVOID v16; // r14
  ULONG_PTR v17; // rcx
  int result; // eax
  _QWORD *v19; // [rsp+50h] [rbp-21h] BYREF
  int v20; // [rsp+58h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-11h]
  __int64 v22; // [rsp+68h] [rbp-9h]
  int v23; // [rsp+70h] [rbp-1h]
  __int128 v24; // [rsp+78h] [rbp+7h]
  PVOID Object; // [rsp+D0h] [rbp+5Fh] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+77h] BYREF

  v5 = a5;
  v7 = a3;
  v8 = ((unsigned __int8)~*(_BYTE *)(a1 + 2) >> 1) & 1;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return -1073741637;
  }
  if ( !v8 && v5 )
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
  v20 = 48;
  v21 = 0LL;
  v23 = 512;
  v22 = 0LL;
  v24 = 0LL;
  LOWORD(a5) = 1;
  SetSpecificExtension = ObCreateObjectEx(0, (_DWORD)IoFileObjectType, (unsigned int)&v20, 0);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v7, 0);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return SetSpecificExtension;
  }
  v11 = (char *)Object;
  memset(Object, 0, 0xD8uLL);
  *(_DWORD *)v11 = 14155781;
  *((_QWORD *)v11 + 1) = v7;
  *((_DWORD *)v11 + 20) = 256;
  KeInitializeEvent((PRKEVENT)(v11 + 152), SynchronizationEvent, 0);
  *((_QWORD *)v11 + 23) = 0LL;
  *((_QWORD *)v11 + 25) = v11 + 192;
  *((_QWORD *)v11 + 24) = v11 + 192;
  if ( !v8 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = (_SLIST_ENTRY *)*((_QWORD *)v11 - 2);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v13);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v13);
    }
    *((_QWORD *)v11 - 2) = 0LL;
LABEL_13:
    v16 = Object;
    *((_DWORD *)Object + 20) |= 0x40000u;
    v17 = *(_QWORD *)(v7 + 56);
    if ( v17 )
      IopIncrementVpbRefCount(v17, 1);
    if ( v8 )
    {
      if ( v5 )
      {
        *v5 = Handle;
        ObfDereferenceObject(v16);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      LOBYTE(v15) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)v16, 1u, 32LL, v15, &v19, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        if ( v5 )
        {
          ObCloseHandle(*v5, 0);
          *v5 = 0LL;
        }
        else
        {
          ObfDereferenceObject(v16);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(SetSpecificExtension);
        return SetSpecificExtension;
      }
      *v19 = *(_QWORD *)(a1 + 8);
    }
    *a4 = v16;
    return SetSpecificExtension;
  }
  result = ObInsertObject(v11, 0LL, 1u, 1u, &Object, &Handle);
  SetSpecificExtension = result;
  if ( result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
