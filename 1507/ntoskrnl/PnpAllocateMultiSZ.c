/*
 * XREFs of PnpAllocateMultiSZ @ 0x14045BA80
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14045ADD4 (PiSwPdoPnPDispatch.c)
 *     PiSwPnPInfoInit @ 0x14045B9B8 (PiSwPnPInfoInit.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpGetMultiSzLength @ 0x140416AD8 (PnpGetMultiSzLength.c)
 */

__int64 __fastcall PnpAllocateMultiSZ(void *Src, __int64 a2, __int64 a3, _QWORD *a4)
{
  NTSTATUS MultiSzLength; // ebx
  size_t v7; // rdi
  PVOID PoolWithTag; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  size_t v12; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0LL;
  MultiSzLength = 0;
  if ( Src )
  {
    MultiSzLength = PnpGetMultiSzLength((__int64)Src, a2, &v12);
    if ( MultiSzLength >= 0 )
    {
      v7 = v12;
      if ( v12 > 2 )
      {
        if ( is_mul_ok(v12, 2uLL) )
        {
          MultiSzLength = 0;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v12, 0x57706E50u);
          *a4 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, Src, 2 * v7);
            v9 = 2 * v7;
            v10 = 2LL;
            do
            {
              v9 -= 2LL;
              *(_WORD *)(v9 + *a4) = 0;
              --v10;
            }
            while ( v10 );
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        else
        {
          return (unsigned int)-1073741675;
        }
      }
    }
  }
  return (unsigned int)MultiSzLength;
}
