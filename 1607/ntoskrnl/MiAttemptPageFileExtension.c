/*
 * XREFs of MiAttemptPageFileExtension @ 0x14065ADBC
 * Callers:
 *     MiExtendPagingFiles @ 0x14065B078 (MiExtendPagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiFinishPageFileExtension @ 0x1401EE474 (MiFinishPageFileExtension.c)
 *     IoSetInformation @ 0x1404CA404 (IoSetInformation.c)
 *     IoQueryVolumeInformation @ 0x14052BB24 (IoQueryVolumeInformation.c)
 */

unsigned __int64 __fastcall MiAttemptPageFileExtension(__int64 a1, unsigned __int64 a2)
{
  struct _KEVENT *v4; // r14
  unsigned __int64 i; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  struct _FILE_OBJECT *v9; // rcx
  ULONG v11; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 FileInformation; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-48h] BYREF
  int v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+54h] [rbp-34h]

  v4 = *(struct _KEVENT **)(a1 + 256);
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8)
    && IoQueryVolumeInformation(*(PFILE_OBJECT *)(a1 + 56), FileFsSizeInformation, 0x18u, v13, &v11) >= 0 )
  {
    for ( i = 0x4000LL; ; i = 4096LL )
    {
      if ( a2 >= i )
      {
        v6 = a2;
        i = 4096LL;
      }
      else
      {
        v6 = i;
      }
      if ( v6 > *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 )
        v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      v7 = v13[1] * (unsigned int)(v14 * v15);
      if ( v7 <= 0x10000000 )
        break;
      v8 = (v7 - 0x10000000) >> 12;
      if ( v8 > v6 )
        v8 = v6;
      if ( (*(_BYTE *)(a1 + 204) & 0x10) != 0 && v8 < a2 )
        break;
      v9 = *(struct _FILE_OBJECT **)(a1 + 56);
      FileInformation = (*(_QWORD *)a1 + v8) << 12;
      if ( !IoSetInformation(v9, FileEndOfFileInformation, 8u, &FileInformation) )
      {
        MiFinishPageFileExtension(v4, a1, v8);
        return v8;
      }
      if ( i == 4096 )
        return 0LL;
    }
  }
  return 0LL;
}
