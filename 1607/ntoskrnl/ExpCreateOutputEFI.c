/*
 * XREFs of ExpCreateOutputEFI @ 0x1406B0538
 * Callers:
 *     ExpConvertSignatureName @ 0x1406B023C (ExpConvertSignatureName.c)
 *     ExpTranslateNtPath @ 0x1406B2F14 (ExpTranslateNtPath.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExpFindDiskSignature @ 0x1406B0C5C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1406B0E3C (ExpGetDriveGeometry.c)
 */

__int64 __fastcall ExpCreateOutputEFI(
        char *a1,
        unsigned int *a2,
        __int128 *a3,
        int *a4,
        _QWORD *a5,
        _QWORD *a6,
        _WORD *Src,
        char a8)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rbx
  int *v10; // rax
  int v14; // ebp
  __int64 v15; // rax
  unsigned int v16; // ebp
  int v17; // eax
  __int64 result; // rax
  int *v19; // rax
  unsigned __int64 v20; // rcx
  char *v21; // rdi
  __int128 v22; // xmm0
  __int64 v23; // [rsp+30h] [rbp-68h] BYREF
  int *v24; // [rsp+38h] [rbp-60h]
  _QWORD v25[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v26; // [rsp+50h] [rbp-48h]

  v8 = 0;
  v9 = 0LL;
  v10 = a4;
  v24 = a4;
  v14 = 54;
  if ( Src )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( Src[v15] );
    v9 = (unsigned int)(2 * v15 + 2);
    v10 = a4;
    v14 = v9 + 58;
  }
  v16 = v14 + 4;
  if ( *a2 < v16 )
  {
    v8 = -1073741789;
LABEL_15:
    *a2 = v16;
    return v8;
  }
  v17 = *v10;
  v25[0] = 0LL;
  v25[1] = 0LL;
  v26 = 0LL;
  LODWORD(v23) = v17;
  result = ExpFindDiskSignature((_DWORD)a3, (unsigned int)&v23, (unsigned int)&v23 + 4, 0, 0LL, a8, v23);
  if ( (int)result >= 0 )
  {
    result = ExpGetDriveGeometry(HIDWORD(v23), v25);
    if ( (int)result >= 0 )
    {
      memset(a1, 0, v16);
      v19 = v24;
      v20 = HIDWORD(v26);
      *(_DWORD *)a1 = 1;
      *((_DWORD *)a1 + 1) = v16;
      *((_DWORD *)a1 + 2) = 4;
      v21 = a1 + 12;
      *(_DWORD *)v21 = 2752772;
      *((_DWORD *)v21 + 1) = *v19;
      *((_QWORD *)v21 + 1) = *a5 / v20;
      *((_QWORD *)v21 + 2) = *a6 / v20;
      if ( a8 == 1 )
      {
        v22 = *a3;
        *((_WORD *)v21 + 20) = 514;
        *(_OWORD *)(v21 + 24) = v22;
      }
      else
      {
        *((_DWORD *)v21 + 6) = *(_DWORD *)a3;
        *((_WORD *)v21 + 20) = 257;
      }
      if ( Src )
      {
        v21 += (unsigned __int8)v21[2] | (unsigned __int64)((unsigned __int8)v21[3] << 8);
        *(_WORD *)v21 = 1028;
        *((_WORD *)v21 + 1) = v9 + 4;
        memmove(v21 + 4, Src, v9 - 2);
        *(_WORD *)&v21[2 * (v9 >> 1) + 2] = 0;
      }
      *(_DWORD *)&v21[(unsigned __int8)v21[2] | (unsigned __int64)((unsigned __int8)v21[3] << 8)] = 327551;
      goto LABEL_15;
    }
  }
  return result;
}
