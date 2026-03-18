/*
 * XREFs of AlpcpCreateConnectionPort @ 0x14054355C
 * Callers:
 *     NtAlpcCreatePort @ 0x1405434EC (NtAlpcCreatePort.c)
 *     NtCreatePort @ 0x1405838B8 (NtCreatePort.c)
 *     NtCreateWaitablePort @ 0x140584334 (NtCreateWaitablePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     AlpcpInitializePort @ 0x140472328 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x1404724E8 (AlpcInitializeHandleTable.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140472674 (AlpcpValidateAndSetPortAttributes.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     AlpcpSetOwnerProcessPort @ 0x14047324C (AlpcpSetOwnerProcessPort.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 */

__int64 __fastcall AlpcpCreateConnectionPort(ULONG64 a1, int a2, ULONG64 a3, int a4, char a5, char a6)
{
  unsigned int v6; // r13d
  _QWORD *v8; // r12
  char PreviousMode; // r10
  int v10; // esi
  _QWORD *v11; // rbx
  __int64 v12; // r9
  char v13; // al
  PVOID v14; // rcx
  _QWORD *Blob; // rax
  _QWORD *v16; // rax
  int v17; // eax
  NTSTATUS inserted; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A0h]
  _OWORD v22[5]; // [rsp+60h] [rbp-98h] BYREF

  v6 = a4;
  v8 = (_QWORD *)a1;
  memset(v22, 0, 72);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_QWORD *)a1 = *(_QWORD *)a1;
    if ( a3 )
    {
      a1 = a3;
      if ( a3 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      v22[0] = *(_OWORD *)a1;
      v22[1] = *(_OWORD *)(a1 + 16);
      v22[2] = *(_OWORD *)(a1 + 32);
      v22[3] = *(_OWORD *)(a1 + 48);
      *(_QWORD *)&v22[4] = *(_QWORD *)(a1 + 64);
    }
  }
  else if ( a3 )
  {
    v22[0] = *(_OWORD *)a3;
    v22[1] = *(_OWORD *)(a3 + 16);
    v22[2] = *(_OWORD *)(a3 + 32);
    v22[3] = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v22[4] = *(_QWORD *)(a3 + 64);
  }
  LOBYTE(a4) = PreviousMode;
  LOBYTE(a1) = PreviousMode;
  v10 = ObCreateObject(a1, (int)AlpcPortObjectType, a2, a4);
  v11 = Object;
  if ( v10 < 0 )
    return (unsigned int)v10;
  memset(Object, 0, 0x1D8uLL);
  if ( a3 )
  {
    v13 = a5;
    if ( (v22[0] & 0x40000) != 0 )
      v13 = 1;
    a5 = v13;
  }
  v10 = AlpcpInitializePort((__int64)Object, 1, a5, v12);
  v14 = Object;
  if ( v10 < 0 )
  {
LABEL_26:
    ObfDereferenceObject(v14);
    return (unsigned int)v10;
  }
  v10 = AlpcpValidateAndSetPortAttributes(
          (__int64)Object,
          (int *)((unsigned __int64)v22 & ((unsigned __int128)-(__int128)a3 >> 64)),
          (__int64)Object,
          0LL,
          v6,
          a5,
          a6);
  if ( v10 < 0 )
  {
LABEL_25:
    v14 = v11;
    goto LABEL_26;
  }
  if ( a6 )
    *((_DWORD *)Object + 104) |= 0x3000u;
  AlpcpSetOwnerProcessPort((__int64)v11, (_DWORD *)((unsigned __int64)v22 & -(__int64)(a3 != 0)));
  Blob = AlpcpAllocateBlob((__int64)&AlpcConnectionType, 80LL, 1);
  v11[2] = Blob;
  if ( !Blob )
  {
    v10 = -1073741801;
    goto LABEL_25;
  }
  Blob[2] = 0LL;
  *(_QWORD *)v11[2] = v11;
  *(_QWORD *)(v11[2] + 8LL) = 0LL;
  *(_QWORD *)(v11[2] + 72LL) = 0LL;
  v16 = (_QWORD *)(v11[2] + 24LL);
  v16[1] = v16;
  *v16 = v16;
  v17 = AlpcInitializeHandleTable(v11[2] + 40LL);
  if ( v17 < 0 )
  {
    v10 = v17;
    goto LABEL_25;
  }
  inserted = ObInsertObject(v11, 0LL, 0x1F0001u, 0, 0LL, &Handle);
  if ( inserted >= 0 )
    *v8 = Handle;
  return (unsigned int)inserted;
}
