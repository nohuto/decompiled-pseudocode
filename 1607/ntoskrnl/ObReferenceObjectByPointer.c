/*
 * XREFs of ObReferenceObjectByPointer @ 0x14007F760
 * Callers:
 *     EtwpAddUmRegEntry @ 0x14040DADC (EtwpAddUmRegEntry.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14046B43C (IopAllocateFoExtensionsOnCreate.c)
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x140476170 (ObpParseSymbolicLinkEx.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 *     WmipQueryAllData @ 0x140504C98 (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x14052A4BC (WmipQuerySetExecuteSI.c)
 *     IoRegisterPlugPlayNotification @ 0x14052BB14 (IoRegisterPlugPlayNotification.c)
 *     WmipRegisterDevice @ 0x14053A528 (WmipRegisterDevice.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
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
