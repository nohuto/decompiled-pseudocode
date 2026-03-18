/*
 * XREFs of ?vStripSolidVerticalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02D0B00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidVerticalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  int v4; // ebx
  __int64 v6; // r12
  int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // r10
  unsigned int v13; // r13d
  int v14; // esi
  __int64 v15; // rcx
  _DWORD *v16; // r8
  int v17; // [rsp+20h] [rbp-78h]
  unsigned int v18; // [rsp+24h] [rbp-74h]
  char *v19; // [rsp+28h] [rbp-70h]
  void (__fastcall *v20)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-68h]
  _DWORD v21[4]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v22[4]; // [rsp+48h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v4 = 4 * *((_DWORD *)a1 + 2);
  v19 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) != 0 )
    v4 = -4 * *((_DWORD *)a1 + 2);
  v6 = *((_QWORD *)a1 + 2);
  v7 = -1;
  v8 = *((_DWORD *)a3 + 1);
  v18 = v8;
  if ( v4 > 0 )
    v7 = 1;
  v17 = v7;
  v9 = abs32(v4);
  v10 = ((int)v6 - *((_DWORD *)a1 + 110)) / v9;
  v11 = (((int)v6 - *((_DWORD *)a1 + 110)) % v9) >> 2;
  v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v20 = v12;
  v13 = v11 + 1;
  do
  {
    v14 = *(_DWORD *)v3;
    v15 = *((_QWORD *)a1 + 54);
    if ( v4 <= 0 )
    {
      v22[0] = v11;
      v22[2] = v13;
      v16 = v22;
      v22[1] = v10 - v14 + 1;
      v22[3] = v10 + 1;
    }
    else
    {
      v21[0] = v11;
      v21[3] = v14 + v10;
      v16 = v21;
      v21[1] = v10;
      v21[2] = v13;
    }
    v12(v15, v8, v16);
    v8 = v18;
    v12 = v20;
    ++v11;
    ++v13;
    v3 += 4;
    v10 += v17 * v14;
    v6 += v4 * v14 + 4;
  }
  while ( v3 < v19 );
  *((_QWORD *)a1 + 2) = v6;
}
