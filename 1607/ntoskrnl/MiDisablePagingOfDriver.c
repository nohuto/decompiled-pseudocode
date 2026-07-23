/*
 * XREFs of MiDisablePagingOfDriver @ 0x14047C4D0
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x14047D840 (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSnapDriverRange @ 0x14047C564 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiDisablePagingOfDriver(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebp
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  result = MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48));
  if ( !(_DWORD)result )
  {
    v3 = 0;
    v4 = 0LL;
    do
    {
      result = MiSnapDriverRange(a1, v3, 4, 0, (__int64)&v7, (__int64)&v8);
      v5 = v7;
      v3 = result;
      if ( v7 )
      {
        if ( v4 )
        {
          if ( v7 < v4 )
            v5 = v4;
          v7 = v5;
        }
        v6 = v8;
        if ( v5 <= v8 )
        {
          result = MiLockCode(a1, v5, v8, 2);
          v4 = v6 + 8;
        }
      }
    }
    while ( v3 );
  }
  return result;
}
