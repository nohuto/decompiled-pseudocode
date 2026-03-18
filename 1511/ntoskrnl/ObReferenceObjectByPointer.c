/*
 * XREFs of ObReferenceObjectByPointer @ 0x140003910
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLink @ 0x1403BEA20 (ObpParseSymbolicLink.c)
 *     WmipQueryAllData @ 0x1403D3044 (WmipQueryAllData.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048F628 (IopAllocateFoExtensionsOnCreate.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     IoRegisterPlugPlayNotification @ 0x1404E90BC (IoRegisterPlugPlayNotification.c)
 *     WmipQuerySetExecuteSI @ 0x1405014A4 (WmipQuerySetExecuteSI.c)
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 *     VerifierObReferenceObjectByPointer @ 0x1406D0C20 (VerifierObReferenceObjectByPointer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  volatile signed __int64 *v4; // rdi
  bool v5; // zf
  signed __int64 BugCheckParameter4; // rbx

  v4 = (volatile signed __int64 *)((char *)Object - 48);
  if ( ObjectType )
    v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v4 + 24) ^ (unsigned __int64)BYTE1(v4)] == (_QWORD)ObjectType;
  else
    v5 = AccessMode == 0;
  if ( !v5 )
    return -1073741788;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v4);
  BugCheckParameter4 = _InterlockedIncrement64(v4);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v4 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
