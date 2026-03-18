/*
 * XREFs of ObpCreateDirectoryObject @ 0x14044E350
 * Callers:
 *     NtCreateDirectoryObject @ 0x14044E338 (NtCreateDirectoryObject.c)
 *     NtCreateDirectoryObjectEx @ 0x1404C40BC (NtCreateDirectoryObjectEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 */

NTSTATUS __fastcall ObpCreateDirectoryObject(HANDLE *a1, ACCESS_MASK a2, int a3, void *a4, char a5)
{
  HANDLE *v7; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  PVOID v10; // rbx
  int v11; // edi
  _QWORD *v12; // rsi
  int v13; // edi
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  void *v16; // [rsp+60h] [rbp-28h]
  PVOID v17; // [rsp+68h] [rbp-20h] BYREF

  v7 = a1;
  Handle = 0LL;
  v16 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (HANDLE *)MmUserProbeAddress;
    *a1 = *a1;
  }
  if ( a4 )
  {
    result = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
    v10 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v10 = v16;
  }
  LOBYTE(a4) = PreviousMode;
  LOBYTE(a1) = PreviousMode;
  v11 = ObCreateObject((_DWORD)a1, (_DWORD)ObpDirectoryObjectType, a3, (_DWORD)a4, 0, 352, 0, 0, (__int64)&v17);
  if ( v11 >= 0 )
  {
    v12 = v17;
    memset(v17, 0, 0x160uLL);
    v12[37] = 0LL;
    *((_DWORD *)v12 + 80) = -1;
    v13 = 0;
    if ( v10 )
    {
      v13 = 4;
      v12[39] = v10;
      if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
        v13 = 20;
    }
    if ( (a5 & 1) != 0 )
      v13 |= 8u;
    *((_DWORD *)v12 + 86) |= v13;
    result = ObInsertObject(v12, 0LL, a2, 0, 0LL, &Handle);
    *v7 = Handle;
  }
  else
  {
    if ( v10 )
      ObfDereferenceObject(v10);
    return v11;
  }
  return result;
}
