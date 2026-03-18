/*
 * XREFs of ?vStripStyledDiagonalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CD040
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledDiagonalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r9
  int v4; // edi
  unsigned int v7; // r10d
  int v8; // r15d
  int v9; // ebp
  int v10; // r8d
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // r11
  int v16; // eax
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-78h]
  int v19; // [rsp+24h] [rbp-74h]
  unsigned int v20; // [rsp+28h] [rbp-70h]
  char *v21; // [rsp+30h] [rbp-68h]
  char *v22; // [rsp+38h] [rbp-60h]
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-58h]
  _DWORD v24[4]; // [rsp+48h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v21 = (char *)a1 + 28;
  v22 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 22);
  v9 = *((_DWORD *)a3 + 12);
  v10 = -1;
  v11 = *((_QWORD *)a1 + 2);
  v20 = v7;
  v12 = v4;
  if ( v4 > 0 )
    v10 = 1;
  v19 = v10;
  if ( v4 <= 0 )
    v12 = -v4;
  v13 = ((int)v11 - *((_DWORD *)a1 + 110)) / v12;
  v14 = (((int)v11 - *((_DWORD *)a1 + 110)) % v12) >> 2;
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v23 = v15;
  do
  {
    v16 = *(_DWORD *)v3;
    v18 = *(_DWORD *)v3;
    while ( 1 )
    {
      if ( !v8 )
      {
        v17 = *((_QWORD *)a1 + 54);
        v24[2] = v14 + 1;
        v24[0] = v14;
        v24[3] = v13 + 1;
        v24[1] = v13;
        v15(v17, v7, v24);
        v10 = v19;
        v16 = v18;
        v7 = v20;
        v15 = v23;
      }
      v11 += 4LL;
      ++v14;
      v18 = v16 - 1;
      if ( v16 == 1 )
        break;
      v9 -= *((_DWORD *)a3 + 4);
      v13 += v10;
      v11 += v4;
      --v16;
      if ( v9 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v9 += **((_DWORD **)a3 + 5);
        v8 = v8 == 0;
        v16 = v18;
      }
    }
    v9 -= *((_DWORD *)a3 + 2);
    if ( v9 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v9 += **((_DWORD **)a3 + 5);
      v8 = v8 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      --v14;
      v11 += v4 - 4;
      v13 += v10;
    }
    v3 = v21 + 4;
    v21 = v3;
  }
  while ( v3 < v22 );
  *((_QWORD *)a1 + 2) = v11;
  *((_DWORD *)a3 + 22) = v8;
  *((_DWORD *)a3 + 12) = v9;
}
