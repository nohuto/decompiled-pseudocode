/*
 * XREFs of ?vStripSolidHorizontalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02D0930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidHorizontalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  int v5; // edi
  char *v6; // r12
  __int64 v7; // rbp
  int v8; // eax
  unsigned int v9; // r9d
  unsigned int v10; // ecx
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // r10
  int v14; // ebx
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-68h]
  unsigned int v17; // [rsp+24h] [rbp-64h]
  void (__fastcall *v18)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-60h]
  _DWORD v19[4]; // [rsp+30h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v5 = 4 * *((_DWORD *)a1 + 2);
  v6 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v5 = -4 * *((_DWORD *)a1 + 2);
  v7 = *((_QWORD *)a1 + 2);
  v8 = -1;
  v9 = *((_DWORD *)a3 + 1);
  v17 = v9;
  if ( v5 > 0 )
    v8 = 1;
  v16 = v8;
  v10 = abs32(v5);
  v11 = ((int)v7 - *((_DWORD *)a1 + 110)) / v10;
  v12 = (((int)v7 - *((_DWORD *)a1 + 110)) % v10) >> 2;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v18 = v13;
  do
  {
    v14 = *(_DWORD *)v3;
    v15 = *((_QWORD *)a1 + 54);
    v19[0] = v12;
    v19[3] = v11 + 1;
    v12 += v14;
    v19[1] = v11;
    v19[2] = v12;
    v13(v15, v9, v19);
    v11 += v16;
    v9 = v17;
    v3 += 4;
    v13 = v18;
    v7 += v5 + 4 * v14;
  }
  while ( v3 < v6 );
  *((_QWORD *)a1 + 2) = v7;
}
