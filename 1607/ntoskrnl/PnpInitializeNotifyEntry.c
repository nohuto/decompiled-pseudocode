/*
 * XREFs of PnpInitializeNotifyEntry @ 0x14052BF78
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x14052BB14 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000ECC0 (ExInitializeResourceLite.c)
 *     MmIsSessionAddress @ 0x140013C40 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151960 (swprintf_s.c)
 *     ZwOpenSession @ 0x14015C020 (ZwOpenSession.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpInitializeNotifyEntry(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v11; // r14d
  int v12; // ebx
  unsigned int SessionId; // eax
  struct _ERESOURCE *PoolWithTag; // rax
  __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v19[8]; // [rsp+58h] [rbp-B0h]
  wchar_t Dst[256]; // [rsp+78h] [rbp-90h] BYREF

  v7 = 0LL;
  v16 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( !MmIsSessionAddress(a3) )
    goto LABEL_5;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  v11 = SessionId;
  if ( SessionId == -1 )
    return (unsigned int)-1073741811;
  swprintf_s(Dst, 0x100uLL, L"\\KernelObjects\\Session%d", SessionId);
  RtlInitUnicodeString(&DestinationString, Dst);
  v18[1] = 0LL;
  v18[2] = &DestinationString;
  LODWORD(v18[0]) = 48;
  v19[0] = 512;
  *(_OWORD *)&v19[2] = 0LL;
  v12 = ZwOpenSession((__int64)&v16, 0LL, (__int64)v18);
  if ( v12 < 0 || (v7 = v16) == 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_5:
    *(_QWORD *)(a1 + 8) = a1;
    *(_QWORD *)a1 = a1;
    *(_QWORD *)(a1 + 48) = a5;
    *(_WORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = a6;
    *(_DWORD *)(a1 + 16) = a2;
    *(_DWORD *)(a1 + 20) = v11;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = a4;
    *(_BYTE *)(a1 + 58) = 0;
    PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x56706E50u);
    *(_QWORD *)(a1 + 72) = PoolWithTag;
    if ( PoolWithTag )
      ExInitializeResourceLite(PoolWithTag);
    else
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}
