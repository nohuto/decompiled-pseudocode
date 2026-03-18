/*
 * XREFs of HvpGetHiveHeader @ 0x1404AFA28
 * Callers:
 *     HvLoadHive @ 0x1404AE98C (HvLoadHive.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     HvpHeaderCheckSum @ 0x1404AFFCC (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvpGetHiveHeader(__int64 a1, char **a2, _QWORD *a3)
{
  __int64 v5; // rcx
  char **v6; // r15
  unsigned int v7; // esi
  char *v8; // rax
  char *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  int v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+50h] [rbp+8h] BYREF

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
  v17 = *(_DWORD *)(a1 + 120) << 9;
  v19 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, char *, int))(a1 + 48))(a1, 0LL, &v19, v9, v17)
    || *(_DWORD *)v9 != 1718052210
    || *((_DWORD *)v9 + 127) != (unsigned int)HvpHeaderCheckSum(v9, v10, v11)
    || (v12 = *((_DWORD *)v9 + 10), (unsigned int)(v12 - 1) > 0x7FFFDFFF)
    || (v12 & 0xFFF) != 0 )
  {
    v18 = *(_DWORD *)(a1 + 120) << 9;
    v19 = 4096;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, char *, int))(a1 + 48))(a1, 0LL, &v19, v9, v18)
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
  v13 = *((_DWORD *)v9 + 5);
  if ( v13 > 1 )
    goto LABEL_16;
  v14 = *((_DWORD *)v9 + 6);
  if ( v14 < 3 || v13 == 1 && v14 > 5 )
    goto LABEL_16;
  if ( *((_DWORD *)v9 + 8) != 1 )
    goto LABEL_16;
  *a3 = *(_QWORD *)(v9 + 12);
  v15 = *((_DWORD *)v9 + 2);
  *v6 = v9;
  if ( *((_DWORD *)v9 + 1) != v15 )
    return 5LL;
  *((_DWORD *)v9 + 11) = 1;
  return 3LL;
}
