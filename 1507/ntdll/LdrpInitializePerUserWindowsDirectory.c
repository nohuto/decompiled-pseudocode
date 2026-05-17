/*
 * XREFs of LdrpInitializePerUserWindowsDirectory @ 0x180074FC8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001FA60 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     LdrAddDllDirectory @ 0x180059AB0 (LdrAddDllDirectory.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     RtlpSignalSystemDirsModification @ 0x1800C9754 (RtlpSignalSystemDirsModification.c)
 */

__int64 __fastcall LdrpInitializePerUserWindowsDirectory(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  __int16 v3; // bx
  char v4; // al
  __int128 v5; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v6[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v7; // [rsp+48h] [rbp-B8h]
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
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
    LdrAddDllDirectory((unsigned __int16 *)v6, &v8);
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
      3059,
      (unsigned int)"LdrpInitializePerUserWindowsDirectory",
      0,
      "Failed to reallocate the system dirs string !\n");
    v4 = LdrpDebugFlags;
  }
  if ( (v4 & 0x10) != 0 )
    __debugbreak();
  return 3221225495LL;
}
