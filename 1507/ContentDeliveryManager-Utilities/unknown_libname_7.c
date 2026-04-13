/*
 * XREFs of unknown_libname_7 @ 0x180017D50
 * Callers:
 *     sub_180015D50 @ 0x180015D50 (sub_180015D50.c)
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_1800170FC @ 0x1800170FC (sub_1800170FC.c)
 *     sub_180017C2C @ 0x180017C2C (sub_180017C2C.c)
 * Callees:
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x1800210C8 (-cancel_current_task@Concurrency@@YAXXZ.c)
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

// Microsoft VisualC v7/14 64bit runtime
void __fastcall unknown_libname_7(const void **Src, unsigned __int64 a2, const void *a3)
{
  const void *v3; // r14
  const void **v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // r15
  const void *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  void *v20; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = Src;
  v5 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = (unsigned __int64)Src[3];
    v7 = v6 >> 1;
    if ( v6 >> 1 > v5 / 3 )
    {
      v5 = v7 + v6;
      if ( v6 > 0x7FFFFFFFFFFFFFFELL - v7 )
        v5 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  else
  {
    v5 = a2;
  }
  try
  {
    v8 = v5 + 1;
    v9 = 0LL;
    if ( v5 != -1LL && (v8 > 0x7FFFFFFFFFFFFFFFLL || (v9 = (void *)sub_180021148(2 * v8)) == 0LL) )
      Concurrency::cancel_current_task();
  }
  catch ( ... )
  {
    try
    {
      v11 = 0LL;
      v12 = a2 + 1;
      if ( a2 != -1LL && (v12 > 0x7FFFFFFFFFFFFFFFLL || (v11 = sub_180021148(2 * v12)) == 0) )
        Concurrency::cancel_current_task();
      v20 = (void *)v11;
    }
    catch ( ... )
    {
      sub_1800149BC((void **)Src, 1, 0LL);
      throw;
    }
    v4 = Src;
    v3 = a3;
    v5 = a2;
    v9 = v20;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v4[3] < 8 )
      v10 = v4;
    else
      v10 = *v4;
    memcpy(v9, v10, 2LL * (_QWORD)v3);
  }
  if ( (unsigned __int64)v4[3] >= 8 )
    operator delete((void *)*v4);
  *v4 = v9;
  v4[3] = (const void *)v5;
  v4[2] = v3;
  if ( v5 >= 8 )
    v4 = (const void **)v9;
  *((_WORD *)v4 + (_QWORD)v3) = 0;
}
