/*
 * XREFs of ?vStripStyledHorizontalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02D1350
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledHorizontalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r15
  int v6; // r8d
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // r9d
  int v10; // ebp
  int v11; // edi
  unsigned int v12; // ecx
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // r10
  unsigned int v14; // r13d
  int v15; // r12d
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-88h]
  unsigned int v18; // [rsp+24h] [rbp-84h]
  int v19; // [rsp+28h] [rbp-80h]
  char *v20; // [rsp+30h] [rbp-78h]
  void (__fastcall *v21)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  char *v23; // [rsp+48h] [rbp-60h]
  _DWORD v24[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v20 = (char *)a1 + 28;
  v6 = 4 * *((_DWORD *)a1 + 2);
  v23 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v6 = -4 * *((_DWORD *)a1 + 2);
  v7 = *((_QWORD *)a1 + 2);
  v8 = -1;
  v9 = *((_DWORD *)a3 + 1);
  v10 = *((_DWORD *)a3 + 22);
  v11 = *((_DWORD *)a3 + 12);
  v18 = v9;
  if ( v6 > 0 )
    v8 = 1;
  v19 = v8;
  v12 = abs32(v6);
  v17 = ((int)v7 - *((_DWORD *)a1 + 110)) / v12;
  v22 = v6;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v14 = (((int)v7 - *((_DWORD *)a1 + 110)) % v12) >> 2;
  v21 = v13;
  do
  {
    v15 = *(_DWORD *)v3;
    do
    {
      if ( !v10 )
      {
        v16 = *((_QWORD *)a1 + 54);
        v24[2] = v14 + 1;
        v24[0] = v14;
        v24[3] = v17 + 1;
        v24[1] = v17;
        v13(v16, v9, v24);
        v9 = v18;
        v13 = v21;
      }
      v11 -= *((_DWORD *)a3 + 2);
      ++v14;
      v7 += 4LL;
      if ( v11 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v11 += **((_DWORD **)a3 + 5);
        v10 = v10 == 0;
      }
      --v15;
    }
    while ( v15 );
    v7 += v22;
    v11 -= *((_DWORD *)a3 + 3);
    v17 += v19;
    if ( v11 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v11 += **((_DWORD **)a3 + 5);
      v10 = v10 == 0;
    }
    v3 = v20 + 4;
    v20 = v3;
  }
  while ( v3 != v23 );
  *((_QWORD *)a1 + 2) = v7;
  *((_DWORD *)a3 + 22) = v10;
  *((_DWORD *)a3 + 12) = v11;
}
