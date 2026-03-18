/*
 * XREFs of NtUserSetWindowStationUser @ 0x1C010C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetWindowStationUser @ 0x1C010C9D4 (_SetWindowStationUser.c)
 */

__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID Object; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  LOBYTE(v8) = 1;
  v9 = ValidateHwinsta(a1, v8, 0LL, &Object);
  v10 = 0;
  if ( v9 >= 0 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = *a2;
    if ( a3 && (_DWORD)v4 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + v4 > W32UserProbeAddress || a3 + v4 < a3 )
        *W32UserProbeAddress = 0;
    }
    v10 = SetWindowStationUser(Object, &v15, a3, (unsigned int)v4);
    ObfDereferenceObject(Object);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v16);
  UserSessionSwitchLeaveCrit(v12, v11);
  return v10;
}
