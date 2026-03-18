/*
 * XREFs of ?vStripSolidHorizontalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CCA70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidHorizontalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r12
  int v4; // edi
  unsigned int v6; // r9d
  int v7; // r14d
  __int64 v8; // rbp
  unsigned int v9; // ecx
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // r10
  int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-68h]
  char *v16; // [rsp+28h] [rbp-60h]
  void (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-58h]
  _DWORD v18[4]; // [rsp+38h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v16 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = -1;
  v8 = *((_QWORD *)a1 + 2);
  v15 = v6;
  v9 = v4;
  if ( v4 <= 0 )
    v9 = -v4;
  else
    v7 = 1;
  v10 = ((int)v8 - *((_DWORD *)a1 + 110)) / v9;
  v11 = (((int)v8 - *((_DWORD *)a1 + 110)) % v9) >> 2;
  v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v17 = v12;
  do
  {
    v13 = *(_DWORD *)v3;
    v14 = *((_QWORD *)a1 + 54);
    v18[0] = v11;
    v18[3] = v10 + 1;
    v11 += v13;
    v18[1] = v10;
    v18[2] = v11;
    v12(v14, v6, v18);
    v6 = v15;
    v12 = v17;
    v10 += v7;
    v3 += 4;
    v8 += v4 + 4 * v13;
  }
  while ( v3 < v16 );
  *((_QWORD *)a1 + 2) = v8;
}
