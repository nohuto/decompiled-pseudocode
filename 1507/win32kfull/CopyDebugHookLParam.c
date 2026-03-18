/*
 * XREFs of CopyDebugHookLParam @ 0x1C020DE5C
 * Callers:
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C02138C4 (fnHkINLPDEBUGHOOKSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyDebugHookLParam(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // r10
  unsigned int v4; // r9d
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  __int128 v9; // xmm0
  _OWORD *v10; // rax
  int v11; // ecx
  _OWORD *v12; // rax
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx

  v3 = *(__int128 **)(a3 + 8);
  v4 = 1;
  if ( !v3 )
    return 0;
  if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7uLL:
        goto LABEL_12;
      case 0xAuLL:
        if ( *(_DWORD *)(a3 + 24) != 5 )
          return 0;
        goto LABEL_14;
      case 0xCuLL:
        *((_DWORD *)v3 + 7) = 0;
        v14 = *(_QWORD *)(a3 + 8);
        *(_OWORD *)a2 = *(_OWORD *)v14;
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v14 + 16);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(v14 + 32);
        v15 = *(_DWORD *)(a2 + 24);
        if ( (unsigned __int16)v15 < 0x400u && (MessageTable[(unsigned __int16)v15] & 0x100) != 0 )
          *(_QWORD *)(a2 + 8) = 0LL;
        return v4;
    }
    if ( a1 != -1LL )
      return 0;
LABEL_26:
    *((_DWORD *)v3 + 3) = 0;
    *(_DWORD *)(*(_QWORD *)(a3 + 8) + 44LL) = 0;
    v12 = *(_OWORD **)(a3 + 8);
    *(_OWORD *)a2 = *v12;
    *(_OWORD *)(a2 + 16) = v12[1];
    *(_OWORD *)(a2 + 32) = v12[2];
    v13 = *(_DWORD *)(a2 + 8);
    if ( (unsigned __int16)v13 < 0x400u && (MessageTable[(unsigned __int16)v13] & 0x100) != 0 )
      *(_QWORD *)(a2 + 24) = 0LL;
    return v4;
  }
  if ( a1 == 6 )
    goto LABEL_26;
  if ( a1 <= 1 )
  {
    *(_OWORD *)a2 = *v3;
    *(_QWORD *)(a2 + 16) = *((_QWORD *)v3 + 2);
    if ( (unsigned __int16)*(_DWORD *)a2 < 0x400u && (MessageTable[(unsigned __int16)*(_DWORD *)a2] & 0x100) != 0 )
      *(_DWORD *)(a2 + 4) = 0;
    return v4;
  }
  if ( a1 == 3 )
    goto LABEL_26;
  if ( a1 != 4 )
  {
    if ( a1 != 5 )
      return 0;
    v5 = *(_DWORD *)(a3 + 24);
    if ( v5 )
    {
      v6 = v5 - 3;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 == 1 )
          {
LABEL_12:
            *((_DWORD *)v3 + 5) = 0;
            *(_DWORD *)(*(_QWORD *)(a3 + 8) + 36LL) = 0;
            v8 = *(_QWORD *)(a3 + 8);
            *(_OWORD *)a2 = *(_OWORD *)v8;
            *(_OWORD *)(a2 + 16) = *(_OWORD *)(v8 + 16);
            *(_QWORD *)(a2 + 32) = *(_QWORD *)(v8 + 32);
            return v4;
          }
          return 0;
        }
        *((_DWORD *)v3 + 1) = 0;
        v9 = *(_OWORD *)*(_QWORD *)(a3 + 8);
LABEL_15:
        *(_OWORD *)a2 = v9;
        return v4;
      }
    }
LABEL_14:
    v9 = *v3;
    goto LABEL_15;
  }
  *((_DWORD *)v3 + 5) = 0;
  v10 = *(_OWORD **)(a3 + 8);
  *(_OWORD *)a2 = *v10;
  *(_OWORD *)(a2 + 16) = v10[1];
  v11 = *(_DWORD *)(a2 + 16);
  if ( (unsigned __int16)v11 < 0x400u && (MessageTable[(unsigned __int16)v11] & 0x100) != 0 )
    *(_QWORD *)a2 = 0LL;
  return v4;
}
