/*
 * XREFs of ObReferenceObjectByPointer @ 0x140007C50
 * Callers:
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLink @ 0x140410E40 (ObpParseSymbolicLink.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404A58AC (IopAllocateFoExtensionsOnCreate.c)
 *     WmipQueryAllData @ 0x1404D1CC0 (WmipQueryAllData.c)
 *     IoRegisterPlugPlayNotification @ 0x140561348 (IoRegisterPlugPlayNotification.c)
 *     WmipQuerySetExecuteSI @ 0x14057AD90 (WmipQuerySetExecuteSI.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 *     VerifierObReferenceObjectByPointer @ 0x140754710 (VerifierObReferenceObjectByPointer.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
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
