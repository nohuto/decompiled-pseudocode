/*
 * XREFs of MiCreateFreePfns @ 0x1407468E4
 * Callers:
 *     MiSwitchToPfns @ 0x140746514 (MiSwitchToPfns.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     MxReleaseFreeDescriptor @ 0x140746040 (MxReleaseFreeDescriptor.c)
 *     MxCreateFreePfns @ 0x140746A50 (MxCreateFreePfns.c)
 */

void __fastcall MiCreateFreePfns(__int128 *a1)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rdi
  __int64 v4; // r10
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int128 *v7; // rcx
  unsigned int v8; // r13d
  __int128 v9; // xmm3
  __int128 v10; // xmm2
  __int64 v11; // rbx
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

  v2 = *((_QWORD *)a1 + 3);
  v3 = 0LL;
  v4 = *((_QWORD *)a1 + 4);
  v5 = MxFreeDescriptor;
  v6 = &MxFreeDescriptor[4 * (unsigned __int16)KeNumberNodes];
  if ( MxFreeDescriptor >= v6 )
    goto LABEL_8;
  do
  {
    if ( v5[1] && *v5 >= v2 && *v5 < v4 + v2 )
    {
      Base[v3] = v5;
      v3 = (unsigned int)(v3 + 1);
    }
    v5 += 4;
  }
  while ( v5 < v6 );
  if ( (_DWORD)v3 )
  {
    qsort(Base, (unsigned int)v3, 8uLL, (int (__cdecl *)(const void *, const void *))MxDescriptorSort);
    v8 = 0;
    v9 = *a1;
    v10 = a1[1];
    v17 = *a1;
    v19 = *((_QWORD *)a1 + 4);
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
      v16 = *((_DWORD *)a1 + 4);
      v19 = v11;
      *((_QWORD *)&v18 + 1) = v12;
      MxReleaseFreeDescriptor(v14, v16);
      if ( !v11 )
        break;
      ++v8;
      ++v13;
      if ( v8 >= (unsigned int)v3 )
      {
        v7 = &v17;
        goto LABEL_9;
      }
      v10 = v18;
      v9 = v17;
    }
  }
  else
  {
LABEL_8:
    v7 = a1;
LABEL_9:
    MxCreateFreePfns(v7);
  }
}
