/*
 * XREFs of sub_140008F84 @ 0x140008F84
 * Callers:
 *     sub_1400091A4 @ 0x1400091A4 (sub_1400091A4.c)
 * Callees:
 *     sub_140008034 @ 0x140008034 (sub_140008034.c)
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     sub_140008E1C @ 0x140008E1C (sub_140008E1C.c)
 *     sub_140009134 @ 0x140009134 (sub_140009134.c)
 *     sub_14000FAC4 @ 0x14000FAC4 (sub_14000FAC4.c)
 */

__int64 __fastcall sub_140008F84(__int64 a1, __int64 a2, int a3)
{
  bool v3; // r12
  UNICODE_STRING *v7; // r15
  NTSTATUS v8; // ecx
  int v9; // eax
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  bool v13; // zf
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  int v16; // ecx
  __int64 result; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v29; // [rsp+B0h] [rbp+40h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+58h] BYREF

  v31 = 0LL;
  v3 = 0;
  if ( (*(_BYTE *)(a1 + 92) & 4) != 0 )
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 8LL) = *(_WORD *)(a2 + 24);
  ObjectAttributes.RootDirectory = 0LL;
  v7 = (UNICODE_STRING *)(a1 + 16);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(a1 + 16);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u);
  if ( v8 < 0 )
  {
    v10 = v31;
    v18 = 2LL * (_InterlockedIncrement(&dword_140020420) % 32);
    *((_DWORD *)&unk_140020220 + 2 * v18) = 1949;
    *((_DWORD *)&unk_140020220 + 2 * v18 + 1) = v8;
    *((_QWORD *)&unk_140020220 + v18 + 1) = v7;
  }
  else
  {
    v9 = sub_140009134(FileHandle, v7, &v31);
    v10 = v31;
    if ( v9 >= 0 )
      v3 = v31 != 0;
    sub_1400080D4(FileHandle, (__int64)v7);
    NtClose(FileHandle);
  }
  v11 = *(_QWORD *)(a2 + 32) + v10;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v11 > *(_QWORD *)(a2 + 40) )
    v11 = *(_QWORD *)(a2 + 40);
  v13 = (*(_BYTE *)(a1 + 92) & 2) == 0;
  v14 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 72) = v12;
  *(_QWORD *)(a1 + 80) = v14;
  if ( !v13 )
  {
    v19 = qword_140020480;
    v20 = *(_QWORD *)(a2 + 40) >> 3;
    if ( qword_140020480 < v11 >> 2 )
      v19 = v11 >> 2;
    if ( v19 > v11 >> 1 )
      v19 = v11 >> 1;
    if ( v19 > v20 )
      v19 = *(_QWORD *)(a2 + 40) >> 3;
    if ( v12 <= v19 )
      goto LABEL_46;
    if ( !a3 )
      return 3221225599LL;
    if ( (*(_BYTE *)(a1 + 92) & 8) != 0 )
    {
      if ( v12 < v11 )
      {
        v21 = v12;
        goto LABEL_40;
      }
      v21 = v11;
      if ( v12 <= v11 || v12 == *(_QWORD *)(a1 + 48) )
      {
LABEL_40:
        v19 = v21;
        if ( v20 < v21 )
          v20 = v21;
      }
    }
    if ( v12 > v19 )
    {
      v22 = v12;
      if ( v12 > *(_QWORD *)(a1 + 48) )
        v22 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 72) = v22;
    }
LABEL_46:
    v23 = *(_QWORD *)(a1 + 72);
    if ( v23 > v19 )
      v23 = v19;
    *(_QWORD *)(a1 + 72) = v23;
    if ( v14 > v20 )
      *(_QWORD *)(a1 + 80) = v20;
    goto LABEL_14;
  }
  if ( v12 > v11 )
  {
    if ( a3 )
    {
      *(_QWORD *)(a1 + 72) = v11;
      goto LABEL_11;
    }
    return 3221225599LL;
  }
LABEL_11:
  v15 = v14;
  if ( v14 > *(_QWORD *)(a2 + 40) )
    v15 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 80) = v15;
LABEL_14:
  *(_DWORD *)(a1 + 88) = 0;
  v16 = *(_DWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
    v16 = 0x40000000;
  *(_DWORD *)(a1 + 88) = v16;
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0 && sub_140008034(*(_DWORD *)(a2 + 20), &v29, 0LL) >= 0 && (v29 & 0xFFFFFFF0) == 0 )
    *(_DWORD *)(a1 + 88) |= (v29 | 0x10) << 26;
  while ( 1 )
  {
    result = sub_140008E1C(
               v7,
               *(union _LARGE_INTEGER *)(a1 + 72),
               *(union _LARGE_INTEGER *)(a1 + 80),
               *(_DWORD *)(a1 + 88));
    if ( (int)result >= 0 )
      break;
    if ( !a3 )
      goto LABEL_24;
    v24 = *(_QWORD *)(a1 + 72);
    if ( v24 <= 0x1000000 )
      goto LABEL_24;
    v25 = v24 >> 4;
    v26 = 0x1000000LL;
    if ( v25 > 0x1000000 )
      v26 = v25;
    *(_QWORD *)(a1 + 72) -= v26;
    if ( *(_QWORD *)(a1 + 72) < 0x1000000uLL )
      *(_QWORD *)(a1 + 72) = 0x1000000LL;
  }
  *(_DWORD *)(a1 + 92) |= 1u;
  *(_DWORD *)(a2 + 16) |= 0x10u;
  if ( (*(_DWORD *)(a1 + 88) & 0x40000000) != 0 )
    *(_DWORD *)(a2 + 16) |= 0x20u;
  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    ++dword_140020468;
  ++dword_140020464;
LABEL_24:
  if ( (*(_BYTE *)(a1 + 92) & 1) == 0 )
  {
    if ( v3 && (int)sub_14000FAC4(v7) >= 0 )
      *(_QWORD *)(a2 + 32) = v11;
    return 3221225599LL;
  }
  return result;
}
