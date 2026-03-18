/*
 * XREFs of ?vStripSolidVerticalCddCallback@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x140223D20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vStripSolidVerticalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // r14
  unsigned int v5; // r9d
  __int64 v6; // r13
  int v7; // ebp
  unsigned int v8; // r8d
  unsigned int v9; // ett
  unsigned int v10; // esi
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // r10
  unsigned int v12; // r12d
  int v13; // edi
  int v14; // ebx
  __int64 v15; // rcx
  _DWORD *v16; // r8
  unsigned int v17; // [rsp+20h] [rbp-78h]
  int *v18; // [rsp+28h] [rbp-70h]
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-68h]
  _DWORD v20[4]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v21[4]; // [rsp+48h] [rbp-50h] BYREF

  v3 = (int *)((char *)a1 + 28);
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v17 = v5;
  v7 = -4 * *((_DWORD *)a1 + 2);
  v18 = (int *)((char *)a1 + 4 * *(int *)a1 + 28);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v7 = 4 * *((_DWORD *)a1 + 2);
  v8 = -v7;
  if ( v7 > 0 )
    v8 = v7;
  v9 = v6 - *((_DWORD *)a1 + 110);
  v10 = (v9 % v8) >> 2;
  v11 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v12 = v10 + 1;
  v13 = v9 / v8;
  v19 = v11;
  do
  {
    v14 = *v3;
    v15 = *((_QWORD *)a1 + 54);
    if ( v7 > 0 )
    {
      v20[0] = v10;
      v20[3] = v14 + v13;
      v16 = v20;
      v20[1] = v13;
      v20[2] = v12;
    }
    else
    {
      v21[0] = v10;
      v21[2] = v12;
      v16 = v21;
      v21[1] = v13 - v14 + 1;
      v21[3] = v13 + 1;
    }
    v11(v15, v5, v16);
    v5 = v17;
    v11 = v19;
    ++v10;
    ++v12;
    v6 += v14 * v7 + 4;
    if ( v7 <= 0 )
      v14 = -v14;
    ++v3;
    v13 += v14;
  }
  while ( v3 < v18 );
  *((_QWORD *)a1 + 2) = v6;
}
