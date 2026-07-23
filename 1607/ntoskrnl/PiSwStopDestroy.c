/*
 * XREFs of PiSwStopDestroy @ 0x140484A6C
 * Callers:
 *     IopRemoveDevice @ 0x140484840 (IopRemoveDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PiSwFindChildren @ 0x1403F0958 (PiSwFindChildren.c)
 *     PiSwCloseDevice @ 0x140483C1C (PiSwCloseDevice.c)
 *     PnpConcatPWSTR @ 0x140512884 (PnpConcatPWSTR.c)
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

  PiSwLock();
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren();
  if ( Children )
  {
    v4 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (char)L"SWD\\");
    if ( v4 >= 0 )
    {
      v9 = *Children;
      while ( v9 != Children )
      {
        v10 = (__int64)(v9 - 12);
        v11 = (const wchar_t *)*(v9 - 11);
        v9 = (_QWORD *)*v9;
        if ( !wcsicmp(v11, 0LL) && (*(_DWORD *)(v10 + 4) & 1) == 0 )
          PiSwCloseDevice(v10);
      }
    }
  }
  else
  {
    v4 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  return (unsigned int)v4;
}
