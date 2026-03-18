/*
 * XREFs of NtUserGetPointerDeviceCursors @ 0x1C01191E0
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerDeviceAccessible @ 0x1C000F3C0 (IsPointerDeviceAccessible.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _FindPointerDevice @ 0x1C00EF35C (_FindPointerDevice.c)
 *     _GetPointerDeviceCursors @ 0x1C0119334 (_GetPointerDeviceCursors.c)
 */

__int64 __fastcall NtUserGetPointerDeviceCursors(unsigned __int64 a1, unsigned int *a2, volatile void *a3)
{
  unsigned int PointerDeviceCursors; // ebx
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned int *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v13[56]; // [rsp+40h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v14; // [rsp+98h] [rbp+20h] BYREF

  PointerDeviceCursors = 1;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  if ( !a1 || !a2 )
    goto LABEL_21;
  if ( !(unsigned int)FindPointerDevice(a1, &v14, 0LL) )
  {
    PointerDeviceCursors = 0;
    goto LABEL_16;
  }
  if ( !(unsigned int)IsPointerDeviceAccessible((__int64)v14) )
  {
LABEL_21:
    PointerDeviceCursors = 0;
    UserSetLastError(87);
    goto LABEL_16;
  }
  v8 = *(_DWORD *)(v7 + 292);
  if ( a3 )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v9 = (unsigned int *)W32UserProbeAddress;
    if ( *v9 < v8 )
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (unsigned int *)W32UserProbeAddress;
      *a2 = v8;
      PointerDeviceCursors = 0;
      UserSetLastError(122);
    }
    else
    {
      ProbeForWrite(a3, 8LL * v8, 8u);
      PointerDeviceCursors = GetPointerDeviceCursors(v14, v8, a3);
      if ( PointerDeviceCursors )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v8;
      }
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (unsigned int *)W32UserProbeAddress;
    *a2 = v8;
  }
LABEL_16:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  UserSessionSwitchLeaveCrit(v11, v10);
  return PointerDeviceCursors;
}
