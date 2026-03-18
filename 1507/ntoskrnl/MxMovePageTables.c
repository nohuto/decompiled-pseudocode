/*
 * XREFs of MxMovePageTables @ 0x1407C68A0
 * Callers:
 *     MxRelocatePageTables @ 0x1407C4868 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x1407C68A0 (MxMovePageTables.c)
 * Callees:
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MxMovePageTables @ 0x1407C68A0 (MxMovePageTables.c)
 *     MiIsRegularMemory @ 0x1407C71E0 (MiIsRegularMemory.c)
 *     MxSwapPages @ 0x1407C7254 (MxSwapPages.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MxMovePageTables(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdi
  int v6; // r9d
  __int64 *v7; // rcx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int64 *v11; // r8
  __int64 v12; // r10
  __int64 v13; // rbx
  unsigned __int64 *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 PteShadow; // r10
  __int64 v19; // rdx
  __int64 v20; // r10
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 *v26; // [rsp+38h] [rbp-30h]
  unsigned __int64 v27; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp+10h]
  int v29; // [rsp+80h] [rbp+18h]
  __int64 v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v5 = a1;
  v6 = a3;
  v7 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = a2;
  v9 = *v7;
  result = (__int64)(v7 + 0x12090482600LL);
  if ( (unsigned __int64)(v7 + 0x12090482600LL) <= 0x7F8 )
  {
    result = MiReadPteShadow((__int64)v7, *v7);
    v9 = result;
  }
  v27 = v9;
  v11 = &STACK[0x90482413070];
  v26 = &STACK[0x90482413070];
  if ( (unsigned __int64)&STACK[0x90482413070] <= 0x7F8 )
  {
    result = MiReadPteShadow((__int64)&v27, v9);
    v11 = v26;
    v9 = result;
  }
  v12 = 0xFFFFFFFFFLL;
  v13 = (v9 >> 12) & 0xFFFFFFFFFLL;
  while ( v5 <= v8 )
  {
    if ( (v5 & 0xFFF) == 0 )
    {
      v14 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v15 = *v14;
      result = (__int64)(v14 + 0x12090482600LL);
      if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8 )
      {
        result = MiPteHasShadow();
        if ( (_DWORD)result )
        {
          if ( (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            result = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( result )
            {
              result = *(_QWORD *)(result + 8 * ((v16 >> 3) & 0x1FF));
              if ( (result & 0x20) != 0 )
                v15 |= 0x20uLL;
              if ( (result & 0x42) != 0 )
                v15 |= 0x42uLL;
            }
          }
        }
      }
      v27 = v15;
      if ( (unsigned __int64)v11 <= 0x7F8 )
      {
        result = MiPteHasShadow();
        if ( (_DWORD)result )
        {
          if ( (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            result = (__int64)KeGetCurrentThread();
            v17 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1520LL);
            if ( v17 )
            {
              result = *(_QWORD *)(v17 + 8 * (((unsigned __int64)&v27 >> 3) & 0x1FF));
              if ( (result & 0x20) != 0 )
                v15 |= 0x20uLL;
              if ( (result & 0x42) != 0 )
                v15 |= 0x42uLL;
            }
          }
        }
      }
      v13 = v12 & (v15 >> 12);
    }
    PteShadow = *(_QWORD *)v5;
    if ( v5 + 0x90482413000LL <= 0x7F8 )
    {
      result = MiPteHasShadow();
      if ( (_DWORD)result )
      {
        if ( (PteShadow & 1) != 0 && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
        {
          result = (__int64)KeGetCurrentThread();
          v19 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1520LL);
          if ( v19 )
          {
            result = *(_QWORD *)(v19 + 8 * ((v5 >> 3) & 0x1FF));
            if ( (result & 0x20) != 0 )
              PteShadow |= 0x20uLL;
            if ( (result & 0x42) != 0 )
              PteShadow |= 0x42uLL;
          }
        }
      }
    }
    v25 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      result = 0xFFFFF6FB7DBEDF68uLL;
      if ( v5 != 0xFFFFF6FB7DBEDF68uLL && (v6 != 1 || (PteShadow & 0x80u) == 0LL) )
      {
        if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8 )
          PteShadow = MiReadPteShadow((__int64)&v25, PteShadow);
        v20 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
        if ( v6 )
        {
          MxSwapPages(a5, v5);
          MxMovePageTables((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, v29 - 1, v30, a5);
          v21 = *(_QWORD *)v5;
          v22 = 2040LL;
          if ( v5 + 0x90482413000LL <= 0x7F8 )
            v21 = MiReadPteShadow(v5, *(_QWORD *)v5);
          v25 = v21;
          if ( (unsigned __int64)&STACK[0x90482413030] <= v22 )
            v21 = MiReadPteShadow((__int64)&v25, v21);
          v8 = v28;
          v23 = (v21 >> 12) & 0xFFFFFFFFFLL;
LABEL_51:
          v6 = v29;
          v24 = 48 * v23 - 0x58000000000LL;
          v12 = 0xFFFFFFFFFLL;
          result = (*(_QWORD *)(v24 + 40) ^ v13) & 0xFFFFFFFFFLL;
          *(_QWORD *)(v24 + 40) ^= result;
          goto LABEL_54;
        }
        result = MiIsRegularMemory(v30, v20);
        if ( (_DWORD)result )
          goto LABEL_51;
        v6 = v29;
      }
    }
    v12 = 0xFFFFFFFFFLL;
LABEL_54:
    v11 = v26;
    v5 += 8LL;
  }
  return result;
}
