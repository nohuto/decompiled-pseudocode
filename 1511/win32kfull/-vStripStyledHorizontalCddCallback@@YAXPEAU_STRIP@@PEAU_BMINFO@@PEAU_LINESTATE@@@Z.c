/*
 * XREFs of ?vStripStyledHorizontalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CE1E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledHorizontalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r15
  int v6; // r8d
  unsigned int v7; // r9d
  int v8; // r12d
  __int64 v9; // rbp
  int v10; // r14d
  unsigned int v11; // ecx
  int v12; // esi
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // r10
  int v14; // r13d
  unsigned int v15; // r12d
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-88h]
  unsigned int v18; // [rsp+24h] [rbp-84h]
  unsigned int v19; // [rsp+28h] [rbp-80h]
  int v20; // [rsp+2Ch] [rbp-7Ch]
  char *v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+38h] [rbp-70h]
  char *v23; // [rsp+40h] [rbp-68h]
  void (__fastcall *v24)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-60h]
  _DWORD v25[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v21 = (char *)a1 + 28;
  v6 = 4 * *((_DWORD *)a1 + 2);
  v23 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v6 = -4 * *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a3 + 1);
  v8 = -1;
  v9 = *((_QWORD *)a1 + 2);
  v10 = *((_DWORD *)a3 + 22);
  v11 = v6;
  v12 = *((_DWORD *)a3 + 12);
  v19 = v7;
  if ( v6 > 0 )
    v8 = 1;
  v20 = v8;
  if ( v6 <= 0 )
    v11 = -v6;
  v17 = ((int)v9 - *((_DWORD *)a1 + 110)) / v11;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v22 = v6;
  v18 = (((int)v9 - *((_DWORD *)a1 + 110)) % v11) >> 2;
  v24 = v13;
  do
  {
    v14 = *(_DWORD *)v3;
    v15 = v18;
    do
    {
      if ( !v10 )
      {
        v16 = *((_QWORD *)a1 + 54);
        v25[2] = v15 + 1;
        v25[0] = v15;
        v25[3] = v17 + 1;
        v25[1] = v17;
        v13(v16, v7, v25);
        v7 = v19;
        v13 = v24;
      }
      v12 -= *((_DWORD *)a3 + 2);
      ++v15;
      v9 += 4LL;
      if ( v12 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v12 += **((_DWORD **)a3 + 5);
        v10 = v10 == 0;
      }
      --v14;
    }
    while ( v14 );
    v9 += v22;
    v12 -= *((_DWORD *)a3 + 3);
    v17 += v20;
    v18 = v15;
    if ( v12 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v12 += **((_DWORD **)a3 + 5);
      v10 = v10 == 0;
    }
    v3 = v21 + 4;
    v21 = v3;
  }
  while ( v3 != v23 );
  *((_QWORD *)a1 + 2) = v9;
  *((_DWORD *)a3 + 22) = v10;
  *((_DWORD *)a3 + 12) = v12;
}
