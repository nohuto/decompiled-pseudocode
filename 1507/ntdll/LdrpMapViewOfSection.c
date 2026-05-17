/*
 * XREFs of LdrpMapViewOfSection @ 0x180040BD0
 * Callers:
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x18006E600 (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x1800774D0 (RtlReleasePrivilege.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpMapViewOfSection(__int64 a1, __int64 a2, void *a3, char a4, _QWORD *a5, _QWORD *a6)
{
  int v10; // ebp
  struct _TEB *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // r8
  void *ArbitraryUserPointer; // rbx
  int v16; // eax
  int v17; // esi
  _QWORD *v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+18h] BYREF
  int v21; // [rsp+B8h] [rbp+20h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      355,
      (unsigned int)"LdrpMapViewOfSection",
      3,
      "DLL name: %ws\n",
      a3);
  v20 = 0LL;
  v10 = 0x800000;
  if ( !a4 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v21 = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, a2, 4LL, &v21, 4, 0LL);
      if ( v21 )
      {
        if ( (int)RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1LL, 0LL, &v20) >= 0 )
          v10 = 0x20000000;
      }
    }
  }
  v11 = NtCurrentTeb();
  v12 = a6;
  v13 = a5;
  v14 = a5;
  ArbitraryUserPointer = v11->NtTib.ArbitraryUserPointer;
  v11->NtTib.ArbitraryUserPointer = a3;
  *v14 = 0LL;
  *v12 = 0LL;
  v16 = ZwMapViewOfSection(a1, -1LL, v14, 0LL, 0LL, 0LL, v12, 1, v10, 4);
  v11->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  v17 = v16;
  if ( v10 == 0x20000000 )
  {
    RtlReleasePrivilege(v20);
    if ( v17 >= 0 )
    {
      ZwQueryVirtualMemory(-1LL, *v13, 3LL, &v19, 32LL, 0LL);
      if ( v19 != (_QWORD *)*v13 )
        *v19 = *v13;
    }
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      430,
      (unsigned int)"LdrpMapViewOfSection",
      4,
      "Status: 0x%08lx\n",
      v17);
  return (unsigned int)v17;
}
