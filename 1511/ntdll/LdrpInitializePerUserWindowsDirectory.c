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
  __int16 v3; // bx
  char v4; // al
  __int128 v5; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v6[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v7; // [rsp+48h] [rbp-B8h]
  _BYTE v8[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v9[528]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = 2 * a1(v9, 260LL);
  if ( !v1 )
    return 0LL;
  v6[0] = v1;
  v7 = v9;
  v6[1] = 520;
  if ( !*((_QWORD *)&RtlpSystemDirs + 1) )
  {
LABEL_11:
    LdrAddDllDirectory(v6, v8);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs + 2;
  *((_QWORD *)&v5 + 1) = RtlAllocateHeap(
                           (__int64)NtCurrentPeb()->ProcessHeap,
                           0,
                           v1 + (unsigned int)(unsigned __int16)RtlpSystemDirs + 2LL);
  if ( *((_QWORD *)&v5 + 1) )
  {
    LOWORD(v5) = 0;
    WORD1(v5) = v3;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, (__int16 *)&RtlpSystemDirs);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, v6);
    RtlAppendUnicodeToString((unsigned __int16 *)&v5, L";");
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&RtlpSystemDirs + 1));
    RtlpSystemDirs = v5;
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
