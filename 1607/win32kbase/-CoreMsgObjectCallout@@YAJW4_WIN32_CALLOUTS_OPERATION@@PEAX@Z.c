/*
 * XREFs of ?CoreMsgObjectCallout@@YAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1C00F832C
 * Callers:
 *     W32CalloutDispatch @ 0x1C001CE70 (W32CalloutDispatch.c)
 * Callees:
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C00F8498 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?Open@CoreMsgObject@CoreMessagingK@@CAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C00F8664 (-Open@CoreMsgObject@CoreMessagingK@@CAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 */

__int64 __fastcall CoreMsgObjectCallout(
        unsigned int a1,
        struct _WIN32_OPENMETHOD_PARAMETERS *a2,
        __int64 a3,
        const GUID *a4)
{
  const GUID *v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]

  if ( dword_1C01189C0 > 5u )
  {
    v16 = 0;
    v14 = &v12;
    v12 = a1;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01189C0, &unk_1C0104C6D, 0LL, a4, 3u, &pData);
  }
  if ( !CoreMessagingK::EntryLock::s_Initialized )
    CoreMessagingK::Runtime::BugCheck(5LL, 0LL, 0LL);
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  v7 = a1 - 33;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          v10 = -1073741585;
          goto LABEL_17;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 16LL))(*(_QWORD *)a2 + 8LL);
      }
      v10 = 0;
    }
    else
    {
      v10 = 0;
      if ( *((_BYTE *)a2 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a2) == -1 )
        v10 = -1073741790;
    }
  }
  else
  {
    v10 = CoreMessagingK::CoreMsgObject::Open(a2);
  }
LABEL_17:
  v12 = v10;
  if ( dword_1C01189C0 > 5u )
  {
    v16 = 0;
    v14 = &v12;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01189C0, &unk_1C0104C3C, 0LL, v6, 3u, &pData);
  }
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  return v10;
}
