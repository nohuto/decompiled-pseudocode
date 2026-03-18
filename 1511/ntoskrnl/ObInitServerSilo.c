/*
 * XREFs of ObInitServerSilo @ 0x140526E34
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     PsSetMonitorContextServerSilo @ 0x140134308 (PsSetMonitorContextServerSilo.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140151120 (ZwOpenDirectoryObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsAllocateMonitorContextServerSilo @ 0x1405265E4 (PsAllocateMonitorContextServerSilo.c)
 */

__int64 __fastcall ObInitServerSilo(_QWORD *a1)
{
  __int64 result; // rax
  int v3; // ebx
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  PVOID v7; // rcx
  int v8; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v9; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+98h] [rbp+28h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+30h] BYREF

  DirectoryHandle = 0LL;
  v9 = L"Global??";
  v8 = 1179664;
  result = PsAllocateMonitorContextServerSilo(ObSiloMonitor, 736LL, &Object);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = Object;
    *(_QWORD *)Object = 0LL;
    memset(v4 + 1, 0, 0x6CuLL);
    v4[15] = 0LL;
    v5 = v4 + 16;
    v4[90] = 0LL;
    v6 = 37LL;
    do
    {
      v5[1] = v5;
      *v5 = v5;
      v5 += 2;
      --v6;
    }
    while ( v6 );
    if ( a1 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = (HANDLE)*((_QWORD *)PsGetServerSiloGlobals(a1) + 3);
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
      if ( v3 < 0 )
      {
LABEL_7:
        PsDereferenceMonitorContextServerSilo((__int64)v4);
        return (unsigned int)v3;
      }
      v3 = ObReferenceObjectByHandle(DirectoryHandle, 2u, ObpDirectoryObjectType, 0, &Object, 0LL);
      if ( v3 >= 0 )
      {
        v7 = Object;
        *v4 = *((_QWORD *)Object + 38);
        ObfDereferenceObject(v7);
      }
      ZwClose(DirectoryHandle);
    }
    if ( v3 >= 0 )
      v3 = PsSetMonitorContextServerSilo(ObSiloMonitor, a1, 1, (__int64)v4, 0LL);
    goto LABEL_7;
  }
  return result;
}
