/*
 * XREFs of ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C00ACA7C
 * Callers:
 *     SetHungFlag @ 0x1C00448B4 (SetHungFlag.c)
 *     InternalInvalidate3 @ 0x1C008F748 (InternalInvalidate3.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00E2230 (_ChangeWindowMessageFilterEx.c)
 *     _RegisterShellHookWindow @ 0x1C00FE290 (_RegisterShellHookWindow.c)
 *     SetGestureConfigSettings @ 0x1C0128280 (SetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLAddBase(struct VWPL **a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  unsigned int *v4; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  struct tagWND **v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax

  v4 = (unsigned int *)*a1;
  if ( *a1 )
  {
    if ( !v4[3] )
    {
      v9 = *v4;
      v10 = 0;
      if ( *v4 )
      {
        v11 = (struct tagWND **)(v4 + 6);
        while ( a3 != *v11 )
        {
          ++v10;
          v11 += 2;
          if ( v10 >= v9 )
            goto LABEL_7;
        }
        return 0LL;
      }
LABEL_7:
      v12 = v4[1];
      if ( v9 < (unsigned int)v12 )
      {
LABEL_8:
        result = 1LL;
        v14 = 2LL * *v4;
        *(_QWORD *)&v4[2 * v14 + 6] = a3;
        *(_QWORD *)&v4[2 * v14 + 4] = a2;
        ++*v4;
        return result;
      }
      if ( (unsigned __int64)(16 * v12) <= 0xFFFFFFFF )
      {
        v17 = 16 * v12 + 16;
        if ( v17 >= 0x10 )
        {
          v18 = 16LL * v4[2];
          if ( v18 <= 0xFFFFFFFF && (unsigned int)v18 + v17 >= v17 )
          {
            v19 = UserReAllocPoolZInit(v4, v17, (unsigned int)v18 + v17, 1819702101LL);
            v4 = (unsigned int *)v19;
            if ( v19 )
            {
              *(_DWORD *)(v19 + 4) += *(_DWORD *)(v19 + 8);
              *a1 = (struct VWPL *)v19;
              goto LABEL_8;
            }
          }
        }
      }
    }
  }
  else
  {
    v15 = 16 * a4;
    if ( 16 * (unsigned __int64)a4 <= 0xFFFFFFFF && v15 < 0xFFFFFFF0 )
    {
      v16 = Win32AllocPoolZInit(v15 + 16, 1819702101LL);
      v4 = (unsigned int *)v16;
      if ( v16 )
      {
        *(_DWORD *)v16 = 0;
        *(_DWORD *)(v16 + 12) = 0;
        *(_DWORD *)(v16 + 4) = a4;
        *(_DWORD *)(v16 + 8) = a4;
        *a1 = (struct VWPL *)v16;
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
