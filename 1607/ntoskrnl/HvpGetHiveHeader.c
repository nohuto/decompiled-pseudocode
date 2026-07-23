/*
 * XREFs of HvpGetHiveHeader @ 0x140480A1C
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     HvpHeaderCheckSum @ 0x140480C14 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvpGetHiveHeader(__int64 a1, char **a2, _QWORD *a3)
{
  __int64 v5; // rcx
  char **v6; // r15
  unsigned int v7; // esi
  char *v8; // rax
  char *v9; // rbx
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  int v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a1 + 116);
  v6 = a2;
  v7 = 0;
  *a2 = 0LL;
  LOBYTE(a2) = 1;
  v8 = (char *)(*(__int64 (__fastcall **)(__int64, char **, __int64))(a1 + 24))(v5, a2, 842222915LL);
  v9 = v8;
  if ( !v8 )
    return 2LL;
  memset(v8, 0, 0x1000uLL);
  v15 = *(_DWORD *)(a1 + 120) << 9;
  v17 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, char *, int))(a1 + 48))(a1, 0LL, &v17, v9, v15)
    || *(_DWORD *)v9 != 1718052210
    || *((_DWORD *)v9 + 127) != (unsigned int)HvpHeaderCheckSum(v9)
    || (v10 = *((_DWORD *)v9 + 10), (unsigned int)(v10 - 1) > 0x7FFFDFFF)
    || (v10 & 0xFFF) != 0 )
  {
    v16 = *(_DWORD *)(a1 + 120) << 9;
    v17 = 4096;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, char *, int))(a1 + 48))(a1, 0LL, &v17, v9, v16)
      || *(_DWORD *)v9 != 1852400232
      || *((_DWORD *)v9 + 1) )
    {
      (*(void (__fastcall **)(char *, _QWORD))(a1 + 32))(v9, *(unsigned int *)(a1 + 116));
      return 0LL;
    }
    v7 = 4;
    *a3 = *(_QWORD *)(v9 + 20);
LABEL_16:
    (*(void (__fastcall **)(char *, _QWORD))(a1 + 32))(v9, *(unsigned int *)(a1 + 116));
    return v7;
  }
  if ( *((_DWORD *)v9 + 7) )
    goto LABEL_16;
  v11 = *((_DWORD *)v9 + 5);
  if ( v11 > 1 )
    goto LABEL_16;
  v12 = *((_DWORD *)v9 + 6);
  if ( v12 < 3 || v11 == 1 && v12 > 6 )
    goto LABEL_16;
  if ( *((_DWORD *)v9 + 8) != 1 )
    goto LABEL_16;
  *a3 = *(_QWORD *)(v9 + 12);
  v13 = *((_DWORD *)v9 + 2);
  *v6 = v9;
  if ( *((_DWORD *)v9 + 1) != v13 )
    return 5LL;
  *((_DWORD *)v9 + 11) = 1;
  return 3LL;
}
