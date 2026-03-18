/*
 * XREFs of PiSwStopDestroy @ 0x1404967A0
 * Callers:
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwCloseDevice @ 0x1404957E8 (PiSwCloseDevice.c)
 *     PiSwFindChildren @ 0x140496750 (PiSwFindChildren.c)
 *     PnpConcatPWSTR @ 0x1404E55A0 (PnpConcatPWSTR.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2)
{
  _QWORD **Children; // rdi
  int v4; // esi
  _QWORD *v6; // rbx
  _QWORD *v7; // r14
  const wchar_t *v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  PiSwLock();
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren();
  if ( Children )
  {
    v4 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (char)L"SWD\\");
    if ( v4 >= 0 )
    {
      v6 = *Children;
      while ( v6 != Children )
      {
        v7 = v6 - 12;
        v8 = (const wchar_t *)*(v6 - 11);
        v6 = (_QWORD *)*v6;
        if ( !wcsicmp(v8, 0LL) && (*((_DWORD *)v7 + 1) & 1) == 0 )
          PiSwCloseDevice(v7);
      }
    }
  }
  else
  {
    v4 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
