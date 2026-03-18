/*
 * XREFs of MiPhysicalPoolCheck @ 0x1401673E8
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x140115220 (MiFindContiguousMemoryInPool.c)
 *     MiCheckPoolForContiguousPages @ 0x1401672C4 (MiCheckPoolForContiguousPages.c)
 * Callees:
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiPhysicalPoolCheck(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v8; // r13
  unsigned __int64 v9; // r10
  __int64 v13; // r11
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 *v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int64 v32; // [rsp+50h] [rbp+8h] BYREF
  __int64 v33; // [rsp+58h] [rbp+10h]

  v8 = 0LL;
  v9 = 0LL;
  v33 = a7 - 1;
  v13 = -1LL;
  v14 = ~(a7 - 1);
  v15 = qword_14034EB70[26 * a8 + 20].Region + ((a1 + a2) << 12);
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v13 == -1 )
        v16 = a3 - v9;
      else
        v16 = a3 - v13;
      if ( v16 < a4 )
        return -1LL;
      v18 = (unsigned __int64 *)(((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v19 = (v15 >> 9) & 0xFF8;
      v20 = (unsigned __int64)(unsigned int)(4096 - v19) >> 3;
      if ( v20 + v9 > a3 )
        v20 = a3 - v9;
      v21 = *v18;
      if ( (unsigned __int64)(v18 + 0x12090482600LL) <= 0x7F8
        && (unsigned int)MiPteHasShadow(v19, v21)
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v23 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 8 * ((v22 >> 3) & 0x1FF));
          if ( (v24 & 0x20) != 0 )
            v21 |= 0x20uLL;
          if ( (v24 & 0x42) != 0 )
            v21 |= 0x42uLL;
        }
      }
      v32 = v21;
      if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v21)
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 8 * (((unsigned __int64)&v32 >> 3) & 0x1FF));
          if ( (v26 & 0x20) != 0 )
            v21 |= 0x20uLL;
          if ( (v26 & 0x42) != 0 )
            v21 |= 0x42uLL;
        }
      }
      v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v27 = 48 * (((v21 >> 12) & 0xFFFFFFFFFLL) + ((v17 >> 3) & 0x1FF)) - 0x58000000000LL;
      if ( (unsigned __int8)HIBYTE(*(_QWORD *)(v27 + 40)) >> 2 != a8 )
      {
        v20 = 1LL;
LABEL_48:
        v13 = -1LL;
        goto LABEL_49;
      }
      if ( v13 != -1 )
        break;
      v28 = (__int64)(48 * (((v21 >> 12) & 0xFFFFFFFFFLL) + ((v17 >> 3) & 0x1FF))) / 48;
      if ( v28 > a5 )
        goto LABEL_49;
      if ( v28 >= a6 )
      {
        if ( v28 + a4 <= v28 )
          goto LABEL_49;
        v30 = v28 + a4 - 1;
        if ( v30 > a5 )
          goto LABEL_49;
        if ( a7 && ((v28 ^ v30) & v14) != 0 )
        {
          if ( v28 + v20 <= (v14 & (v28 + v33)) )
            goto LABEL_49;
          v29 = v14 & (v28 + v33);
          goto LABEL_35;
        }
        v13 = v9;
        goto LABEL_44;
      }
      if ( v28 + v20 > a6 )
      {
        v29 = a6;
LABEL_35:
        v20 = v29 - v28;
      }
LABEL_49:
      v9 += v20;
      v15 += v20 << 12;
      if ( v9 >= a3 )
        return -1LL;
    }
    if ( v27 != v8 + 48 )
    {
      v20 = 0LL;
      goto LABEL_48;
    }
LABEL_44:
    v8 = v27;
    if ( v13 != -1 && v9 - v13 + 1 >= a4 )
      return v13 + a1;
    v20 = 1LL;
    goto LABEL_49;
  }
  return -1LL;
}
