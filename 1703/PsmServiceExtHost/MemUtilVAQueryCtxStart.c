/*
 * XREFs of MemUtilVAQueryCtxStart @ 0x180039204
 * Callers:
 *     MemUtilQueryProcessProcessModified @ 0x180038E44 (MemUtilQueryProcessProcessModified.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MemUtilVAQueryCtxStart(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  LPVOID v7; // rax
  unsigned int v8; // ecx

  v7 = VirtualAlloc(0LL, 0x10000uLL, 0x3000u, 4u);
  v8 = 0;
  a1[4] = v7;
  if ( v7 )
  {
    *a1 = a2;
    a1[2] = MemUtilPrivateModifiedVaQueryCallback;
    a1[3] = a4;
  }
  else
  {
    return 8;
  }
  return v8;
}
