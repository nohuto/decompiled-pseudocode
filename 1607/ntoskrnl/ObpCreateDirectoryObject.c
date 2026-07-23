/*
 * XREFs of ObpCreateDirectoryObject @ 0x14046FBB4
 * Callers:
 *     NtCreateDirectoryObject @ 0x14046FB9C (NtCreateDirectoryObject.c)
 *     NtCreateDirectoryObjectEx @ 0x1404D2974 (NtCreateDirectoryObjectEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 */

NTSTATUS __fastcall ObpCreateDirectoryObject(unsigned __int64 a1, ACCESS_MASK a2, int a3, void *a4, char a5)
{
  _QWORD *v7; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  PVOID v9; // rbx
  int v10; // edi
  _QWORD *v11; // rsi
  int v12; // edi
  NTSTATUS result; // eax
  PVOID v14; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID v16; // [rsp+60h] [rbp-28h]
  PVOID Object; // [rsp+68h] [rbp-20h] BYREF

  v7 = (_QWORD *)a1;
  Handle = 0LL;
  v16 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  if ( a4 )
  {
    result = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &v14, 0LL);
    v9 = v14;
    if ( result < 0 )
      return result;
  }
  else
  {
    v9 = v16;
  }
  LOBYTE(a4) = PreviousMode;
  LOBYTE(a1) = PreviousMode;
  v10 = ObCreateObject(a1, (_DWORD)ObpDirectoryObjectType, a3, (_DWORD)a4, 0, 352, 0, 0, (__int64)&Object);
  if ( v10 < 0 )
  {
    if ( v9 )
      ObfDereferenceObject(v9);
    return v10;
  }
  else
  {
    v11 = Object;
    memset(Object, 0, 0x160uLL);
    v11[37] = 0LL;
    *((_DWORD *)v11 + 80) = -1;
    v12 = 0;
    if ( v9 )
    {
      v12 = 4;
      v11[39] = v9;
      if ( RtlIsSandboxedToken(0LL, PreviousMode) )
        v12 = 20;
    }
    if ( (a5 & 1) != 0 )
      v12 |= 8u;
    *((_DWORD *)v11 + 86) |= v12;
    result = ObInsertObject(v11, 0LL, a2, 0, 0LL, &Handle);
    LODWORD(v14) = result;
    *v7 = Handle;
  }
  return result;
}
