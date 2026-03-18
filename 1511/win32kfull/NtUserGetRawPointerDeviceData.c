/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1C021BBA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     GetPointerRawDataInternal @ 0x1C01E13FC (GetPointerRawDataInternal.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        volatile void *Address)
{
  __int64 v6; // r13
  unsigned int PointerRawDataInternal; // ebx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  int v12; // ecx
  void *v13; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // [rsp+58h] [rbp-60h]
  unsigned __int16 v20; // [rsp+C0h] [rbp+8h]

  v20 = a1;
  v6 = a3;
  v19 = EnterSharedCrit(0LL, 1LL);
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
    v12 = 87;
    goto LABEL_20;
  }
  if ( (unsigned int)v11 >= 0x2710000 || (v13 = (void *)Win32AllocPoolWithQuota((unsigned int)v11, 2020635477LL)) == 0LL )
  {
    v12 = 8;
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
                             v19,
                             v20,
                             a2,
                             v6,
                             (struct tagPOINTER_DEVICE_PROPERTY *)v13,
                             v10,
                             (int *)Address);
  Win32FreePool(v13);
LABEL_21:
  UserSessionSwitchLeaveCrit(v17, v16);
  return PointerRawDataInternal;
}
