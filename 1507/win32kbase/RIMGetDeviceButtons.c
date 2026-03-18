/*
 * XREFs of RIMGetDeviceButtons @ 0x1C00737A8
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00C304C (RIMPopulatePointerDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMPbuttonToCursor @ 0x1C0073214 (RIMPbuttonToCursor.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0073DA0 (rimHidP_GetSpecificButtonCaps.c)
 *     RIMAllocatePTPButtons @ 0x1C00CFE9C (RIMAllocatePTPButtons.c)
 */

__int64 __fastcall RIMGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5)
{
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  int v10; // r12d
  unsigned __int16 v11; // di
  __int64 v12; // rbp
  int SpecificButtonCaps; // edi
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int i; // r8d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  void *v22; // rax
  int v23; // edx
  int v24; // ecx
  bool v25; // zf
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // r10d
  int v29; // [rsp+78h] [rbp+10h]
  int v30; // [rsp+7Ch] [rbp+14h]

  a5 = (unsigned __int16)a4[23];
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *a4 != 5 )
    v11 = *(_WORD *)(a2 + 716);
  v12 = Win32AllocPool();
  if ( !v12 )
  {
    SpecificButtonCaps = -1073741668;
    goto LABEL_14;
  }
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 0, v11, 0, v12, (__int64)&a5, a3);
  if ( SpecificButtonCaps < 0 )
    goto LABEL_13;
  v14 = *(_DWORD *)(a2 + 24);
  v15 = a5;
  *(_DWORD *)(a2 + 296) = a5;
  if ( (unsigned int)(v14 - 6) > 1 )
  {
    v16 = *(unsigned int *)(a2 + 704);
    *(_DWORD *)(a2 + 292) = v16;
    if ( v14 == 8 )
      SpecificButtonCaps = RIMAllocatePTPButtons(a2, v12, (unsigned int)v15);
    else
      *(_QWORD *)(a2 + 312) = Win32AllocPoolZInit(12 * v16);
    if ( SpecificButtonCaps >= 0 && *(_QWORD *)(a2 + 312) )
    {
      for ( i = 0; i < *(_DWORD *)(a2 + 292); *(_DWORD *)(*(_QWORD *)(a2 + 312) + 4 * v19) = 1 )
      {
        ++*(_DWORD *)(a1 + 664);
        v18 = i++;
        v19 = 3 * v18;
        *(_DWORD *)(*(_QWORD *)(a2 + 312) + 4 * v19 + 4) = *(_DWORD *)(a1 + 664);
      }
      goto LABEL_12;
    }
LABEL_38:
    SpecificButtonCaps = -1073741668;
    goto LABEL_12;
  }
  *(_DWORD *)(a2 + 292) = 0;
  v22 = Win32AllocPoolZInit(12 * v15);
  *(_QWORD *)(a2 + 312) = v22;
  if ( !v22 )
    goto LABEL_12;
  if ( !*(_DWORD *)(a2 + 296) )
    goto LABEL_38;
  while ( v9 < 2 )
  {
    if ( *(_WORD *)(v12 + 72LL * v8) == 13 )
    {
      v23 = *(unsigned __int16 *)(v12 + 72LL * v8 + 56);
      if ( (unsigned __int16)(v23 - 60) <= 9u )
      {
        v24 = 577;
        if ( _bittest(&v24, v23 - 60) )
        {
          v25 = (_WORD)v23 == 66;
          if ( (_WORD)v23 == 66 )
            goto LABEL_29;
          if ( !v9 || *(_WORD *)(v12 + 72LL * (v9 - 1) + 56) == 66 )
          {
            v25 = (_WORD)v23 == 66;
LABEL_29:
            if ( v25 )
              v10 = 1;
            v26 = v9;
            ++*(_DWORD *)(a1 + 664);
            ++v9;
            v27 = *(_DWORD *)(a1 + 664);
            ++*(_DWORD *)(a2 + 292);
            *(&v29 + v26) = v27;
          }
        }
      }
    }
    if ( ++v8 >= *(_DWORD *)(a2 + 296) )
      break;
  }
  if ( !v10 )
    goto LABEL_38;
  *(_DWORD *)(*(_QWORD *)(a2 + 312) + 4LL) = v29;
  **(_DWORD **)(a2 + 312) = RIMPbuttonToCursor(66);
  if ( v9 > v28 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 312) + 16LL) = v30;
    *(_DWORD *)(*(_QWORD *)(a2 + 312) + 12LL) = RIMPbuttonToCursor(69);
  }
LABEL_12:
  *(_DWORD *)(a2 + 300) += *(_DWORD *)(a2 + 296);
LABEL_13:
  Win32FreePool();
LABEL_14:
  if ( !*(_DWORD *)(a2 + 296) )
    SpecificButtonCaps = -1073741668;
  if ( SpecificButtonCaps != -1073741668 )
  {
    v20 = Win32AllocPool();
    *(_QWORD *)(a2 + 1400) = v20;
    if ( !v20 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}
