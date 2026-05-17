/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18008BE60
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800D0CA0 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToVa @ 0x1800823D0 (RtlImageRvaToVa.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationFile @ 0x1800A6640 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x1800A8470 (NtMakeTemporaryObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800EB2D8 (LdrVerifyMappedImageMatchesChecksum.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksumEx(__int64 a1, __int64 a2)
{
  HANDLE *v4; // rsi
  char v5; // r13
  __int64 result; // rax
  int InformationFile; // edi
  __int64 v8; // r15
  unsigned int v9; // r8d
  _BYTE *v10; // rax
  char v11; // [rsp+50h] [rbp-98h]
  unsigned __int64 v12; // [rsp+58h] [rbp-90h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v14; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp-70h] BYREF
  _QWORD v16[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v17; // [rsp+90h] [rbp-58h]
  char v18[8]; // [rsp+98h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp-48h]

  v14 = a2;
  if ( *(_DWORD *)a2 != 64 || (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  v4 = (HANDLE *)(a2 + 24);
  if ( (*(_BYTE *)(a2 + 4) & 2) == 0 )
    v4 = (HANDLE *)&unk_18010DF70;
  Handle[1] = v4;
  v5 = HIBYTE(*((_DWORD *)v4 + 7)) & 1;
  v11 = a1 & 1;
  result = NtCreateSection(Handle, *((unsigned int *)v4 + 2), v4[2], 0LL, *((_DWORD *)v4 + 6), *((_DWORD *)v4 + 7), a1);
  if ( (int)result >= 0 )
  {
    v12 = 0LL;
    v15 = 0LL;
    InformationFile = ZwMapViewOfSection(Handle[0], -1LL, &v12, 0LL, 0LL, 0LL, &v15, 1, 0, 16);
    if ( InformationFile >= 0 )
    {
      if ( v11 )
        goto LABEL_38;
      InformationFile = NtQueryInformationFile(a1, v16, v18, 24LL, 5);
      if ( InformationFile >= 0 )
      {
        if ( !(unsigned __int8)LdrVerifyMappedImageMatchesChecksum(v12, v15, v19) )
          InformationFile = -1073741279;
        if ( InformationFile >= 0 )
        {
LABEL_38:
          if ( (*(_BYTE *)(a2 + 4) & 5) != 0 )
          {
            InformationFile = RtlImageNtHeaderEx(0, v12, v15, &v14);
            if ( InformationFile >= 0 )
            {
              if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
                *(_WORD *)(a2 + 56) = *(_WORD *)(v14 + 22);
              if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
              {
                if ( *(_QWORD *)(a2 + 8) )
                {
                  v8 = RtlImageDirectoryEntryToData(v12, v5, 1u, v16);
                  v17 = v8;
                  if ( v8 )
                  {
                    v16[0] = 0LL;
                    while ( 1 )
                    {
                      v9 = *(_DWORD *)(v8 + 12);
                      if ( !v9 )
                        break;
                      if ( !v5 )
                        RtlImageRvaToVa(v14, v12, v9, v16);
                      _guard_dispatch_icall_fptr();
                      v8 += 20LL;
                      v17 = v8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      NtUnmapViewOfSection(-1LL, v12);
    }
    if ( InformationFile < 0 || v4 == (HANDLE *)&unk_18010DF70 )
    {
      v10 = v4[2];
      if ( v10 && (v10[24] & 0x10) != 0 )
        NtMakeTemporaryObject(Handle[0]);
      NtClose(Handle[0]);
    }
    else
    {
      *v4 = Handle[0];
    }
    return (unsigned int)InformationFile;
  }
  return result;
}
