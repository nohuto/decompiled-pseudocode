/*
 * XREFs of LdrpInitializePerUserWindowsDirectory @ 0x180081A3C
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180019AF0 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     LdrAddDllDirectory @ 0x18008D820 (LdrAddDllDirectory.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     RtlpSignalSystemDirsModification @ 0x1800D2234 (RtlpSignalSystemDirsModification.c)
 */

__int64 __fastcall LdrpInitializePerUserWindowsDirectory(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  unsigned __int16 v3; // bx
  char v4; // al
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Cookie; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v8[528]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = 2 * a1(v8, 260LL);
  if ( !v1 )
    return 0LL;
  Source.Length = v1;
  Source.Buffer = (unsigned __int16 *)v8;
  Source.MaximumLength = 520;
  if ( !RtlpSystemDirs.Buffer )
  {
LABEL_11:
    LdrAddDllDirectory(&Source, &Cookie);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs.Length + 2;
  Destination.Buffer = (unsigned __int16 *)RtlAllocateHeap(
                                             NtCurrentPeb()->ProcessHeap,
                                             0,
                                             v1 + (unsigned int)RtlpSystemDirs.Length + 2LL);
  if ( Destination.Buffer )
  {
    Destination.Length = 0;
    Destination.MaximumLength = v3;
    RtlAppendUnicodeStringToString(&Destination, &RtlpSystemDirs);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, L";");
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RtlpSystemDirs.Buffer);
    RtlpSystemDirs = Destination;
    RtlpSignalSystemDirsModification();
    goto LABEL_11;
  }
  v4 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3058,
      (unsigned int)"LdrpInitializePerUserWindowsDirectory",
      0,
      (__int64)"Failed to reallocate the system dirs string !\n");
    v4 = LdrpDebugFlags;
  }
  if ( (v4 & 0x10) != 0 )
    __debugbreak();
  return 3221225495LL;
}
