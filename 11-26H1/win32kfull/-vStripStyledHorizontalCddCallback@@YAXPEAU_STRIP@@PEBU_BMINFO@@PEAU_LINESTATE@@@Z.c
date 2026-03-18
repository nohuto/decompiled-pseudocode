/*
 * XREFs of ?vStripStyledHorizontalCddCallback@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401FEDB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vStripStyledHorizontalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r15
  __int64 v4; // rbp
  int v5; // esi
  int v7; // edi
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // ett
  unsigned int v12; // r10d
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // r11
  int v14; // r13d
  int v15; // r12d
  unsigned int v16; // r14d
  __int64 v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-88h]
  int v21; // [rsp+24h] [rbp-84h]
  char *v22; // [rsp+28h] [rbp-80h]
  void (__fastcall *v24)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-70h]
  __int64 v25; // [rsp+40h] [rbp-68h]
  char *v26; // [rsp+48h] [rbp-60h]
  _DWORD v27[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a3 + 20);
  v7 = *((_DWORD *)a3 + 5);
  v26 = (char *)a1 + 4 * *(int *)a1 + 28;
  v8 = -4 * *((_DWORD *)a1 + 2);
  v20 = *((_DWORD *)a3 + 1);
  v9 = 1;
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  v22 = (char *)a1 + 28;
  if ( v8 <= 0 )
    v9 = -1;
  v10 = -v8;
  v21 = v9;
  if ( v8 > 0 )
    v10 = v8;
  v11 = v4 - *((_DWORD *)a1 + 110);
  v12 = (v11 % v10) >> 2;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v14 = v11 / v10;
  v24 = v13;
  v25 = v8;
  do
  {
    v15 = *(_DWORD *)v3;
    do
    {
      v16 = v12 + 1;
      if ( !v5 )
      {
        v17 = *((_QWORD *)a1 + 54);
        v27[3] = v14 + 1;
        v27[0] = v12;
        v27[1] = v14;
        v27[2] = v12 + 1;
        v13(v17, v20, v27);
        v13 = v24;
      }
      v7 -= *((_DWORD *)a3 + 2);
      v4 += 4LL;
      v12 = v16;
      if ( v7 <= 0 )
      {
        *((_QWORD *)a3 + 7) += 4LL;
        v18 = (_DWORD *)*((_QWORD *)a3 + 7);
        if ( (unsigned __int64)v18 > *((_QWORD *)a3 + 6) )
        {
          v18 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v18;
        }
        v7 += *v18;
        v5 = v5 == 0;
      }
      --v15;
    }
    while ( v15 );
    v4 += v25;
    v14 += v21;
    v7 -= *((_DWORD *)a3 + 3);
    if ( v7 <= 0 )
    {
      *((_QWORD *)a3 + 7) += 4LL;
      v19 = (_DWORD *)*((_QWORD *)a3 + 7);
      if ( (unsigned __int64)v19 > *((_QWORD *)a3 + 6) )
      {
        v19 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v19;
      }
      v7 += *v19;
      v5 = v5 == 0;
    }
    v3 = v22 + 4;
    v22 = v3;
  }
  while ( v3 != v26 );
  *((_QWORD *)a1 + 2) = v4;
  *((_DWORD *)a3 + 20) = v5;
  *((_DWORD *)a3 + 5) = v7;
}
