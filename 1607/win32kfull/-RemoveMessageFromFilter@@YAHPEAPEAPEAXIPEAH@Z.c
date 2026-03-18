/*
 * XREFs of ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0098880
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C009B3D0 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C009B5B4 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C009898C (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 */

__int64 __fastcall RemoveMessageFromFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rdi
  int v7; // ebx
  void *const *v8; // rcx
  int v9; // r12d
  void **v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  void **v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  void **v22; // [rsp+50h] [rbp+8h] BYREF
  void **v23; // [rsp+60h] [rbp+18h] BYREF

  v3 = *a1;
  v7 = 0;
  v8 = *a1;
  v23 = 0LL;
  v22 = 0LL;
  v9 = IsMessageAllowedByFilterEx(v8, a2, &v23, &v22);
  if ( v9 )
  {
    v10 = v22;
    v11 = (a2 >> 3) & 0x3F;
    v12 = *((unsigned __int8 *)v22 + v11) & ~(1 << (a2 & 7));
    *((_BYTE *)v22 + v11) = v12;
    if ( !(_BYTE)v12 )
    {
      v13 = 0LL;
      while ( !v10[v13] )
      {
        if ( (unsigned __int64)++v13 >= 8 )
        {
          Win32FreePool(v10, v11, v10);
          v16 = v23;
          v23[((unsigned __int64)a2 >> 9) & 0xF] = 0LL;
          v17 = 0LL;
          while ( !v16[v17] )
          {
            if ( (unsigned __int64)++v17 >= 0x10 )
            {
              Win32FreePool(v16, v14, v15);
              v20 = 0LL;
              v3[(unsigned __int64)a2 >> 13] = 0LL;
              while ( !v3[v20] )
              {
                if ( (unsigned __int64)++v20 >= 8 )
                {
                  Win32FreePool(v3, v18, v19);
                  v3 = 0LL;
                  goto LABEL_13;
                }
              }
              goto LABEL_13;
            }
          }
          break;
        }
      }
    }
  }
LABEL_13:
  if ( a3 )
  {
    LOBYTE(v7) = v9 == 0;
    *a3 = v7;
  }
  if ( v3 != *a1 )
    *a1 = v3;
  return 1LL;
}
