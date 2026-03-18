/*
 * XREFs of PiSwStopDestroy @ 0x1404C6264
 * Callers:
 *     IopRemoveDevice @ 0x1404C6038 (IopRemoveDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x1403F1A74 (PiSwLock.c)
 *     PiSwFindChildren @ 0x1403F1A94 (PiSwFindChildren.c)
 *     PnpConcatPWSTR @ 0x140487108 (PnpConcatPWSTR.c)
 *     PiSwCloseDevice @ 0x1404C3900 (PiSwCloseDevice.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2)
{
  _QWORD **Children; // rdi
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v9; // rbx
  __int64 v10; // r14
  const wchar_t *v11; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  wchar_t *Str2; // [rsp+60h] [rbp+18h] BYREF

  Str2 = 0LL;
  PiSwLock();
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren();
  if ( Children )
  {
    v4 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2uLL);
    if ( v4 >= 0 )
    {
      v9 = *Children;
      while ( v9 != Children )
      {
        v10 = (__int64)(v9 - 12);
        v11 = (const wchar_t *)*(v9 - 11);
        v9 = (_QWORD *)*v9;
        if ( !wcsicmp(v11, Str2) && (*(_DWORD *)(v10 + 4) & 1) == 0 )
          PiSwCloseDevice(v10);
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v4 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  return (unsigned int)v4;
}
