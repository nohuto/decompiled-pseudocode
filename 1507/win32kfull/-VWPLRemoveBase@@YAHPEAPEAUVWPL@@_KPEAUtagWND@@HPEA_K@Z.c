/*
 * XREFs of ?VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E3ABC
 * Callers:
 *     ClearHungFlag @ 0x1C0089EE8 (ClearHungFlag.c)
 *     FreeWindowGCData @ 0x1C008A0F0 (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C008A1A4 (FreeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00E2230 (_ChangeWindowMessageFilterEx.c)
 *     _DeregisterShellHookWindow @ 0x1C00FF250 (_DeregisterShellHookWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLRemoveBase(struct VWPL **a1, __int64 a2, struct tagWND *a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int *v5; // r10
  unsigned int v8; // ecx
  unsigned int i; // r8d
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  v5 = (unsigned int *)*a1;
  if ( !*a1 || v5[3] )
    return 0LL;
  v8 = *v5;
  for ( i = 0; i < v8; ++i )
  {
    if ( a3 == *(struct tagWND **)&v5[4 * i + 6] )
      break;
  }
  if ( i >= v8 )
    return 0LL;
  v11 = 2LL * i;
  v12 = *(_QWORD *)&v5[4 * i + 4];
  *(_QWORD *)&v5[2 * v11 + 4] = 0LL;
  *(_QWORD *)&v5[2 * v11 + 6] = 0LL;
  --*v5;
  if ( a5 )
    *a5 = v12;
  if ( *v5 )
  {
    for ( ; i < *v5; *(_OWORD *)&v5[2 * v13] = *(_OWORD *)&v5[2 * v14] )
    {
      v13 = 2 * (i + 1LL);
      v14 = 2 * (++i + 1LL);
    }
    *(_QWORD *)&v5[4 * *v5 + 6] = 0LL;
    if ( v5[1] - *v5 >= v5[2] )
    {
      v15 = UserReAllocPoolZInit(v5, 16 * (v5[1] + 1), 16 * (*v5 + 1), 1819702101LL);
      if ( v15 )
      {
        *(_DWORD *)(v15 + 4) = *(_DWORD *)v15;
        *a1 = (struct VWPL *)v15;
      }
    }
  }
  else
  {
    Win32FreePool(v5);
    *a1 = 0LL;
  }
  return 1LL;
}
