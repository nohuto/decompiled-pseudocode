/*
 * XREFs of ObReferenceObjectByPointerWithTag @ 0x14009E120
 * Callers:
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x140476F10 (NtOpenProcessTokenEx.c)
 *     VerifierObReferenceObjectByPointerWithTag @ 0x1406D0C94 (VerifierObReferenceObjectByPointerWithTag.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointerWithTag(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag)
{
  volatile signed __int64 *v5; // rdi
  signed __int64 BugCheckParameter4; // rbx

  v5 = (volatile signed __int64 *)((char *)Object - 48);
  if ( ObjectType )
  {
    if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v5 + 24) ^ (unsigned __int64)BYTE1(v5)] != ObjectType )
      return -1073741788;
  }
  else if ( AccessMode )
  {
    return -1073741788;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v5);
  BugCheckParameter4 = _InterlockedIncrement64(v5);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v5 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
