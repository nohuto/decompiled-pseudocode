/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18002D35C
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180029488 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_LoadOrientationPreference@CImmersiveWindowFactory@@AEAAJXZ @ 0x18002BC54 (-_LoadOrientationPreference@CImmersiveWindowFactory@@AEAAJXZ.c)
 * Callees:
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18002B734 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAppUserModelId(char *a1, unsigned __int16 **a2, unsigned __int16 **a3)
{
  __int64 v5; // r8
  signed __int64 v6; // r9
  wchar_t *v7; // rcx
  int v8; // edx
  wchar_t v9; // ax
  wchar_t *v10; // rax
  wchar_t *v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  IMalloc *v15; // rcx
  __int16 v16; // ax
  signed __int64 v17; // r9
  IMalloc *v18; // rcx
  __int16 v19; // ax
  _BYTE v21[32]; // [rsp+0h] [rbp-100h] BYREF
  IMalloc v22[18]; // [rsp+20h] [rbp-E0h] BYREF
  IMalloc v23[18]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str[136]; // [rsp+140h] [rbp+40h] BYREF

  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( v21 != (_BYTE *)-32LL )
    LOWORD(v22[0].lpVtbl) = 0;
  if ( v23 )
    LOWORD(v23[0].lpVtbl) = 0;
  v5 = 130LL;
  v6 = a1 - (char *)Str;
  v7 = Str;
  v8 = 0;
  do
  {
    if ( v5 == -2147483516 )
      break;
    v9 = *(wchar_t *)((char *)v7 + v6);
    if ( !v9 )
      break;
    *v7++ = v9;
    --v5;
  }
  while ( v5 );
  if ( !v5 )
  {
    --v7;
    v8 = -2147024774;
  }
  *v7 = 0;
  if ( v8 < 0 )
  {
    v12 = -2147024809;
  }
  else
  {
    v10 = wcsrchr(Str, 0x21u);
    if ( Str[0] != 33 && v10 && (v11 = v10 + 1, v10[1]) )
    {
      v12 = 1;
      *v10 = 0;
      v13 = 65LL;
      if ( v21 == (_BYTE *)-32LL )
        goto LABEL_27;
      v14 = 65LL;
      v12 = 0;
      v15 = v22;
      do
      {
        if ( v14 == -2147483581 )
          break;
        v16 = *(_WORD *)((char *)&v15->lpVtbl + (char *)Str - (char *)v22);
        if ( !v16 )
          break;
        LOWORD(v15->lpVtbl) = v16;
        v15 = (IMalloc *)((char *)v15 + 2);
        --v14;
      }
      while ( v14 );
      if ( !v14 )
      {
        v15 = (IMalloc *)((char *)v15 - 2);
        v12 = -2147024774;
      }
      LOWORD(v15->lpVtbl) = 0;
      if ( v12 >= 0 )
      {
LABEL_27:
        if ( v23 )
        {
          v12 = 0;
          v17 = (char *)v11 - (char *)v23;
          v18 = v23;
          do
          {
            if ( v13 == -2147483581 )
              break;
            v19 = *(_WORD *)((char *)&v18->lpVtbl + v17);
            if ( !v19 )
              break;
            LOWORD(v18->lpVtbl) = v19;
            v18 = (IMalloc *)((char *)v18 + 2);
            --v13;
          }
          while ( v13 );
          if ( !v13 )
          {
            v18 = (IMalloc *)((char *)v18 - 2);
            v12 = -2147024774;
          }
          LOWORD(v18->lpVtbl) = 0;
        }
      }
    }
    else
    {
      v12 = -2147024809;
    }
  }
  if ( a2 && v12 >= 0 )
    v12 = CoAllocString(v22, a2);
  if ( a3 )
  {
    if ( v12 >= 0 )
    {
      v12 = CoAllocString(v23, a3);
      if ( v12 < 0 )
      {
        if ( a2 )
        {
          CoTaskMemFree(*a2);
          *a2 = 0LL;
        }
      }
    }
  }
  return (unsigned int)v12;
}
