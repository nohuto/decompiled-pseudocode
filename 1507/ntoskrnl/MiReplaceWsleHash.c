/*
 * XREFs of MiReplaceWsleHash @ 0x140108E30
 * Callers:
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     MiExchangeWsle @ 0x1401329EC (MiExchangeWsle.c)
 * Callees:
 *     MI_WSLE_HASH_VA @ 0x140108EB4 (MI_WSLE_HASH_VA.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall MiReplaceWsleHash(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  __int64 v6; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // zf
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  ULONG_PTR v21; // rdx

  if ( (a2 & 4) != 0 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 184);
    v8 = *(_QWORD *)(v6 + 88);
    if ( !v8 || (v8 & 1) != 0 )
    {
      if ( (a2 & 0x800000000000LL) != 0 )
        v9 = a2 | 0xFFFF000000000000uLL;
      else
        v9 = a2 & 0xFFFFFFFFFFFFLL;
      v10 = (_QWORD *)MI_WSLE_HASH_VA(v6, v9, a3, a4);
      *v10 = v11;
    }
    else
    {
      v12 = a2 & 0x800000000000LL;
      if ( (a2 & 1) != 0 )
      {
        if ( v12 )
          v13 = a2 | 0xFFFF000000000000uLL;
        else
          v13 = a2 & 0xFFFFFFFFFFFFLL;
        if ( (v13 & 0x800000000000LL) != 0 )
        {
          if ( v12 )
            v14 = a2 | 0xFFFF000000000000uLL;
          else
            v14 = a2 & 0xFFFFFFFFFFFFLL;
          v15 = v14 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL;
        }
        else
        {
          if ( v12 )
            v16 = a2 | 0xFFFF000000000000uLL;
          else
            v16 = a2 & 0xFFFFFFFFFFFFLL;
          v15 = v16 & 0xFFFFFFFFF000LL | 1;
        }
      }
      else
      {
        v15 = 0LL;
      }
      v17 = (unsigned __int8)(v15 >> 12);
      while ( 1 )
      {
        if ( v15 )
        {
          v19 = *(_QWORD *)(v8 + 16 * v17);
          if ( (v19 & 1) != 0 )
            v20 = (v19 & 0x800000000000LL) != 0
                ? v19 & 0xFFFFFFFFF000LL | 0xFFFF000000000001uLL
                : v19 & 0xFFFFFFFFF000LL | 1;
          else
            v20 = 0LL;
          v18 = v20 == v15;
        }
        else
        {
          v18 = *(_QWORD *)(v8 + 16 * v17) == 0LL;
        }
        if ( v18 )
          break;
        v17 = (v17 + 1) & -(__int64)((unsigned __int64)(v17 + 1) < 0x100);
        if ( v17 == (unsigned __int8)(v15 >> 12) )
        {
          v17 = 0xFFFFFFFFFLL;
          break;
        }
      }
      if ( v17 == 0xFFFFFFFFFLL )
      {
        if ( v12 )
          v21 = a2 | 0xFFFF000000000000uLL;
        else
          v21 = a2 & 0xFFFFFFFFFFFFLL;
        KeBugCheckEx(0x1Au, 0x41282uLL, BugCheckParameter2, v21, a4);
      }
      *(_QWORD *)(v8 + 16 * v17 + 8) = a3;
    }
  }
}
