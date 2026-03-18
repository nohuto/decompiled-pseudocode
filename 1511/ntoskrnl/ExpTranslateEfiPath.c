/*
 * XREFs of ExpTranslateEfiPath @ 0x14066FA84
 * Callers:
 *     NtTranslateFilePath @ 0x140672ED4 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     wcscpy_s @ 0x140149D04 (wcscpy_s.c)
 *     wcsncat_s @ 0x140149D88 (wcsncat_s.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     ExpCreateOutputARC @ 0x14066D5F8 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14066D8C0 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14066D98C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x14066DE0C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14066DFEC (ExpGetDriveGeometry.c)
 *     ExpParseEfiPath @ 0x14066E45C (ExpParseEfiPath.c)
 *     ExpTranslateSymbolicLink @ 0x1406703B8 (ExpTranslateSymbolicLink.c)
 */

__int64 __fastcall ExpTranslateEfiPath(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v4; // r15
  __int64 result; // rax
  unsigned int *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r14d
  unsigned int *v10; // r13
  int DiskSignature; // ebx
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
  PVOID v28; // [rsp+50h] [rbp-49h] BYREF
  PVOID PoolWithTag; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-39h] BYREF
  __int64 v31; // [rsp+68h] [rbp-31h] BYREF
  PVOID P; // [rsp+70h] [rbp-29h]
  int v33[2]; // [rsp+78h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-19h] BYREF
  _DWORD *v35; // [rsp+90h] [rbp-9h]
  _DWORD v36[5]; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v37; // [rsp+ACh] [rbp+13h]

  *(_QWORD *)v33 = a4;
  v4 = a3;
  v35 = a3;
  PoolWithTag = 0LL;
  result = ExpParseEfiPath((char *)(a1 + 12), &PoolWithTag, &v28, &v25);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v7 = (unsigned int *)PoolWithTag;
    v8 = 1;
    v9 = 0;
    v30 = 0;
    v26 = 0;
    if ( v25 == 1 && a2 != 2 )
    {
      v10 = (unsigned int *)((char *)PoolWithTag + 24);
      DiskSignature = RtlStringFromGUIDEx((unsigned int *)PoolWithTag + 6, (__int64)&v31, 1);
      if ( DiskSignature < 0 )
        goto LABEL_14;
      v12 = -1LL;
      do
        ++v12;
      while ( aVolume_0[v12] );
      SizeInWords = (unsigned int)(unsigned __int16)v31 + 2 * ((_DWORD)v12 + 1);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, SizeInWords, 0x72766E45u);
      v13 = (wchar_t *)PoolWithTag;
      if ( !PoolWithTag )
      {
        ExFreePoolWithTag(P, 0);
LABEL_9:
        if ( v28 )
          ExFreePoolWithTag(v28, 0);
        DiskSignature = -1073741670;
LABEL_45:
        ExFreePoolWithTag(v7, 0);
        return (unsigned int)DiskSignature;
      }
      SizeInWords >>= 1;
      wcscpy_s((wchar_t *)PoolWithTag, SizeInWords, L"\\??\\Volume");
      wcsncat_s(v13, SizeInWords, (const wchar_t *)P, (unsigned __int16)v31);
      ExFreePoolWithTag(P, 0);
      v14 = ExpTranslateSymbolicLink(v13);
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v14 >= 0 )
      {
LABEL_30:
        v21 = v28;
        if ( a2 == 3 )
        {
          OutputNT = ExpCreateOutputNT(
                       (__int64)v4,
                       *(unsigned int **)v33,
                       (const wchar_t **)&DestinationString,
                       (const wchar_t *)v28);
        }
        else if ( a2 == 2 )
        {
          if ( v26 == 1 )
          {
            DriveGeometry = ExpGetDriveGeometry(v9, v36);
            if ( DriveGeometry < 0 )
            {
LABEL_39:
              ExFreePoolWithTag(DestinationString.Buffer, 0);
              if ( v21 )
                ExFreePoolWithTag(v21, 0);
              DiskSignature = DriveGeometry;
              goto LABEL_45;
            }
            v8 = v37;
          }
          LODWORD(SizeInWords) = v7[1];
          PoolWithTag = (PVOID)(v8 * *((_QWORD *)v7 + 1));
          v31 = v8 * *((_QWORD *)v7 + 2);
          OutputNT = ExpCreateOutputSIGNATURE(
                       (__int64)v4,
                       *(unsigned int **)v33,
                       v10,
                       (unsigned int *)&SizeInWords,
                       &PoolWithTag,
                       &v31,
                       (wchar_t *)v21,
                       v25);
        }
        else
        {
          OutputNT = ExpCreateOutputARC(v4, *(unsigned int **)v33, (__int64)&DestinationString, (const wchar_t *)v28);
        }
        DriveGeometry = OutputNT;
        goto LABEL_39;
      }
    }
    v10 = v7 + 6;
    LODWORD(SizeInWords) = v7[1];
    DiskSignature = ExpFindDiskSignature((__int64)(v7 + 6), &SizeInWords, &v30, &PoolWithTag, &v31, v25);
    if ( DiskSignature < 0 )
    {
LABEL_14:
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      goto LABEL_45;
    }
    if ( v7[1] == (_DWORD)SizeInWords )
    {
      v15 = (unsigned __int64)PoolWithTag;
      v9 = v30;
      v16 = v31;
      if ( *((PVOID *)v7 + 1) == PoolWithTag && *((_QWORD *)v7 + 2) == v31 )
        goto LABEL_24;
      v17 = ExpGetDriveGeometry(v30, v36);
      v18 = v37;
      if ( v17 < 0 )
        v18 = 1;
      v37 = v18;
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
          if ( v28 )
            ExFreePoolWithTag(v28, 0);
          DiskSignature = v20;
          goto LABEL_45;
        }
        v4 = v35;
        goto LABEL_30;
      }
    }
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    DiskSignature = -1073741811;
    goto LABEL_45;
  }
  return result;
}
