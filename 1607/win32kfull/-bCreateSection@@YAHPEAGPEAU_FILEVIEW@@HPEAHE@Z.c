/*
 * XREFs of ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BCBCC
 * Callers:
 *     bMapFile @ 0x1C00BCB3C (bMapFile.c)
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 * Callees:
 *     ?hGetHandleFromFilePath@@YAPEAXPEBGH@Z @ 0x1C00BCEC8 (-hGetHandleFromFilePath@@YAPEAXPEBGH@Z.c)
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00BCFC0 (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     ZwWin32CreateSection @ 0x1C00BD0D8 (ZwWin32CreateSection.c)
 *     ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C00BD1C0 (-TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C010E200 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027BF18 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
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
  NTSTATUS v16; // eax
  void *v17; // rcx
  int v18; // edx
  int v19; // edi
  wchar_t *v20; // rax
  const wchar_t *v21; // r15
  NTSTATUS v22; // r13d
  LONG HighPart; // eax
  DWORD v24; // ecx
  int Section; // eax
  __int64 result; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  DWORD LowPart; // eax
  int v32; // [rsp+28h] [rbp-D8h]
  void *v33; // [rsp+38h] [rbp-C8h]
  bool v34; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v35[2]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v36[5]; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR v37; // [rsp+B0h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v39; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  char FileInformation[8]; // [rsp+108h] [rbp+8h] BYREF
  union _LARGE_INTEGER v42; // [rsp+110h] [rbp+10h] BYREF
  char v43[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v44; // [rsp+130h] [rbp+30h]

  v37 = SourceString;
  v7 = SourceString;
  memset(v36, 0, sizeof(v36));
  v9 = DWORD2(v36[2]);
  v10 = v36[1];
  *(_OWORD *)a2 = v36[0];
  *((_OWORD *)a2 + 1) = v10;
  v11 = v36[3];
  v12 = ((unsigned __int8)v9 ^ (unsigned __int8)(8 * a5)) & 8 ^ v9;
  DWORD2(v36[2]) = v12;
  *((_OWORD *)a2 + 2) = v36[2];
  v13 = v36[4];
  *((_OWORD *)a2 + 3) = v11;
  *((_OWORD *)a2 + 4) = v13;
  RtlInitUnicodeString(&DestinationString, v7);
  HandleFromFilePath = hGetHandleFromFilePath(v7, a3 != 0);
  *(_QWORD *)&v36[3] = HandleFromFilePath;
  v15 = HandleFromFilePath;
  if ( !HandleFromFilePath )
    return 0LL;
  v16 = ZwQueryInformationFile(HandleFromFilePath, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  v17 = v15;
  if ( v16 >= 0 )
  {
    if ( ZwQueryInformationFile(v15, &IoStatusBlock, v43, 0x28u, FileBasicInformation) < 0 )
      goto LABEL_25;
    v19 = v12 | 1;
    *(_QWORD *)&v36[0] = v44;
    DWORD2(v36[2]) = v19;
    if ( !a4 )
    {
LABEL_11:
      if ( a3 )
      {
        LowPart = v42.LowPart;
        if ( a3 > 0 )
          LowPart = a3;
        v35[1] = 0;
        v35[0] = LowPart;
        if ( ZwSetInformationFile(v15, &IoStatusBlock, v35, 8u, FileEndOfFileInformation) < 0 )
          goto LABEL_25;
        v24 = v35[0];
        HighPart = 0;
        v42.QuadPart = v35[0];
      }
      else
      {
        HighPart = v42.HighPart;
        v24 = v42.LowPart;
      }
      if ( !HighPart )
      {
        DWORD2(v36[1]) = v24;
        if ( (v19 & 8) != 0 )
        {
LABEL_17:
          v39.Length = 48;
          v39.RootDirectory = 0LL;
          v39.Attributes = 512;
          v39.ObjectName = 0LL;
          *(_OWORD *)&v39.SecurityDescriptor = 0LL;
          if ( (v19 & 2) != 0 )
            Section = ObtainSectionForNetworkedFontFile(
                        &DestinationString,
                        (struct _FILEVIEW *)v36,
                        &v39,
                        &v42,
                        a3 != 0);
          else
            Section = ZwWin32CreateSection(
                        (int)&v36[2],
                        v18,
                        (int)&v39,
                        (int)&v42,
                        a3 != 0 ? 4 : 2,
                        v32,
                        (__int64)v15,
                        v33);
          if ( Section < 0 )
          {
            v17 = *(void **)&v36[3];
            goto LABEL_31;
          }
          v15 = *(void **)&v36[3];
          if ( (unsigned int)bIsFileInSystemFontsDir(*(void **)&v36[3]) )
          {
            DWORD2(v36[2]) |= 0x10u;
            ZwClose(v15);
            *(_QWORD *)&v36[3] = 0LL;
LABEL_22:
            result = 1LL;
            v27 = v36[1];
            *(_OWORD *)a2 = v36[0];
            v28 = v36[2];
            *((_OWORD *)a2 + 1) = v27;
            v29 = v36[3];
            *((_OWORD *)a2 + 2) = v28;
            v30 = v36[4];
            *((_OWORD *)a2 + 3) = v29;
            *((_OWORD *)a2 + 4) = v30;
            return result;
          }
          if ( (int)ScrutinizeFontLoad(0LL, v7) >= 0 )
            goto LABEL_22;
          goto LABEL_25;
        }
        if ( (int)TryGetFileDeviceRemoteBit(v15, &v34) >= 0 )
        {
          v19 ^= ((unsigned __int8)v19 ^ (unsigned __int8)(2 * v34)) & 2;
          DWORD2(v36[2]) = v19;
          goto LABEL_17;
        }
      }
LABEL_25:
      v17 = v15;
      goto LABEL_31;
    }
    v20 = (wchar_t *)AllocFreeTmpBuffer(536LL);
    v21 = v20;
    v17 = v15;
    if ( v20 )
    {
      *a4 = 0;
      v22 = ZwQueryVolumeInformationFile(v15, &IoStatusBlock, v20, 0x218u, FileFsAttributeInformation);
      if ( v22 >= 0 && !_wcsnicmp(v21 + 6, L"FAT", 3uLL) )
        *a4 = 1;
      FreeTmpBuffer(v21);
      if ( v22 < 0 )
        goto LABEL_25;
      v7 = v37;
      goto LABEL_11;
    }
  }
LABEL_31:
  ZwClose(v17);
  return 0LL;
}
