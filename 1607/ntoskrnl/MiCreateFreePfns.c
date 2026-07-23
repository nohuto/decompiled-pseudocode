/*
 * XREFs of MiCreateFreePfns @ 0x140796948
 * Callers:
 *     MiSwitchToPfns @ 0x1407965E0 (MiSwitchToPfns.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     MxReleaseFreeDescriptor @ 0x1407960F4 (MxReleaseFreeDescriptor.c)
 *     MxCreateFreePfns @ 0x140796AA8 (MxCreateFreePfns.c)
 */

void __fastcall MiCreateFreePfns(__int128 *a1)
{
  int v1; // eax
  __int64 v2; // rsi
  unsigned __int64 v3; // r9
  __int128 *v4; // rbx
  __int64 v5; // r10
  __int64 *v6; // rdx
  __int64 *v7; // r8
  unsigned int v8; // r13d
  __int128 v9; // xmm3
  __int128 v10; // xmm2
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 **v13; // r12
  unsigned __int64 *v14; // r15
  unsigned __int64 v15; // rax
  int v16; // edx
  __int128 v17; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+38h] [rbp-D0h]
  __int64 v19; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v20; // [rsp+50h] [rbp-B8h]
  _OWORD v21[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-90h]
  _QWORD Base[64]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v2 = 0LL;
  v3 = *((_QWORD *)a1 + 3);
  v4 = a1;
  v5 = *((_QWORD *)a1 + 4);
  if ( (v1 & 0x40000000) != 0 )
  {
    v6 = qword_1407634F0;
    *((_DWORD *)a1 + 4) = v1 & 0xBFFFFFFF;
  }
  else
  {
    v6 = MxBootFreeDescriptor;
  }
  v7 = &v6[5 * (unsigned __int16)KeNumberNodes];
  if ( v6 >= v7 )
    goto LABEL_10;
  do
  {
    if ( v6[1] && *v6 >= v3 && *v6 < v5 + v3 )
    {
      Base[v2] = v6;
      v2 = (unsigned int)(v2 + 1);
    }
    v6 += 5;
  }
  while ( v6 < v7 );
  if ( (_DWORD)v2 )
  {
    qsort(Base, (unsigned int)v2, 8uLL, MxDescriptorSort);
    v8 = 0;
    v9 = *v4;
    v10 = v4[1];
    v17 = *v4;
    v19 = *((_QWORD *)v4 + 4);
    v11 = v19;
    v18 = v10;
    v12 = *((_QWORD *)&v10 + 1);
    v13 = (unsigned __int64 **)Base;
    while ( 1 )
    {
      v14 = *v13;
      v15 = **v13;
      if ( v15 > v12 )
      {
        v20 = v15 - v12;
        v22 = v15 - v12;
        v21[0] = v9;
        v21[1] = v10;
        MxCreateFreePfns(v21);
        v11 -= v20;
        v12 = *v14;
      }
      v11 -= v14[1];
      v12 += v14[1];
      v16 = *((_DWORD *)v4 + 4);
      v19 = v11;
      *((_QWORD *)&v18 + 1) = v12;
      MxReleaseFreeDescriptor(v14, v16);
      if ( !v11 )
        break;
      ++v8;
      ++v13;
      if ( v8 >= (unsigned int)v2 )
      {
        a1 = &v17;
        goto LABEL_10;
      }
      v10 = v18;
      v9 = v17;
    }
  }
  else
  {
LABEL_10:
    MxCreateFreePfns(a1);
  }
}
