/*
 * XREFs of AlpcpCreateConnectionPort @ 0x14049DAA8
 * Callers:
 *     NtAlpcCreatePort @ 0x14049DA70 (NtAlpcCreatePort.c)
 *     NtCreatePort @ 0x140547A84 (NtCreatePort.c)
 *     NtCreateWaitablePort @ 0x1405488FC (NtCreateWaitablePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpSetOwnerProcessPort @ 0x140407830 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpAllocateBlob @ 0x14040C4E4 (AlpcpAllocateBlob.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     AlpcInitializeHandleTable @ 0x14049DD44 (AlpcInitializeHandleTable.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x14049FA94 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x14049FCA0 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x14049FE60 (AlpcpCreatePort.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

__int64 __fastcall AlpcpCreateConnectionPort(HANDLE *a1, __int64 a2, unsigned __int64 a3, int a4, char a5, char a6)
{
  __int64 v10; // rcx
  char PreviousMode; // r10
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // r8
  char v15; // al
  PVOID v16; // rbx
  int v17; // esi
  void *v18; // rcx
  _QWORD *Blob; // rax
  _QWORD *v20; // rax
  int v21; // eax
  NTSTATUS inserted; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v25[5]; // [rsp+50h] [rbp-98h] BYREF

  memset(v25, 0, 0x48uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( a3 )
    {
      v12 = a3;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      v25[0] = *(_OWORD *)v12;
      v25[1] = *(_OWORD *)(v12 + 16);
      v25[2] = *(_OWORD *)(v12 + 32);
      v25[3] = *(_OWORD *)(v12 + 48);
      *(_QWORD *)&v25[4] = *(_QWORD *)(v12 + 64);
    }
  }
  else if ( a3 )
  {
    v25[0] = *(_OWORD *)a3;
    v25[1] = *(_OWORD *)(a3 + 16);
    v25[2] = *(_OWORD *)(a3 + 32);
    v25[3] = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v25[4] = *(_QWORD *)(a3 + 64);
  }
  LOBYTE(v10) = PreviousMode;
  result = AlpcpCreatePort(v10, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v15 = a5;
      if ( (v25[0] & 0x40000) != 0 )
        v15 = 1;
      a5 = v15;
    }
    LOBYTE(v14) = a5;
    v16 = Object;
    v17 = AlpcpInitializePort(Object, 1LL, v14);
    v18 = v16;
    if ( v17 >= 0 )
    {
      v17 = AlpcpValidateAndSetPortAttributes(
              (_DWORD)v16,
              (unsigned __int64)v25 & ((unsigned __int128)-(__int128)a3 >> 64),
              (_DWORD)v16,
              0,
              a4,
              a5,
              a6);
      if ( v17 >= 0 )
      {
        if ( a6 )
          *((_DWORD *)v16 + 104) |= 0x3000u;
        AlpcpSetOwnerProcessPort((__int64)v16, (_DWORD *)((unsigned __int64)v25 & -(__int64)(a3 != 0)));
        Blob = AlpcpAllocateBlob((__int64)&AlpcConnectionType, 80LL, 1);
        *((_QWORD *)v16 + 2) = Blob;
        if ( Blob )
        {
          Blob[2] = 0LL;
          **((_QWORD **)v16 + 2) = v16;
          *(_QWORD *)(*((_QWORD *)v16 + 2) + 8LL) = 0LL;
          *(_QWORD *)(*((_QWORD *)v16 + 2) + 72LL) = 0LL;
          v20 = (_QWORD *)(*((_QWORD *)v16 + 2) + 24LL);
          v20[1] = v20;
          *v20 = v20;
          v21 = AlpcInitializeHandleTable(*((_QWORD *)v16 + 2) + 40LL);
          if ( v21 >= 0 )
          {
            inserted = ObInsertObject(v16, 0LL, 0x1F0001u, 0, 0LL, &Handle);
            if ( inserted >= 0 )
              *a1 = Handle;
            return (unsigned int)inserted;
          }
          v17 = v21;
        }
        else
        {
          v17 = -1073741801;
        }
      }
      v18 = v16;
    }
    ObfDereferenceObject(v18);
    return (unsigned int)v17;
  }
  return result;
}
