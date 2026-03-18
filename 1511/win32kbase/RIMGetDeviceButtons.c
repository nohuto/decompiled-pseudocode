/*
 * XREFs of RIMGetDeviceButtons @ 0x1C0007494
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00C3E6C (RIMPopulatePointerDevice.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0007A8C (rimHidP_GetSpecificButtonCaps.c)
 *     RIMPbuttonToCursor @ 0x1C0009DAC (RIMPbuttonToCursor.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     RIMAllocatePTPButtons @ 0x1C00D1278 (RIMAllocatePTPButtons.c)
 */

__int64 __fastcall RIMGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  int v11; // r12d
  unsigned __int16 v12; // di
  __int64 v13; // rbp
  int SpecificButtonCaps; // edi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int i; // r8d
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v24; // rax
  int v25; // edx
  int v26; // ecx
  bool v27; // zf
  __int64 v28; // rax
  int v29; // ecx
  unsigned int v30; // r10d
  int v31; // [rsp+78h] [rbp+10h]
  int v32; // [rsp+7Ch] [rbp+14h]

  v5 = (unsigned __int16)a4[23];
  a5 = (unsigned __int16)a4[23];
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( *a4 != 5 )
    v12 = *(_WORD *)(a2 + 732);
  v13 = Win32AllocPool(72 * v5, 1701344082LL);
  if ( !v13 )
  {
    SpecificButtonCaps = -1073741668;
    goto LABEL_14;
  }
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 0, v12, 0, v13, (__int64)&a5, a3);
  if ( SpecificButtonCaps < 0 )
    goto LABEL_13;
  v15 = *(_DWORD *)(a2 + 24);
  v16 = a5;
  *(_DWORD *)(a2 + 312) = a5;
  if ( (unsigned int)(v15 - 6) > 1 )
  {
    v17 = *(unsigned int *)(a2 + 720);
    *(_DWORD *)(a2 + 308) = v17;
    if ( v15 == 8 )
      SpecificButtonCaps = RIMAllocatePTPButtons(a2, v13, (unsigned int)v16);
    else
      *(_QWORD *)(a2 + 328) = Win32AllocPoolZInit(12 * v17);
    if ( SpecificButtonCaps >= 0 && *(_QWORD *)(a2 + 328) )
    {
      for ( i = 0; i < *(_DWORD *)(a2 + 308); *(_DWORD *)(*(_QWORD *)(a2 + 328) + 4 * v20) = 1 )
      {
        ++*(_DWORD *)(a1 + 696);
        v19 = i++;
        v20 = 3 * v19;
        *(_DWORD *)(*(_QWORD *)(a2 + 328) + 4 * v20 + 4) = *(_DWORD *)(a1 + 696);
      }
      goto LABEL_12;
    }
LABEL_38:
    SpecificButtonCaps = -1073741668;
    goto LABEL_12;
  }
  *(_DWORD *)(a2 + 308) = 0;
  v24 = Win32AllocPoolZInit(12 * v16);
  *(_QWORD *)(a2 + 328) = v24;
  if ( !v24 )
    goto LABEL_12;
  if ( !*(_DWORD *)(a2 + 312) )
    goto LABEL_38;
  while ( v10 < 2 )
  {
    if ( *(_WORD *)(v13 + 72LL * v9) == 13 )
    {
      v25 = *(unsigned __int16 *)(v13 + 72LL * v9 + 56);
      if ( (unsigned __int16)(v25 - 60) <= 9u )
      {
        v26 = 577;
        if ( _bittest(&v26, v25 - 60) )
        {
          v27 = (_WORD)v25 == 66;
          if ( (_WORD)v25 == 66 )
            goto LABEL_29;
          if ( !v10 || *(_WORD *)(v13 + 72LL * (v10 - 1) + 56) == 66 )
          {
            v27 = (_WORD)v25 == 66;
LABEL_29:
            if ( v27 )
              v11 = 1;
            v28 = v10;
            ++*(_DWORD *)(a1 + 696);
            ++v10;
            v29 = *(_DWORD *)(a1 + 696);
            ++*(_DWORD *)(a2 + 308);
            *(&v31 + v28) = v29;
          }
        }
      }
    }
    if ( ++v9 >= *(_DWORD *)(a2 + 312) )
      break;
  }
  if ( !v11 )
    goto LABEL_38;
  *(_DWORD *)(*(_QWORD *)(a2 + 328) + 4LL) = v31;
  **(_DWORD **)(a2 + 328) = RIMPbuttonToCursor(66LL);
  if ( v10 > v30 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 328) + 16LL) = v32;
    *(_DWORD *)(*(_QWORD *)(a2 + 328) + 12LL) = RIMPbuttonToCursor(69LL);
  }
LABEL_12:
  *(_DWORD *)(a2 + 316) += *(_DWORD *)(a2 + 312);
LABEL_13:
  Win32FreePool(v13);
LABEL_14:
  v21 = *(_DWORD *)(a2 + 312);
  if ( !v21 )
    SpecificButtonCaps = -1073741668;
  if ( SpecificButtonCaps != -1073741668 )
  {
    v22 = Win32AllocPool(2LL * v21, 1701344082LL);
    *(_QWORD *)(a2 + 1416) = v22;
    if ( !v22 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}
