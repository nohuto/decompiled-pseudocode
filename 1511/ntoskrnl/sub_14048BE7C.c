/*
 * XREFs of sub_14048BE7C @ 0x14048BE7C
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     sub_14045751C @ 0x14045751C (sub_14045751C.c)
 */

__int64 __fastcall sub_14048BE7C(_DWORD *a1, void *a2, unsigned int a3, _DWORD *a4, size_t Size)
{
  int v9; // edi
  size_t v10; // rcx
  void *Src; // [rsp+48h] [rbp+10h] BYREF

  Src = 0LL;
  *(_BYTE *)Size = 1;
  v9 = sub_14045751C((_QWORD *)((unsigned __int64)&Src & -(__int64)(a2 != 0LL)), &Size);
  if ( v9 >= 0 )
  {
    v10 = (unsigned int)Size;
    *a4 = Size;
    if ( a1 )
      *a1 = 3;
    if ( (unsigned int)v10 > a3 )
    {
      v9 = -1073741789;
    }
    else if ( a2 )
    {
      memmove(a2, Src, v10);
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v9;
}
