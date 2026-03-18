/*
 * XREFs of ObInitServerSilo @ 0x140593D20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     PsSetMonitorContextServerSilo @ 0x14015EC2C (PsSetMonitorContextServerSilo.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14017FAF0 (ZwOpenDirectoryObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsAllocateMonitorContextServerSilo @ 0x140593528 (PsAllocateMonitorContextServerSilo.c)
 */

__int64 __fastcall ObInitServerSilo(_QWORD *a1)
{
  __int64 result; // rax
  int v3; // ebx
  _QWORD *v4; // rdi
  PVOID v5; // rcx
  int v6; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v7; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+98h] [rbp+28h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+30h] BYREF

  DirectoryHandle = 0LL;
  v7 = L"Global??";
  v6 = 1179664;
  result = PsAllocateMonitorContextServerSilo(ObSiloMonitor, 128LL, &Object);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = Object;
    *(_QWORD *)Object = 0LL;
    memset(v4 + 1, 0, 0x6CuLL);
    v4[15] = 0LL;
    if ( a1 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = (HANDLE)*((_QWORD *)PsGetServerSiloGlobals(a1) + 3);
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
      if ( v3 < 0 )
      {
LABEL_5:
        PsDereferenceMonitorContextServerSilo((__int64)v4);
        return (unsigned int)v3;
      }
      v3 = ObReferenceObjectByHandle(DirectoryHandle, 2u, ObpDirectoryObjectType, 0, &Object, 0LL);
      if ( v3 >= 0 )
      {
        v5 = Object;
        *v4 = *((_QWORD *)Object + 38);
        ObfDereferenceObject(v5);
      }
      ZwClose(DirectoryHandle);
    }
    if ( v3 >= 0 )
      v3 = PsSetMonitorContextServerSilo(ObSiloMonitor, a1, 1, (__int64)v4, 0LL);
    goto LABEL_5;
  }
  return result;
}
