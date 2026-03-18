/*
 * XREFs of ?vStripStyledVerticalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CE620
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledVerticalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r15
  int v6; // r8d
  unsigned int v7; // r10d
  int v8; // r12d
  __int64 v9; // rbp
  int v10; // r14d
  unsigned int v11; // ecx
  int v12; // esi
  unsigned int v13; // r9d
  __int64 v14; // rax
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // r11
  int v16; // r13d
  __int64 v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-88h]
  unsigned int v19; // [rsp+24h] [rbp-84h]
  __int64 v20; // [rsp+28h] [rbp-80h]
  unsigned int v21; // [rsp+30h] [rbp-78h]
  char *v22; // [rsp+38h] [rbp-70h]
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-68h]
  char *v24; // [rsp+48h] [rbp-60h]
  _DWORD v25[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v22 = (char *)a1 + 28;
  v6 = 4 * *((_DWORD *)a1 + 2);
  v24 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v6 = -4 * *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a3 + 1);
  v8 = -1;
  v9 = *((_QWORD *)a1 + 2);
  v10 = *((_DWORD *)a3 + 22);
  v11 = v6;
  v12 = *((_DWORD *)a3 + 12);
  v21 = v7;
  if ( v6 <= 0 )
    v11 = -v6;
  else
    v8 = 1;
  v13 = ((int)v9 - *((_DWORD *)a1 + 110)) / v11;
  v18 = v13;
  v14 = v6;
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v20 = v6;
  v19 = (((int)v9 - *((_DWORD *)a1 + 110)) % v11) >> 2;
  v23 = v15;
  do
  {
    v16 = *(_DWORD *)v3;
    do
    {
      if ( !v10 )
      {
        v17 = *((_QWORD *)a1 + 54);
        v25[2] = v19 + 1;
        v25[0] = v19;
        v25[3] = v13 + 1;
        v25[1] = v13;
        v15(v17, v7, v25);
        v13 = v18;
        v7 = v21;
        v14 = v20;
        v15 = v23;
      }
      v12 -= *((_DWORD *)a3 + 2);
      v13 += v8;
      v9 += v14;
      v18 = v13;
      if ( v12 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v12 += **((_DWORD **)a3 + 5);
        v10 = v10 == 0;
        v14 = v20;
      }
      --v16;
    }
    while ( v16 );
    v12 -= *((_DWORD *)a3 + 3);
    v9 += 4LL;
    ++v19;
    if ( v12 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v12 += **((_DWORD **)a3 + 5);
      v10 = v10 == 0;
    }
    v14 = v20;
    v3 = v22 + 4;
    v22 = v3;
  }
  while ( v3 < v24 );
  *((_QWORD *)a1 + 2) = v9;
  *((_DWORD *)a3 + 22) = v10;
  *((_DWORD *)a3 + 12) = v12;
}
