/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18007F190
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800BCBC0 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     RtlImageRvaToVa @ 0x180071AC0 (RtlImageRvaToVa.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationFile @ 0x180093A10 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x1800948E0 (NtMakeTemporaryObject.c)
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800DBA48 (LdrVerifyMappedImageMatchesChecksum.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksumEx(__int64 a1, __int64 a2)
{
  HANDLE *v4; // r14
  int v5; // eax
  char v6; // r13
  __int64 result; // rax
  int InformationFile; // esi
  __int64 v9; // r13
  unsigned int v10; // r8d
  __int64 v11; // rax
  void (__fastcall *v12)(_QWORD, __int64); // rbx
  _BYTE *v13; // rax
  char v14; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v15; // [rsp+60h] [rbp-98h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-90h] BYREF
  int v17; // [rsp+78h] [rbp-80h]
  __int64 v18; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-70h] BYREF
  __int64 v20; // [rsp+90h] [rbp-68h] BYREF
  __int64 v21; // [rsp+98h] [rbp-60h]
  _QWORD v22[2]; // [rsp+A0h] [rbp-58h] BYREF
  char v23[8]; // [rsp+B0h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+B8h] [rbp-40h]

  v18 = a2;
  if ( *(_DWORD *)a2 != 64 || (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  v4 = (HANDLE *)(a2 + 24);
  if ( (*(_BYTE *)(a2 + 4) & 2) == 0 )
    v4 = (HANDLE *)&unk_180102BD8;
  Handle[1] = v4;
  v5 = *((_DWORD *)v4 + 7);
  v6 = HIBYTE(v5) & 1;
  v17 = HIBYTE(v5) & 1;
  v14 = a1 & 1;
  result = NtCreateSection(Handle, *((unsigned int *)v4 + 2), v4[2], 0LL, *((_DWORD *)v4 + 6), v5, a1);
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    v19 = 0LL;
    InformationFile = ZwMapViewOfSection(Handle[0], -1LL, &v15, 0LL, 0LL, 0LL, &v19, 1, 0, 16);
    if ( InformationFile >= 0 )
    {
      if ( v14 )
        goto LABEL_39;
      InformationFile = NtQueryInformationFile(a1, v22, v23, 24LL, 5);
      if ( InformationFile >= 0 )
      {
        if ( !(unsigned __int8)LdrVerifyMappedImageMatchesChecksum(v15, v19, v24) )
          InformationFile = -1073741279;
        if ( InformationFile >= 0 )
        {
LABEL_39:
          if ( (*(_BYTE *)(a2 + 4) & 5) != 0 )
          {
            InformationFile = RtlImageNtHeaderEx(0, v15, v19, &v18);
            if ( InformationFile >= 0 )
            {
              if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
                *(_WORD *)(a2 + 56) = *(_WORD *)(v18 + 22);
              if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
              {
                if ( *(_QWORD *)(a2 + 8) )
                {
                  v9 = RtlImageDirectoryEntryToData(v15, v6, 1u, &v20);
                  v21 = v9;
                  if ( v9 )
                  {
                    v22[0] = 0LL;
                    while ( 1 )
                    {
                      v10 = *(_DWORD *)(v9 + 12);
                      if ( !v10 )
                        break;
                      if ( (_BYTE)v17 )
                        v11 = v15 + v10;
                      else
                        v11 = RtlImageRvaToVa(v18, v15, v10, v22);
                      v20 = v11;
                      v12 = *(void (__fastcall **)(_QWORD, __int64))(a2 + 8);
                      _guard_check_icall_fptr();
                      v12(*(_QWORD *)(a2 + 16), v20);
                      v9 += 20LL;
                      v21 = v9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      NtUnmapViewOfSection(-1LL);
    }
    if ( InformationFile < 0 || v4 == (HANDLE *)&unk_180102BD8 )
    {
      v13 = v4[2];
      if ( v13 && (v13[24] & 0x10) != 0 )
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
