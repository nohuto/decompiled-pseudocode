/*
 * XREFs of vShiftOutlineInfo @ 0x1C0247D2C
 * Callers:
 *     lQueryTTOutline @ 0x1C00F0EFC (lQueryTTOutline.c)
 * Callees:
 *     vFillGLYPHDATA @ 0x1C00B23C0 (vFillGLYPHDATA.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     vShiftBitmapInfo @ 0x1C015D890 (vShiftBitmapInfo.c)
 */

__int64 __fastcall vShiftOutlineInfo(__int64 a1, int a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 result; // rax
  void (__fastcall *v10)(unsigned int *, unsigned int *, _QWORD); // r14
  unsigned int v11; // r15d
  unsigned int *v12; // rdi
  unsigned int *v13; // rbx
  unsigned __int64 v14; // r12
  unsigned int *v15; // r13
  __int64 v16; // rdi
  unsigned int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  char *v19; // [rsp+48h] [rbp-B8h]
  __int64 v20[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+74h] [rbp-8Ch]
  _BYTE v23[240]; // [rsp+90h] [rbp-70h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v7 = a4;
  vShiftBitmapInfo(a1, (__int64)v23, v4);
  vFillGLYPHDATA(*(_DWORD *)(v8 + 312), *(_DWORD *)(v8 + 20), v8, (__int64)v23, v20, 0LL, 0LL);
  v17 = v21 << 16;
  v17 = (v21 << 16) - ((*(_DWORD *)(v4 + 80) + 0x8000) & 0xFFFF0000);
  result = (unsigned int)(v22 << 16);
  v18 = -(result + (*(__int16 *)(v4 + 102) << 16));
  if ( a2 )
  {
    v10 = (void (__fastcall *)(unsigned int *, unsigned int *, _QWORD))vAdd16FixTo16Fix;
    v11 = 0;
  }
  else
  {
    v10 = (void (__fastcall *)(unsigned int *, unsigned int *, _QWORD))vAdd16FixTo28Fix;
    v11 = 1;
  }
  v12 = (unsigned int *)((char *)a3 + v7);
  v19 = (char *)a3 + v7;
  while ( a3 < v12 )
  {
    v10(a3 + 2, &v17, 0LL);
    v10(a3 + 3, (unsigned int *)&v18, v11);
    v13 = a3 + 4;
    v14 = (unsigned __int64)a3 + *a3;
    if ( (unsigned __int64)(a3 + 4) < v14 )
    {
      do
      {
        v15 = v13 + 1;
        if ( *((_WORD *)v13 + 1) )
        {
          v16 = *((unsigned __int16 *)v13 + 1);
          do
          {
            v10(v15, &v17, 0LL);
            v10(v15 + 1, (unsigned int *)&v18, v11);
            v15 += 2;
            --v16;
          }
          while ( v16 );
        }
        v13 += 2 * *((unsigned __int16 *)v13 + 1) + 1;
      }
      while ( (unsigned __int64)v13 < v14 );
      v12 = (unsigned int *)v19;
    }
    result = *a3;
    a3 = (unsigned int *)((char *)a3 + result);
  }
  return result;
}
