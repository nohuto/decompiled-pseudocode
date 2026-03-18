/*
 * XREFs of AlpcpCreateConnectionPort @ 0x1404B1C70
 * Callers:
 *     NtAlpcCreatePort @ 0x1404B1C38 (NtAlpcCreatePort.c)
 *     NtCreatePort @ 0x14050C6A0 (NtCreatePort.c)
 *     NtCreateWaitablePort @ 0x14050CF20 (NtCreateWaitablePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     AlpcpCreatePort @ 0x14046C4A4 (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x14046C500 (AlpcpInitializePort.c)
 *     AlpcpSetOwnerProcessPort @ 0x14046C6C4 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140479824 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     AlpcInitializeHandleTable @ 0x14047D5D0 (AlpcInitializeHandleTable.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 */

__int64 __fastcall AlpcpCreateConnectionPort(HANDLE *a1, __int64 a2, ULONG64 a3, unsigned int a4, char a5, char a6)
{
  HANDLE *v8; // r12
  char PreviousMode; // r9
  ULONG64 v10; // rcx
  __int64 result; // rax
  char v12; // al
  PVOID v13; // rbx
  int v14; // esi
  void *v15; // rcx
  _QWORD *Blob; // rax
  _QWORD *v17; // rax
  int v18; // eax
  NTSTATUS inserted; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v22[5]; // [rsp+50h] [rbp-98h] BYREF

  v8 = a1;
  memset(v22, 0, 72);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (HANDLE *)MmUserProbeAddress;
    *a1 = *a1;
    if ( a3 )
    {
      v10 = a3;
      if ( a3 >= MmUserProbeAddress )
        v10 = MmUserProbeAddress;
      v22[0] = *(_OWORD *)v10;
      v22[1] = *(_OWORD *)(v10 + 16);
      v22[2] = *(_OWORD *)(v10 + 32);
      v22[3] = *(_OWORD *)(v10 + 48);
      *(_QWORD *)&v22[4] = *(_QWORD *)(v10 + 64);
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
  result = AlpcpCreatePort(PreviousMode, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v12 = a5;
      if ( (v22[0] & 0x40000) != 0 )
        v12 = 1;
      a5 = v12;
    }
    v13 = Object;
    v14 = AlpcpInitializePort((__int64)Object, 1, a5);
    v15 = v13;
    if ( v14 >= 0 )
    {
      v14 = AlpcpValidateAndSetPortAttributes(
              (__int64)v13,
              (int *)((unsigned __int64)v22 & ((unsigned __int128)-(__int128)a3 >> 64)),
              (__int64)v13,
              0LL,
              a4,
              a5,
              a6);
      if ( v14 >= 0 )
      {
        if ( a6 )
          *((_DWORD *)v13 + 104) |= 0x3000u;
        AlpcpSetOwnerProcessPort((__int64)v13, (_DWORD *)((unsigned __int64)v22 & -(__int64)(a3 != 0)));
        Blob = AlpcpAllocateBlob((__int64)&AlpcConnectionType, 72LL, 1);
        *((_QWORD *)v13 + 2) = Blob;
        if ( Blob )
        {
          Blob[2] = 0LL;
          **((_QWORD **)v13 + 2) = v13;
          *(_QWORD *)(*((_QWORD *)v13 + 2) + 8LL) = 0LL;
          *(_QWORD *)(*((_QWORD *)v13 + 2) + 64LL) = 0LL;
          v17 = (_QWORD *)(*((_QWORD *)v13 + 2) + 24LL);
          v17[1] = v17;
          *v17 = v17;
          v18 = AlpcInitializeHandleTable(*((_QWORD *)v13 + 2) + 40LL);
          if ( v18 >= 0 )
          {
            inserted = ObInsertObject(v13, 0LL, 0x1F0001u, 0, 0LL, &Handle);
            if ( inserted >= 0 )
              *v8 = Handle;
            return (unsigned int)inserted;
          }
          v14 = v18;
        }
        else
        {
          v14 = -1073741801;
        }
      }
      v15 = v13;
    }
    ObfDereferenceObject(v15);
    return (unsigned int)v14;
  }
  return result;
}
