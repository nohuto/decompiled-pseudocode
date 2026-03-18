/*
 * XREFs of MiDisablePagingOfDriver @ 0x140573F50
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x14057516C (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiSnapDriverRange @ 0x140574030 (MiSnapDriverRange.c)
 */

char __fastcall MiDisablePagingOfDriver(__int64 a1)
{
  unsigned __int64 v1; // rdx
  int v2; // ebp
  int v3; // eax
  int v4; // esi
  ULONG_PTR *v5; // rbx
  ULONG_PTR *v6; // rdx
  unsigned __int64 v7; // rdi
  ULONG_PTR *v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = a1;
  if ( (*(_BYTE *)(8 * ((v1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (LOBYTE(v3) = *(_BYTE *)(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81, (_BYTE)v3 != 0x81) )
  {
    v4 = 0;
    v5 = 0LL;
    do
    {
      v3 = MiSnapDriverRange(v2, v4, 4, 0, (__int64)&v9, (__int64)&v10);
      v6 = v9;
      v4 = v3;
      if ( v9 )
      {
        if ( v5 )
        {
          if ( v9 < v5 )
            v6 = v5;
          v9 = v6;
        }
        v7 = v10;
        if ( (unsigned __int64)v6 <= v10 )
        {
          LOBYTE(v3) = MiLockCode(v2, v6, v10, 2);
          v5 = (ULONG_PTR *)(v7 + 8);
        }
      }
    }
    while ( v4 );
  }
  return v3;
}
