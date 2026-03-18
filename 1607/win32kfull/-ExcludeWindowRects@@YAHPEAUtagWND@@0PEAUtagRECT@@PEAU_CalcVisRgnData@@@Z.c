/*
 * XREFs of ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C00D644C
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00D5C54 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C01CA888 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 */

__int64 __fastcall ExcludeWindowRects(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagRECT *a3,
        struct _CalcVisRgnData *a4)
{
  struct tagWND *v7; // rbx
  const struct tagRECT *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx

  v7 = a1;
  if ( a1 )
  {
    while ( v7 != a2 )
    {
      v8 = (const struct tagRECT *)((char *)v7 + 112);
      if ( (*((_BYTE *)v7 + 55) & 0x10) != 0
        && (*((_BYTE *)v7 + 50) & 8) == 0
        && (*((_BYTE *)v7 + 48) & 0x20) == 0
        && a3->left < *((_DWORD *)v7 + 30)
        && v8->left < a3->right
        && a3->top < *((_DWORD *)v7 + 31)
        && *((_DWORD *)v7 + 29) < a3->bottom
        && !IsRectEmptyInl(v8) )
      {
        if ( *((_DWORD *)a4 + 1) == *((_DWORD *)a4 + 2) )
        {
          result = ResizeVisExcludeMemory(a4);
          if ( !(_DWORD)result )
            return result;
        }
        v10 = *((int *)a4 + 1);
        *(_QWORD *)(*((_QWORD *)a4 + 2) + 8 * v10) = v7;
        *((_DWORD *)a4 + 1) = v10 + 1;
      }
      v7 = (struct tagWND *)*((_QWORD *)v7 + 9);
      if ( !v7 )
        return 1LL;
    }
  }
  return 1LL;
}
