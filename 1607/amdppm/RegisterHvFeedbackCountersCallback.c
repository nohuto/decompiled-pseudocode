/*
 * XREFs of RegisterHvFeedbackCountersCallback @ 0x1C001DD90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     DecodeGenAddressToHvPerfReg @ 0x1C001E0BC (DecodeGenAddressToHvPerfReg.c)
 */

__int64 __fastcall RegisterHvFeedbackCountersCallback(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // edx
  __int64 v4; // r8
  _BYTE *v5; // rax
  SIZE_T v6; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rsi
  int v9; // ebx
  SIZE_T v10; // rbx
  _DWORD *v11; // rax
  _DWORD *v12; // r14
  __int64 *v13; // rbx
  unsigned int v14; // ecx
  _DWORD *v15; // r15
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned int i; // r13d
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // r12
  bool v22; // zf
  unsigned int j; // ecx
  __int64 v24; // rax
  _DWORD *v26; // [rsp+20h] [rbp-30h]
  __int64 *v27; // [rsp+28h] [rbp-28h]
  __int64 v28; // [rsp+30h] [rbp-20h]
  int v29; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v30; // [rsp+40h] [rbp-10h]
  __int64 v31; // [rsp+48h] [rbp-8h]
  unsigned int v32; // [rsp+90h] [rbp+40h]
  __int64 v33; // [rsp+A0h] [rbp+50h]
  __int64 v34; // [rsp+A8h] [rbp+58h]

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 32);
  if ( !v3 )
    goto LABEL_39;
  v4 = v3;
  v5 = (_BYTE *)(*(_QWORD *)(a1 + 392) + 16LL);
  do
  {
    if ( v5[1] && *v5 )
      ++v2;
    v5 += 24;
    --v4;
  }
  while ( v4 );
  if ( v2 )
  {
    v6 = 24 * *(_DWORD *)(a1 + 12) * (unsigned int)v2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      v10 = (unsigned int)(104 * *(_DWORD *)(a1 + 12));
      v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
      v12 = v11;
      if ( v11 )
      {
        memset(v11, 0, v10);
        v13 = *(__int64 **)(a1 + 408);
        v14 = 0;
        v15 = v12;
        v28 = *(_QWORD *)(a1 + 400);
        v27 = v13;
        v26 = v8;
        v32 = 0;
        if ( *(_DWORD *)(a1 + 12) )
        {
          v16 = 0x100040000000E8LL;
          v17 = 0x100040000000E7LL;
          do
          {
            *v15 = 0;
            for ( i = 0; i < *(_DWORD *)(a1 + 32); v27 = v13 )
            {
              v19 = *(_QWORD *)(a1 + 392);
              if ( *(_BYTE *)(v19 + 24LL * i + 17) && *(_BYTE *)(v19 + 24LL * i + 16) )
              {
                v20 = *v13;
                v34 = *v13;
                v21 = &v15[6 * *v15];
                if ( *(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64 *))(*v13 + 48) == GetCpcDifferentialFeedback )
                {
                  v33 = *(_QWORD *)(v20 + 56);
                  v9 = DecodeGenAddressToHvPerfReg(v33 + 152, v21 + 4);
                  if ( v9 < 0 )
                    goto LABEL_35;
                  v9 = DecodeGenAddressToHvPerfReg(v33 + 140, v21 + 2);
                  if ( v9 < 0 )
                    goto LABEL_35;
                  v20 = v34;
                  v13 = v27;
                  *((_BYTE *)v21 + 24) = 0;
                }
                else
                {
                  v22 = *(_QWORD *)(v19 + 24LL * i) == (_QWORD)PerfReadWrappingCounter;
                  *((_QWORD *)v21 + 2) = v16;
                  *((_QWORD *)v21 + 1) = v17;
                  *((_BYTE *)v21 + 24) = !v22;
                }
                v14 = v32;
                v26[1] = *(_DWORD *)(32LL * v32 + v28);
                *v26 = *v15;
                *(_QWORD *)(v20 + 56) = v26;
                *(_QWORD *)(v20 + 48) = PerfHvReadFeedback;
                ++*v15;
                v26 += 6;
              }
              ++v13;
              ++i;
            }
            ++v14;
            v15 += 26;
            v32 = v14;
          }
          while ( v14 < *(_DWORD *)(a1 + 12) );
        }
        for ( j = 0; j < *(_DWORD *)(a1 + 32); ++j )
        {
          v24 = *(_QWORD *)(a1 + 392);
          if ( *(_BYTE *)(v24 + 24LL * j + 17) && *(_BYTE *)(v24 + 24LL * j + 16) )
            *(_BYTE *)(v24 + 24LL * j + 16) = 0;
        }
        v29 = 44;
        v30 = v12;
        v31 = a1;
        if ( qword_1C0009618 )
          v9 = qword_1C0009618(&v29);
        else
          v9 = -1073741822;
        if ( v9 >= 0 )
          v8 = 0LL;
      }
      else
      {
        v9 = -1073741670;
      }
LABEL_35:
      if ( v8 )
        ExFreePoolWithTag(v8, 0x72637250u);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
LABEL_39:
    v29 = 44;
    v30 = 0LL;
    v31 = a1;
    if ( qword_1C0009618 )
      return (unsigned int)qword_1C0009618(&v29);
    else
      return (unsigned int)-1073741822;
  }
  return (unsigned int)v9;
}
