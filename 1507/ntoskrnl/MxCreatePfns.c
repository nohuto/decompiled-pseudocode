/*
 * XREFs of MxCreatePfns @ 0x1407C6C34
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x1407C47D0 (MiInitializePfnsForValidMappings.c)
 *     MxCreatePfns @ 0x1407C6C34 (MxCreatePfns.c)
 * Callees:
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MxCreatePfns @ 0x1407C6C34 (MxCreatePfns.c)
 *     MxCreatePfn @ 0x1407C70B4 (MxCreatePfn.c)
 *     MiIsRegularMemory @ 0x1407C71E0 (MiIsRegularMemory.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MxCreatePfns(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v4; // r11d
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 *v16; // r8
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-40h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]
  unsigned __int64 v34; // [rsp+70h] [rbp+8h]

  if ( a1 <= a2 )
  {
    v34 = a1;
    v4 = a3;
    v5 = a4;
    v6 = a2;
    v33 = 0x3FFFFFFFFFFFFFFFLL;
    v7 = a1;
    while ( 1 )
    {
      v8 = *(_QWORD *)v7;
      v9 = v7 + 0x90482413000LL;
      if ( v7 + 0x90482413000LL <= 0x7F8 )
      {
        if ( (unsigned int)MiPteHasShadow() && (v8 & 1) != 0 && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v10 )
          {
            v11 = *(_QWORD *)(v10 + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v11 & 0x20) != 0 )
              v8 |= 0x20uLL;
            if ( (v11 & 0x42) != 0 )
              v8 |= 0x42uLL;
          }
        }
        v6 = a2;
      }
      v31 = v8;
      if ( (v8 & 1) == 0 )
        goto LABEL_70;
      v12 = v8;
      if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        v13 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * (((unsigned __int64)&v31 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v12 |= 0x20uLL;
          if ( (v14 & 0x42) != 0 )
            v12 |= 0x42uLL;
        }
      }
      v15 = (v12 >> 12) & 0xFFFFFFFFFLL;
      v16 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v17 = *v16;
      if ( (unsigned __int64)(v16 + 0x12090482600LL) <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 8 * ((v18 >> 3) & 0x1FF));
          if ( (v20 & 0x20) != 0 )
            v17 |= 0x20uLL;
          if ( (v20 & 0x42) != 0 )
            v17 |= 0x42uLL;
        }
      }
      v32 = v17;
      if ( (unsigned __int64)&STACK[0x90482413028] <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (v17 & 1) != 0
        && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
      {
        v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)&v32 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v17 |= 0x20uLL;
          if ( (v22 & 0x42) != 0 )
            v17 |= 0x42uLL;
        }
      }
      v23 = (v17 >> 12) & 0xFFFFFFFFFLL;
      v24 = 48 * v15 - 0x58000000000LL;
      *(_QWORD *)(48 * v23 - 0x58000000000LL + 24) ^= v33 & (*(_QWORD *)(48 * v23 - 0x58000000000LL + 24) ^ (*(_QWORD *)(48 * v23 - 0x58000000000LL + 24) + 1LL));
      if ( v4 != 1 )
        break;
      if ( (v8 & 0x80u) == 0LL )
        goto LABEL_67;
      v25 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
      if ( (v25 & 0x42) != 0 )
        v25 |= 0x800uLL;
      v26 = ((unsigned __int16)v25 ^ (unsigned __int16)((unsigned __int8)word_14034EC18 << 8)) & 0x100 ^ v25;
      v31 = v26;
      *(_QWORD *)v7 = v26;
      if ( v9 <= 0x7F8 )
      {
        MiWritePteShadow(v7, v26);
        v5 = a4;
      }
      v27 = (__int64)(v7 << 25) >> 16;
      if ( v27 < v27 + 4096 )
      {
        v28 = v27 + 4096;
        do
        {
          if ( (unsigned int)MiIsRegularMemory(v5, v15) )
          {
            MxCreatePfn(v15, v27, v23, 1LL, v31, v32);
            v5 = a4;
          }
          ++v15;
          v27 += 8LL;
        }
        while ( v27 < v28 );
        v7 = v34;
      }
LABEL_69:
      v6 = a2;
LABEL_70:
      v5 = a4;
      v7 += 8LL;
      v4 = a3;
      v34 = v7;
      if ( v7 > v6 )
        return;
    }
    if ( !v4 )
    {
      v29 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
      if ( (v29 & 0x42) != 0 )
        v29 |= 0x800uLL;
      v30 = ((unsigned __int16)v29 ^ (unsigned __int16)((unsigned __int8)word_14034EC18 << 8)) & 0x100 ^ v29;
      v31 = v30;
      *(_QWORD *)v7 = v30;
      if ( v9 <= 0x7F8 )
      {
        MiWritePteShadow(v7, v30);
        v5 = a4;
      }
      if ( (unsigned int)MiIsRegularMemory(v5, v15) )
      {
        if ( (*(_BYTE *)(v24 + 34) & 7) != 6
          || (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
          && (*(_QWORD *)(v24 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
        {
          MxCreatePfn(v15, v7, v23, 1LL, v31, v32);
        }
        else
        {
          *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        }
      }
      goto LABEL_69;
    }
LABEL_67:
    MxCreatePfn(v15, v7, v23, 0LL, v31, v32);
    if ( v7 != 0xFFFFF6FB7DBEDF68uLL )
      MxCreatePfns((__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, (unsigned int)(a3 - 1), a4);
    goto LABEL_69;
  }
}
