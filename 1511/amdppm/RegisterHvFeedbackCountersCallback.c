/*
 * XREFs of RegisterHvFeedbackCountersCallback @ 0x1C001B0F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     DecodeGenAddressToHvPerfReg @ 0x1C001B410 (DecodeGenAddressToHvPerfReg.c)
 */

__int64 __fastcall RegisterHvFeedbackCountersCallback(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // edx
  __int64 v4; // r8
  _BYTE *v5; // rax
  SIZE_T v6; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // r15
  int v9; // esi
  SIZE_T v10; // rbx
  _DWORD *v11; // rax
  _DWORD *v12; // r12
  __int64 *v13; // rcx
  _DWORD *v14; // r13
  unsigned int v15; // r11d
  __int64 v16; // rsi
  __int64 v17; // r8
  _DWORD *v18; // r10
  __int64 v19; // r10
  __int64 v20; // r10
  bool v21; // zf
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int k; // ecx
  __int64 v24; // rax
  _DWORD *v26; // [rsp+20h] [rbp-40h]
  __int64 *v27; // [rsp+28h] [rbp-38h]
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int64 v29; // [rsp+38h] [rbp-28h]
  int v30; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v31; // [rsp+48h] [rbp-18h]
  __int64 v32; // [rsp+50h] [rbp-10h]
  int j; // [rsp+A0h] [rbp+40h]
  unsigned int i; // [rsp+B0h] [rbp+50h]
  __int64 v35; // [rsp+B8h] [rbp+58h]

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 32);
  if ( !v3 )
    return (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C0009588)(a1);
  v4 = v3;
  v5 = (_BYTE *)(*(_QWORD *)(a1 + 384) + 16LL);
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
        v13 = *(__int64 **)(a1 + 400);
        v14 = v12;
        v15 = 0;
        v28 = *(_QWORD *)(a1 + 392);
        v27 = v13;
        v26 = v8;
        for ( i = 0; v15 < *(_DWORD *)(a1 + 12); i = v15 )
        {
          *v14 = 0;
          v16 = 0LL;
          for ( j = 0; (unsigned int)v16 < *(_DWORD *)(a1 + 32); v27 = v13 )
          {
            v17 = *(_QWORD *)(a1 + 384);
            if ( *(_BYTE *)(v17 + 24 * v16 + 17) && *(_BYTE *)(v17 + 24 * v16 + 16) )
            {
              v29 = *v13;
              v18 = &v14[6 * *v14];
              if ( *(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64 *))(*v13 + 48) == GetCpcDifferentialFeedback )
              {
                v35 = *(_QWORD *)(*v13 + 56);
                v9 = DecodeGenAddressToHvPerfReg(v35 + 152, v18 + 4);
                if ( v9 < 0 )
                  goto LABEL_34;
                v9 = DecodeGenAddressToHvPerfReg(v35 + 140, v19 + 8);
                if ( v9 < 0 )
                  goto LABEL_34;
                LODWORD(v16) = j;
                *(_BYTE *)(v20 + 24) = 0;
              }
              else
              {
                v21 = *(_QWORD *)(v17 + 24 * v16) == (_QWORD)PerfReadWrappingCounter;
                *((_QWORD *)v18 + 2) = 0x100040000000E8LL;
                *((_QWORD *)v18 + 1) = 0x100040000000E7LL;
                *((_BYTE *)v18 + 24) = !v21;
              }
              ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v28 + 32LL * v15));
              v15 = i;
              v26[1] = ProcessorIndexFromNumber;
              *v26 = *v14;
              *(_QWORD *)(v29 + 48) = PerfHvReadFeedback;
              v13 = v27;
              *(_QWORD *)(v29 + 56) = v26;
              ++*v14;
              v26 += 6;
            }
            v16 = (unsigned int)(v16 + 1);
            ++v13;
            j = v16;
          }
          ++v15;
          v14 += 26;
        }
        for ( k = 0; k < *(_DWORD *)(a1 + 32); ++k )
        {
          v24 = *(_QWORD *)(a1 + 384);
          if ( *(_BYTE *)(v24 + 24LL * k + 17) && *(_BYTE *)(v24 + 24LL * k + 16) )
            *(_BYTE *)(v24 + 24LL * k + 16) = 0;
        }
        v30 = 42;
        v31 = v12;
        v32 = a1;
        if ( qword_1C00095F8 )
          v9 = qword_1C00095F8(&v30);
        else
          v9 = -1073741822;
        if ( v9 >= 0 )
          v8 = 0LL;
      }
      else
      {
        v9 = -1073741670;
      }
LABEL_34:
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
    return (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C0009588)(a1);
  }
  return (unsigned int)v9;
}
