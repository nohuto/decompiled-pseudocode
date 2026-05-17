/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x180087A00
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800C98E0 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToVa @ 0x18007D590 (RtlImageRvaToVa.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationFile @ 0x1800A52E0 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x1800A70D0 (NtMakeTemporaryObject.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800E20C8 (LdrVerifyMappedImageMatchesChecksum.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksumEx(__int64 a1, __int64 a2)
{
  HANDLE *v4; // r14
  unsigned __int8 v5; // r13
  __int64 result; // rax
  int InformationFile; // esi
  __int64 v8; // r13
  unsigned int v9; // r8d
  __int64 v10; // rax
  void (__fastcall *v11)(_QWORD, __int64); // rbx
  _BYTE *v12; // rax
  char v13; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v14; // [rsp+60h] [rbp-98h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-90h] BYREF
  int v16; // [rsp+78h] [rbp-80h]
  __int64 v17; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp-70h] BYREF
  __int64 v19; // [rsp+90h] [rbp-68h] BYREF
  __int64 v20; // [rsp+98h] [rbp-60h]
  _QWORD v21[2]; // [rsp+A0h] [rbp-58h] BYREF
  char v22[8]; // [rsp+B0h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp-40h]

  v17 = a2;
  if ( *(_DWORD *)a2 != 64 || (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return 3221225712LL;
  v4 = (HANDLE *)(a2 + 24);
  if ( (*(_BYTE *)(a2 + 4) & 2) == 0 )
    v4 = (HANDLE *)&unk_180102CB0;
  Handle[1] = v4;
  v5 = HIBYTE(*((_DWORD *)v4 + 7)) & 1;
  v16 = v5;
  v13 = a1 & 1;
  result = NtCreateSection(Handle, *((unsigned int *)v4 + 2), v4[2]);
  if ( (int)result >= 0 )
  {
    v14 = 0LL;
    v18 = 0LL;
    InformationFile = ZwMapViewOfSection(Handle[0], -1LL, &v14, 0LL, 0LL, 0LL, &v18, 1, 0, 16);
    if ( InformationFile >= 0 )
    {
      if ( v13 )
        goto LABEL_39;
      InformationFile = NtQueryInformationFile(a1, v21, v22, 24LL, 5);
      if ( InformationFile >= 0 )
      {
        if ( !(unsigned __int8)LdrVerifyMappedImageMatchesChecksum(v14, v18, v23) )
          InformationFile = -1073741279;
        if ( InformationFile >= 0 )
        {
LABEL_39:
          if ( (*(_BYTE *)(a2 + 4) & 5) != 0 )
          {
            InformationFile = RtlImageNtHeaderEx(0, v14, v18, &v17);
            if ( InformationFile >= 0 )
            {
              if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
                *(_WORD *)(a2 + 56) = *(_WORD *)(v17 + 22);
              if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
              {
                if ( *(_QWORD *)(a2 + 8) )
                {
                  v8 = RtlImageDirectoryEntryToData(v14, v5, 1u, &v19);
                  v20 = v8;
                  if ( v8 )
                  {
                    v21[0] = 0LL;
                    while ( 1 )
                    {
                      v9 = *(_DWORD *)(v8 + 12);
                      if ( !v9 )
                        break;
                      if ( (_BYTE)v16 )
                        v10 = v14 + v9;
                      else
                        v10 = RtlImageRvaToVa(v17, v14, v9, v21);
                      v19 = v10;
                      v11 = *(void (__fastcall **)(_QWORD, __int64))(a2 + 8);
                      _guard_check_icall_fptr();
                      v11(*(_QWORD *)(a2 + 16), v19);
                      v8 += 20LL;
                      v20 = v8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      NtUnmapViewOfSection(-1LL, v14);
    }
    if ( InformationFile < 0 || v4 == (HANDLE *)&unk_180102CB0 )
    {
      v12 = v4[2];
      if ( v12 && (v12[24] & 0x10) != 0 )
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
