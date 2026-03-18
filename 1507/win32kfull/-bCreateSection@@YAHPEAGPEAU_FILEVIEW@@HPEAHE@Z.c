/*
 * XREFs of ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00AE1DC
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C00B1728 (EngMapFontFileFDInternal.c)
 *     bMapFile @ 0x1C013CA40 (bMapFile.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x1C00ACF2C (ZwWin32CreateSection.c)
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00ACF74 (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ?hGetHandleFromFilePath@@YAPEAXPEBGH@Z @ 0x1C00AE4F4 (-hGetHandleFromFilePath@@YAPEAXPEBGH@Z.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C014C3C0 (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ScrutinizeFileFontLoad @ 0x1C025E158 (ScrutinizeFileFontLoad.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027E2E8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 */

__int64 __fastcall bCreateSection(PCWSTR SourceString, struct _FILEVIEW *a2, int a3, int *a4, unsigned __int8 a5)
{
  const WCHAR *v7; // r15
  int v9; // edi
  __int128 v10; // xmm1
  __int128 v11; // xmm1
  int v12; // edi
  __int128 v13; // xmm0
  void *HandleFromFilePath; // rax
  void *v15; // rbx
  __int64 result; // rax
  NTSTATUS v17; // eax
  void *v18; // rcx
  int v19; // edx
  int v20; // edi
  wchar_t *v21; // rax
  const wchar_t *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  NTSTATUS v26; // r13d
  DWORD LowPart; // eax
  DWORD v28; // ecx
  LONG HighPart; // eax
  int Section; // eax
  __int64 v31; // rdx
  unsigned int v32; // r8d
  char v33; // r9
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  int v38; // [rsp+28h] [rbp-D8h]
  void *v39; // [rsp+38h] [rbp-C8h]
  bool v40; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v41[2]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v42[5]; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR v43; // [rsp+B0h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v45; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  char FileInformation[8]; // [rsp+108h] [rbp+8h] BYREF
  union _LARGE_INTEGER v48; // [rsp+110h] [rbp+10h] BYREF
  char v49[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v50; // [rsp+130h] [rbp+30h]

  v43 = SourceString;
  v7 = SourceString;
  memset(v42, 0, sizeof(v42));
  v9 = DWORD2(v42[2]);
  v10 = v42[1];
  *(_OWORD *)a2 = v42[0];
  *((_OWORD *)a2 + 1) = v10;
  v11 = v42[3];
  v12 = ((unsigned __int8)v9 ^ (unsigned __int8)(8 * a5)) & 8 ^ v9;
  DWORD2(v42[2]) = v12;
  *((_OWORD *)a2 + 2) = v42[2];
  v13 = v42[4];
  *((_OWORD *)a2 + 3) = v11;
  *((_OWORD *)a2 + 4) = v13;
  RtlInitUnicodeString(&DestinationString, v7);
  HandleFromFilePath = hGetHandleFromFilePath(v7, a3 != 0);
  *(_QWORD *)&v42[3] = HandleFromFilePath;
  v15 = HandleFromFilePath;
  if ( !HandleFromFilePath )
    return 0LL;
  v17 = ZwQueryInformationFile(HandleFromFilePath, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  v18 = v15;
  if ( v17 < 0 )
  {
LABEL_4:
    ZwClose(v18);
    return 0LL;
  }
  if ( ZwQueryInformationFile(v15, &IoStatusBlock, v49, 0x28u, FileBasicInformation) < 0 )
    goto LABEL_6;
  v20 = v12 | 1;
  *(_QWORD *)&v42[0] = v50;
  DWORD2(v42[2]) = v20;
  if ( a4 )
  {
    v21 = (wchar_t *)AllocFreeTmpBuffer(536LL);
    v22 = v21;
    v18 = v15;
    if ( !v21 )
      goto LABEL_4;
    *a4 = 0;
    v26 = ZwQueryVolumeInformationFile(v15, &IoStatusBlock, v21, 0x218u, FileFsAttributeInformation);
    if ( v26 >= 0 && !_wcsnicmp(v22 + 6, L"FAT", 3uLL) )
      *a4 = 1;
    FreeTmpBuffer(v22, v23, v24, v25);
    if ( v26 < 0 )
      goto LABEL_6;
    v7 = v43;
  }
  if ( a3 )
  {
    LowPart = v48.LowPart;
    if ( a3 > 0 )
      LowPart = a3;
    v41[1] = 0;
    v41[0] = LowPart;
    if ( ZwSetInformationFile(v15, &IoStatusBlock, v41, 8u, FileEndOfFileInformation) < 0 )
      goto LABEL_6;
    v28 = v41[0];
    HighPart = 0;
    v48.QuadPart = v41[0];
  }
  else
  {
    HighPart = v48.HighPart;
    v28 = v48.LowPart;
  }
  if ( HighPart )
    goto LABEL_6;
  DWORD2(v42[1]) = v28;
  if ( (v20 & 8) == 0 )
  {
    if ( (int)TryGetFileDeviceRemoteBit(v15, &v40) < 0 )
      goto LABEL_6;
    v20 ^= ((unsigned __int8)v20 ^ (unsigned __int8)(2 * v40)) & 2;
    DWORD2(v42[2]) = v20;
  }
  v45.Length = 48;
  v45.RootDirectory = 0LL;
  v45.Attributes = 512;
  v45.ObjectName = 0LL;
  *(_OWORD *)&v45.SecurityDescriptor = 0LL;
  if ( (v20 & 2) != 0 )
    Section = ObtainSectionForNetworkedFontFile(&DestinationString, (struct _FILEVIEW *)v42, &v45, &v48, a3 != 0);
  else
    Section = ZwWin32CreateSection((int)&v42[2], v19, (int)&v45, (int)&v48, a3 != 0 ? 4 : 2, v38, v15, v39);
  if ( Section < 0 )
  {
    v18 = *(void **)&v42[3];
    goto LABEL_4;
  }
  v15 = *(void **)&v42[3];
  if ( !(unsigned int)bIsFileInSystemFontsDir(*(void **)&v42[3], v31, v32, v33) )
  {
    if ( (int)ScrutinizeFileFontLoad(v7) >= 0 )
      goto LABEL_32;
LABEL_6:
    v18 = v15;
    goto LABEL_4;
  }
  DWORD2(v42[2]) |= 0x10u;
  ZwClose(v15);
  *(_QWORD *)&v42[3] = 0LL;
LABEL_32:
  result = 1LL;
  v34 = v42[1];
  *(_OWORD *)a2 = v42[0];
  v35 = v42[2];
  *((_OWORD *)a2 + 1) = v34;
  v36 = v42[3];
  *((_OWORD *)a2 + 2) = v35;
  v37 = v42[4];
  *((_OWORD *)a2 + 3) = v36;
  *((_OWORD *)a2 + 4) = v37;
  return result;
}
