/*
 * XREFs of ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00A68E4
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C00A9F68 (EngMapFontFileFDInternal.c)
 *     bMapFile @ 0x1C00D48C4 (bMapFile.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x1C00A4F4C (ZwWin32CreateSection.c)
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00A4F94 (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ?hGetHandleFromFilePath@@YAPEAXPEBGH@Z @ 0x1C00A6BFC (-hGetHandleFromFilePath@@YAPEAXPEBGH@Z.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C0102A24 (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ScrutinizeFileFontLoad @ 0x1C025DCA8 (ScrutinizeFileFontLoad.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027DCD8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
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
  NTSTATUS v23; // r13d
  DWORD LowPart; // eax
  DWORD v25; // ecx
  LONG HighPart; // eax
  int Section; // eax
  __int64 v28; // rdx
  unsigned int v29; // r8d
  char v30; // r9
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int v35; // [rsp+28h] [rbp-D8h]
  void *v36; // [rsp+38h] [rbp-C8h]
  bool v37; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v38[2]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v39[5]; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR v40; // [rsp+B0h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v42; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  char FileInformation[8]; // [rsp+108h] [rbp+8h] BYREF
  union _LARGE_INTEGER v45; // [rsp+110h] [rbp+10h] BYREF
  char v46[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v47; // [rsp+130h] [rbp+30h]

  v40 = SourceString;
  v7 = SourceString;
  memset(v39, 0, sizeof(v39));
  v9 = DWORD2(v39[2]);
  v10 = v39[1];
  *(_OWORD *)a2 = v39[0];
  *((_OWORD *)a2 + 1) = v10;
  v11 = v39[3];
  v12 = ((unsigned __int8)v9 ^ (unsigned __int8)(8 * a5)) & 8 ^ v9;
  DWORD2(v39[2]) = v12;
  *((_OWORD *)a2 + 2) = v39[2];
  v13 = v39[4];
  *((_OWORD *)a2 + 3) = v11;
  *((_OWORD *)a2 + 4) = v13;
  RtlInitUnicodeString(&DestinationString, v7);
  HandleFromFilePath = hGetHandleFromFilePath(v7, a3 != 0);
  *(_QWORD *)&v39[3] = HandleFromFilePath;
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
  if ( ZwQueryInformationFile(v15, &IoStatusBlock, v46, 0x28u, FileBasicInformation) < 0 )
    goto LABEL_6;
  v20 = v12 | 1;
  *(_QWORD *)&v39[0] = v47;
  DWORD2(v39[2]) = v20;
  if ( a4 )
  {
    v21 = (wchar_t *)AllocFreeTmpBuffer(536LL);
    v22 = v21;
    v18 = v15;
    if ( !v21 )
      goto LABEL_4;
    *a4 = 0;
    v23 = ZwQueryVolumeInformationFile(v15, &IoStatusBlock, v21, 0x218u, FileFsAttributeInformation);
    if ( v23 >= 0 && !_wcsnicmp(v22 + 6, L"FAT", 3uLL) )
      *a4 = 1;
    FreeTmpBuffer(v22);
    if ( v23 < 0 )
      goto LABEL_6;
    v7 = v40;
  }
  if ( a3 )
  {
    LowPart = v45.LowPart;
    if ( a3 > 0 )
      LowPart = a3;
    v38[1] = 0;
    v38[0] = LowPart;
    if ( ZwSetInformationFile(v15, &IoStatusBlock, v38, 8u, FileEndOfFileInformation) < 0 )
      goto LABEL_6;
    v25 = v38[0];
    HighPart = 0;
    v45.QuadPart = v38[0];
  }
  else
  {
    HighPart = v45.HighPart;
    v25 = v45.LowPart;
  }
  if ( HighPart )
    goto LABEL_6;
  DWORD2(v39[1]) = v25;
  if ( (v20 & 8) == 0 )
  {
    if ( (int)TryGetFileDeviceRemoteBit(v15, &v37) < 0 )
      goto LABEL_6;
    v20 ^= ((unsigned __int8)v20 ^ (unsigned __int8)(2 * v37)) & 2;
    DWORD2(v39[2]) = v20;
  }
  v42.Length = 48;
  v42.RootDirectory = 0LL;
  v42.Attributes = 512;
  v42.ObjectName = 0LL;
  *(_OWORD *)&v42.SecurityDescriptor = 0LL;
  if ( (v20 & 2) != 0 )
    Section = ObtainSectionForNetworkedFontFile(&DestinationString, (struct _FILEVIEW *)v39, &v42, &v45, a3 != 0);
  else
    Section = ZwWin32CreateSection((int)&v39[2], v19, (int)&v42, (int)&v45, a3 != 0 ? 4 : 2, v35, v15, v36);
  if ( Section < 0 )
  {
    v18 = *(void **)&v39[3];
    goto LABEL_4;
  }
  v15 = *(void **)&v39[3];
  if ( !(unsigned int)bIsFileInSystemFontsDir(*(void **)&v39[3], v28, v29, v30) )
  {
    if ( (int)ScrutinizeFileFontLoad(v7) >= 0 )
      goto LABEL_32;
LABEL_6:
    v18 = v15;
    goto LABEL_4;
  }
  DWORD2(v39[2]) |= 0x10u;
  ZwClose(v15);
  *(_QWORD *)&v39[3] = 0LL;
LABEL_32:
  result = 1LL;
  v31 = v39[1];
  *(_OWORD *)a2 = v39[0];
  v32 = v39[2];
  *((_OWORD *)a2 + 1) = v31;
  v33 = v39[3];
  *((_OWORD *)a2 + 2) = v32;
  v34 = v39[4];
  *((_OWORD *)a2 + 3) = v33;
  *((_OWORD *)a2 + 4) = v34;
  return result;
}
