/*
 * XREFs of ?vStripStyledVerticalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02D1770
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledVerticalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r15
  int v6; // r8d
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // r9d
  int v10; // ebp
  int v11; // edi
  unsigned int v12; // ecx
  __int64 v13; // rax
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // r10
  unsigned int v15; // r13d
  int v16; // r12d
  unsigned int v17; // r15d
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-88h]
  unsigned int v20; // [rsp+24h] [rbp-84h]
  int v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  char *v23; // [rsp+38h] [rbp-70h]
  void (__fastcall *v24)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-68h]
  char *v25; // [rsp+48h] [rbp-60h]
  _DWORD v26[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v23 = (char *)a1 + 28;
  v6 = 4 * *((_DWORD *)a1 + 2);
  v25 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v6 = -4 * *((_DWORD *)a1 + 2);
  v7 = *((_QWORD *)a1 + 2);
  v8 = -1;
  v9 = *((_DWORD *)a3 + 1);
  v10 = *((_DWORD *)a3 + 22);
  v11 = *((_DWORD *)a3 + 12);
  v20 = v9;
  if ( v6 > 0 )
    v8 = 1;
  v21 = v8;
  v12 = abs32(v6);
  v19 = ((int)v7 - *((_DWORD *)a1 + 110)) / v12;
  v13 = v6;
  v22 = v6;
  v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v15 = (((int)v7 - *((_DWORD *)a1 + 110)) % v12) >> 2;
  v24 = v14;
  do
  {
    v16 = *(_DWORD *)v3;
    v17 = v19;
    do
    {
      if ( !v10 )
      {
        v18 = *((_QWORD *)a1 + 54);
        v26[2] = v15 + 1;
        v26[0] = v15;
        v26[3] = v17 + 1;
        v26[1] = v17;
        v14(v18, v9, v26);
        v13 = v22;
        v9 = v20;
        v14 = v24;
      }
      v17 += v21;
      v7 += v13;
      v11 -= *((_DWORD *)a3 + 2);
      if ( v11 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v11 += **((_DWORD **)a3 + 5);
        v10 = v10 == 0;
        v13 = v22;
      }
      --v16;
    }
    while ( v16 );
    v11 -= *((_DWORD *)a3 + 3);
    v7 += 4LL;
    ++v15;
    v19 = v17;
    if ( v11 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v11 += **((_DWORD **)a3 + 5);
      v10 = v10 == 0;
    }
    v13 = v22;
    v3 = v23 + 4;
    v23 = v3;
  }
  while ( v3 < v25 );
  *((_QWORD *)a1 + 2) = v7;
  *((_DWORD *)a3 + 22) = v10;
  *((_DWORD *)a3 + 12) = v11;
}
