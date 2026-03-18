/*
 * XREFs of ?vStripSolidVerticalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02CD990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidVerticalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r15
  int v4; // ebx
  unsigned int v6; // r9d
  int v7; // r12d
  __int64 v8; // rbp
  unsigned int v9; // ecx
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // r10
  unsigned int v13; // ecx
  int v14; // esi
  _DWORD *v15; // r8
  unsigned int v16; // [rsp+20h] [rbp-78h]
  unsigned int v17; // [rsp+24h] [rbp-74h]
  char *v18; // [rsp+28h] [rbp-70h]
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-68h]
  _DWORD v20[4]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v21[4]; // [rsp+48h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v18 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = -1;
  v8 = *((_QWORD *)a1 + 2);
  v17 = v6;
  v9 = v4;
  if ( v4 <= 0 )
    v9 = -v4;
  else
    v7 = 1;
  v10 = ((int)v8 - *((_DWORD *)a1 + 110)) / v9;
  v11 = (((int)v8 - *((_DWORD *)a1 + 110)) % v9) >> 2;
  v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v19 = v12;
  v13 = v11 + 1;
  v16 = v11 + 1;
  do
  {
    v14 = *(_DWORD *)v3;
    if ( v4 <= 0 )
    {
      v21[0] = v11;
      v21[2] = v13;
      v15 = v21;
      v21[1] = v10 - v14 + 1;
      v21[3] = v10 + 1;
    }
    else
    {
      v20[0] = v11;
      v20[3] = v14 + v10;
      v15 = v20;
      v20[1] = v10;
      v20[2] = v13;
    }
    v12(*((_QWORD *)a1 + 54), v6, v15);
    v6 = v17;
    v12 = v19;
    v13 = v16 + 1;
    ++v11;
    v3 += 4;
    ++v16;
    v10 += v7 * v14;
    v8 += v4 * v14 + 4;
  }
  while ( v3 < v18 );
  *((_QWORD *)a1 + 2) = v8;
}
