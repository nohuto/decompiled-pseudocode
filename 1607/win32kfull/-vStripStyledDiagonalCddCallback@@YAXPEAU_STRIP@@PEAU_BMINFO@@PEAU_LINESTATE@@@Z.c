/*
 * XREFs of ?vStripStyledDiagonalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02D0F00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledDiagonalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v4; // r8
  int v5; // edi
  __int64 v7; // r14
  int v8; // r9d
  unsigned int v9; // r10d
  int v10; // r15d
  int v11; // ebp
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
  void (__fastcall *v22)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-60h]
  char *v23; // [rsp+40h] [rbp-58h]
  _DWORD v24[4]; // [rsp+48h] [rbp-50h] BYREF

  v4 = (char *)a1 + 28;
  v5 = 4 * *((_DWORD *)a1 + 2);
  v21 = (char *)a1 + 28;
  v23 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v5 = -4 * *((_DWORD *)a1 + 2);
  v7 = *((_QWORD *)a1 + 2);
  v8 = -1;
  v9 = *((_DWORD *)a3 + 1);
  v10 = *((_DWORD *)a3 + 22);
  v11 = *((_DWORD *)a3 + 12);
  v20 = v9;
  if ( v5 > 0 )
    v8 = 1;
  v19 = v8;
  v12 = abs32(v5);
  v13 = ((int)v7 - *((_DWORD *)a1 + 110)) / v12;
  v14 = (((int)v7 - *((_DWORD *)a1 + 110)) % v12) >> 2;
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v22 = v15;
  do
  {
    v16 = *(_DWORD *)v4;
    v18 = *(_DWORD *)v4;
    while ( 1 )
    {
      if ( !v10 )
      {
        v17 = *((_QWORD *)a1 + 54);
        v24[2] = v14 + 1;
        v24[0] = v14;
        v24[3] = v13 + 1;
        v24[1] = v13;
        v15(v17, v9, v24);
        v16 = v18;
        v8 = v19;
        v9 = v20;
        v15 = v22;
      }
      v7 += 4LL;
      ++v14;
      v18 = v16 - 1;
      if ( v16 == 1 )
        break;
      v11 -= *((_DWORD *)a3 + 4);
      v13 += v8;
      v7 += v5;
      --v16;
      if ( v11 <= 0 )
      {
        *((_QWORD *)a3 + 5) += 4LL;
        if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
          *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
        v11 += **((_DWORD **)a3 + 5);
        v10 = v10 == 0;
        v16 = v18;
      }
    }
    v11 -= *((_DWORD *)a3 + 2);
    if ( v11 <= 0 )
    {
      *((_QWORD *)a3 + 5) += 4LL;
      if ( *((_QWORD *)a3 + 5) > *((_QWORD *)a3 + 4) )
        *((_QWORD *)a3 + 5) = *((_QWORD *)a3 + 3);
      v11 += **((_DWORD **)a3 + 5);
      v10 = v10 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      --v14;
      v7 += v5 - 4;
      v13 += v8;
    }
    v4 = v21 + 4;
    v21 = v4;
  }
  while ( v4 < v23 );
  *((_QWORD *)a1 + 2) = v7;
  *((_DWORD *)a3 + 22) = v10;
  *((_DWORD *)a3 + 12) = v11;
}
