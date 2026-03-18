/*
 * XREFs of ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C005E158
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C005D8D0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0113728 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 */

__int64 __fastcall ExcludeWindowRects(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagRECT *a3,
        struct _CalcVisRgnData *a4)
{
  struct tagWND *v7; // rbx
  __int64 result; // rax
  LONG v9; // eax
  LONG v10; // ecx
  LONG v11; // edx
  LONG v12; // r8d
  __int64 v13; // rdx

  v7 = a1;
  if ( a1 )
  {
    while ( v7 != a2 )
    {
      if ( (*((_BYTE *)v7 + 55) & 0x10) != 0 && (*((_BYTE *)v7 + 50) & 8) == 0 && (*((_BYTE *)v7 + 48) & 0x20) == 0 )
      {
        v9 = *((_DWORD *)v7 + 30);
        if ( a3->left < v9 )
        {
          v10 = *((_DWORD *)v7 + 28);
          if ( v10 < a3->right )
          {
            v11 = *((_DWORD *)v7 + 31);
            if ( a3->top < v11 )
            {
              v12 = *((_DWORD *)v7 + 29);
              if ( v12 < a3->bottom && v10 < v9 && v12 < v11 )
              {
                if ( *((_DWORD *)a4 + 1) == *((_DWORD *)a4 + 2) )
                {
                  result = ResizeVisExcludeMemory(a4);
                  if ( !(_DWORD)result )
                    return result;
                }
                v13 = *((int *)a4 + 1);
                *(_QWORD *)(*((_QWORD *)a4 + 2) + 8 * v13) = v7;
                *((_DWORD *)a4 + 1) = v13 + 1;
              }
            }
          }
        }
      }
      v7 = (struct tagWND *)*((_QWORD *)v7 + 9);
      if ( !v7 )
        return 1LL;
    }
  }
  return 1LL;
}
