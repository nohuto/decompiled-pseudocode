/*
 * XREFs of sfac_ComputeMapping @ 0x1C00A51A4
 * Callers:
 *     fs_NewSfnt @ 0x1C00A50AC (fs_NewSfnt.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00A631C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00A6330 (sfac_GetDataPtr.c)
 *     sfac_ComputeBinarySearchParams @ 0x1C00A63DC (sfac_ComputeBinarySearchParams.c)
 */

__int64 __fastcall sfac_ComputeMapping(__int64 a1, __int16 a2, __int16 a3)
{
  int v3; // esi
  __int64 v7; // rbp
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  _WORD *v15; // rcx
  unsigned int v16; // r8d
  unsigned __int64 v17; // r10
  __int16 v18; // ax
  _WORD *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 == -1 )
  {
    *(_DWORD *)(a1 + 212) = 1;
    return 0LL;
  }
  v7 = *(unsigned int *)(a1 + 92);
  result = sfac_GetDataPtr(a1, 0, *(_DWORD *)(a1 + 92), 8, 0, (__int64)&v21);
  v9 = result;
  if ( (_DWORD)result )
    return result;
  v10 = v21;
  if ( !v21 )
  {
    *(_DWORD *)(a1 + 212) = 1;
    return 0LL;
  }
  if ( (unsigned int)v7 < 4
    || (v11 = v21 + 4, v12 = 8 * (unsigned __int16)__ROR2__(*(_WORD *)(v21 + 2), 8), v12 > 0xFFFF)
    || (v13 = v11 + (unsigned __int16)v12, v13 < v11) )
  {
    *(_DWORD *)(a1 + 20) = 0;
    goto LABEL_36;
  }
  if ( v11 >= v13 )
    goto LABEL_27;
  while ( !v3 )
  {
    if ( v11 > v10 + (unsigned int)(v7 - 8) )
      goto LABEL_27;
    if ( __ROR2__(*(_WORD *)v11, 8) == a2 && __ROR2__(*(_WORD *)(v11 + 2), 8) == a3 )
    {
      v3 = 1;
      *(_DWORD *)(a1 + 20) = _byteswap_ulong(*(_DWORD *)(v11 + 4));
    }
    v11 += 8LL;
    if ( v11 >= v13 )
    {
      if ( !v3 )
        goto LABEL_27;
      break;
    }
  }
  v14 = *(unsigned int *)(a1 + 20);
  v15 = (_WORD *)(v14 + v10);
  if ( v14 + v10 < v10
    || (v16 = v14 + 6, (int)v14 + 6 < (unsigned int)v14)
    || (*(_DWORD *)(a1 + 20) = v16, v17 = v7 + v10 - 2, (unsigned __int64)v15 > v17) )
  {
LABEL_27:
    *(_DWORD *)(a1 + 20) = 0;
LABEL_36:
    v20 = *(unsigned int *)(a1 + 12);
    *(_DWORD *)(a1 + 212) = 1;
    InvokeReleaseSfntFrag(v20);
    return 5126LL;
  }
  v18 = __ROR2__(*v15, 8);
  *(_WORD *)(a1 + 208) = v18;
  if ( v18 )
  {
    switch ( v18 )
    {
      case 4:
        v19 = (_WORD *)(v10 + v16);
        *(_DWORD *)(a1 + 212) = 4;
        if ( (unsigned __int64)v19 > v17 )
        {
          *(_DWORD *)(a1 + 20) = 0;
          v9 = 5126;
          *(_DWORD *)(a1 + 212) = 1;
        }
        else
        {
          sfac_ComputeBinarySearchParams(__ROR2__(*v19, 8) >> 1, a1 + 218, a1 + 220, a1 + 222);
        }
        break;
      case 2:
        *(_DWORD *)(a1 + 212) = 3;
        break;
      case 6:
        *(_DWORD *)(a1 + 212) = 5;
        break;
      default:
        *(_DWORD *)(a1 + 212) = 1;
        v9 = 5130;
        break;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 212) = 2;
  }
  InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
  return v9;
}
