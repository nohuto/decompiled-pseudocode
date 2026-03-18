/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1C0214CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     GetPointerRawDataInternal @ 0x1C01D7754 (GetPointerRawDataInternal.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        volatile void *Address)
{
  __int64 v6; // r13
  int PointerRawDataInternal; // ebx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  void *v13; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // [rsp+68h] [rbp-50h]
  unsigned __int16 v22; // [rsp+C0h] [rbp+8h]

  v22 = a1;
  v6 = a3;
  v21 = EnterSharedCrit(0LL, 1LL);
  PointerRawDataInternal = 0;
  if ( !a1
    || HIWORD(a1)
    || !a2
    || !(_DWORD)v6
    || !a4
    || !Address
    || (v10 = v6 * a2, v10 > 0xFFFFFFFF)
    || (v11 = 28LL * (unsigned int)v6, v11 > 0xFFFFFFFF) )
  {
    v12 = 87LL;
    goto LABEL_20;
  }
  if ( (unsigned int)v11 >= 0x2710000 || (v13 = (void *)Win32AllocPoolWithQuota((unsigned int)v11, 2020635477LL)) == 0LL )
  {
    v12 = 8LL;
LABEL_20:
    UserSetLastError(v12);
    goto LABEL_21;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(0x3FFFFFFFFFFFFFFFLL);
  ProbeForWrite(Address, 4LL * (unsigned int)v10, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( v11 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v15) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 + a4 > W32UserProbeAddress || v11 + a4 < a4 )
      *W32UserProbeAddress = 0;
  }
  memmove(v13, (const void *)a4, (unsigned int)v11);
  PointerRawDataInternal = GetPointerRawDataInternal(
                             v21,
                             v22,
                             a2,
                             v6,
                             (struct tagPOINTER_DEVICE_PROPERTY *)v13,
                             v10,
                             (int *)Address);
  Win32FreePool(v13, v16, v17);
LABEL_21:
  UserSessionSwitchLeaveCrit(v19, v18);
  return PointerRawDataInternal;
}
