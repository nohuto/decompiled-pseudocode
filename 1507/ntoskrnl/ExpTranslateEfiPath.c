/*
 * XREFs of ExpTranslateEfiPath @ 0x1406F3630
 * Callers:
 *     NtTranslateFilePath @ 0x1406F73B0 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     wcsncat_s @ 0x140177E08 (wcsncat_s.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     ExpCreateOutputARC @ 0x1406F0F04 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1406F11CC (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406F1298 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1406F1718 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1406F18F8 (ExpGetDriveGeometry.c)
 *     ExpParseEfiPath @ 0x1406F1E14 (ExpParseEfiPath.c)
 *     ExpTranslateSymbolicLink @ 0x1406F3F64 (ExpTranslateSymbolicLink.c)
 */

__int64 __fastcall ExpTranslateEfiPath(__int64 a1, int a2, _DWORD *a3, unsigned int *a4)
{
  _DWORD *v4; // r15
  __int64 result; // rax
  char *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r14d
  GUID *v10; // r13
  NTSTATUS DiskSignature; // ebx
  __int64 v12; // rcx
  wchar_t *v13; // rbx
  int v14; // ebx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  wchar_t *v19; // rbx
  int v20; // r15d
  PVOID v21; // rbx
  int OutputNT; // eax
  int DriveGeometry; // esi
  __int64 v24; // [rsp+20h] [rbp-79h]
  char v25; // [rsp+40h] [rbp-59h] BYREF
  char v26; // [rsp+41h] [rbp-58h]
  rsize_t SizeInWords; // [rsp+48h] [rbp-51h] BYREF
  PVOID P; // [rsp+50h] [rbp-49h] BYREF
  PVOID PoolWithTag; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-31h] BYREF
  unsigned int *v32; // [rsp+78h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-19h] BYREF
  _DWORD *v34; // [rsp+90h] [rbp-9h]
  _DWORD v35[5]; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v36; // [rsp+ACh] [rbp+13h]

  v32 = a4;
  v4 = a3;
  v34 = a3;
  PoolWithTag = 0LL;
  result = ExpParseEfiPath((char *)(a1 + 12), &PoolWithTag, &P, &v25);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v7 = (char *)PoolWithTag;
    v8 = 1;
    v9 = 0;
    v30 = 0;
    v26 = 0;
    if ( v25 == 1 && a2 != 2 )
    {
      v10 = (GUID *)((char *)PoolWithTag + 24);
      DiskSignature = RtlStringFromGUIDEx((PGUID)((char *)PoolWithTag + 24), &GuidString, 1u);
      if ( DiskSignature < 0 )
        goto LABEL_14;
      v12 = -1LL;
      do
        ++v12;
      while ( aVolume_0[v12] );
      SizeInWords = (unsigned int)GuidString.Length + 2 * ((_DWORD)v12 + 1);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, SizeInWords, 0x72766E45u);
      v13 = (wchar_t *)PoolWithTag;
      if ( !PoolWithTag )
      {
        ExFreePoolWithTag(GuidString.Buffer, 0);
LABEL_9:
        if ( P )
          ExFreePoolWithTag(P, 0);
        DiskSignature = -1073741670;
LABEL_45:
        ExFreePoolWithTag(v7, 0);
        return (unsigned int)DiskSignature;
      }
      SizeInWords >>= 1;
      wcscpy_s((wchar_t *)PoolWithTag, SizeInWords, L"\\??\\Volume");
      wcsncat_s(v13, SizeInWords, GuidString.Buffer, GuidString.Length);
      ExFreePoolWithTag(GuidString.Buffer, 0);
      v14 = ExpTranslateSymbolicLink(v13);
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v14 >= 0 )
      {
LABEL_30:
        v21 = P;
        if ( a2 == 3 )
        {
          OutputNT = ExpCreateOutputNT((__int64)v4, v32, (const wchar_t **)&DestinationString, (const wchar_t *)P);
        }
        else if ( a2 == 2 )
        {
          if ( v26 == 1 )
          {
            DriveGeometry = ExpGetDriveGeometry(v9, v35);
            if ( DriveGeometry < 0 )
            {
LABEL_39:
              ExFreePoolWithTag(DestinationString.Buffer, 0);
              if ( v21 )
                ExFreePoolWithTag(v21, 0);
              DiskSignature = DriveGeometry;
              goto LABEL_45;
            }
            v8 = v36;
          }
          LODWORD(SizeInWords) = *((_DWORD *)v7 + 1);
          PoolWithTag = (PVOID)(v8 * *((_QWORD *)v7 + 1));
          *(_QWORD *)&GuidString.Length = v8 * *((_QWORD *)v7 + 2);
          OutputNT = ExpCreateOutputSIGNATURE(
                       (__int64)v4,
                       v32,
                       v10,
                       (unsigned int *)&SizeInWords,
                       &PoolWithTag,
                       &GuidString,
                       (wchar_t *)v21,
                       v25);
        }
        else
        {
          OutputNT = ExpCreateOutputARC(v4, v32, (__int64)&DestinationString, (const wchar_t *)P);
        }
        DriveGeometry = OutputNT;
        goto LABEL_39;
      }
    }
    v10 = (GUID *)(v7 + 24);
    LODWORD(SizeInWords) = *((_DWORD *)v7 + 1);
    DiskSignature = ExpFindDiskSignature((__int64)(v7 + 24), &SizeInWords, &v30, &PoolWithTag, &GuidString, v25);
    if ( DiskSignature < 0 )
    {
LABEL_14:
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_45;
    }
    if ( *((_DWORD *)v7 + 1) == (_DWORD)SizeInWords )
    {
      v15 = (unsigned __int64)PoolWithTag;
      v9 = v30;
      v16 = *(_QWORD *)&GuidString.Length;
      if ( *((PVOID *)v7 + 1) == PoolWithTag && *((_QWORD *)v7 + 2) == *(_QWORD *)&GuidString.Length )
        goto LABEL_24;
      v17 = ExpGetDriveGeometry(v30, v35);
      v18 = v36;
      if ( v17 < 0 )
        v18 = 1;
      v36 = v18;
      if ( *((_QWORD *)v7 + 1) == v15 / v18 && *((_QWORD *)v7 + 2) == v16 / v18 )
      {
        v26 = 1;
LABEL_24:
        v19 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5EuLL, 0x72766E45u);
        if ( !v19 )
          goto LABEL_9;
        LODWORD(v24) = SizeInWords;
        swprintf_s(v19, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v9, v24);
        v20 = ExpTranslateSymbolicLink(v19);
        ExFreePoolWithTag(v19, 0);
        if ( v20 < 0 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
          DiskSignature = v20;
          goto LABEL_45;
        }
        v4 = v34;
        goto LABEL_30;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    DiskSignature = -1073741811;
    goto LABEL_45;
  }
  return result;
}
