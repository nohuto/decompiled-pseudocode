/*
 * XREFs of IopWriteCapsuleTriageDumpToFirmware @ 0x1401F5200
 * Callers:
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoFillDumpHeader @ 0x1401F2BD0 (IoFillDumpHeader.c)
 *     IoFillTriageDumpBuffer @ 0x1401F2E8C (IoFillTriageDumpBuffer.c)
 *     IopUpdateMinidumpContext @ 0x1401F4F1C (IopUpdateMinidumpContext.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401F5530 (IopWriteTriageDumpToFirmware.c)
 *     MmSnapTriageDumpInformation @ 0x140218C8C (MmSnapTriageDumpInformation.c)
 *     VfDisableHalVerifier @ 0x14025A5C8 (VfDisableHalVerifier.c)
 */

bool __fastcall IopWriteCapsuleTriageDumpToFirmware(
        int a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  char *v7; // rsi
  char v8; // r14
  __int64 v13; // r9
  int v14; // r10d
  int v15; // ebx
  __int64 v16; // rax
  int v17; // [rsp+38h] [rbp-91h]
  int v18; // [rsp+70h] [rbp-59h] BYREF
  __int64 v19; // [rsp+78h] [rbp-51h] BYREF
  __int128 *v20; // [rsp+80h] [rbp-49h]
  int v21; // [rsp+88h] [rbp-41h]
  __int64 v22; // [rsp+90h] [rbp-39h]
  _QWORD *v23; // [rsp+98h] [rbp-31h]
  _QWORD v24[4]; // [rsp+A0h] [rbp-29h] BYREF

  v7 = (char *)CapsuleTriageDumpBlock;
  v8 = 0;
  v21 = a1;
  v23 = a6;
  v22 = a7;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  if ( !CapsuleTriageDumpBlock )
    return 0;
  VfDisableHalVerifier();
  v24[3] = a5;
  v24[0] = a2;
  v24[1] = a3;
  v24[2] = v13;
  IopUpdateMinidumpContext(v14, a2, a3, v13, a5, a6);
  MmSnapTriageDumpInformation(a6, v24);
  IoFillDumpHeader((_DWORD *)v7 + 1031, 4, v21, a2, (__int64)a3, a4, a5, v22);
  v19 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
  v20 = &IopTriageDumpDataBlocks;
  v15 = IoFillTriageDumpBuffer(
          0x3E000u,
          (__int64 *)(v7 + 12316),
          1,
          3583,
          0LL,
          (__int64)v23,
          v22,
          v17,
          65,
          1u,
          (__int64)&v19,
          (__int64)&v19,
          &v18);
  memset(v7 + 4220, 0, 0x20uLL);
  *((_DWORD *)v7 + 2070) = 0;
  v16 = *((unsigned int *)v7 + 3080);
  *((_DWORD *)v7 + 2075) |= 0x88u;
  *(_QWORD *)(v7 + 8124) = v16;
  *((_DWORD *)v7 + 2069) = 3583;
  if ( v15 >= 0 )
    return (int)IopWriteTriageDumpToFirmware(CapsuleTriageDumpBlock) >= 0;
  return v8;
}
