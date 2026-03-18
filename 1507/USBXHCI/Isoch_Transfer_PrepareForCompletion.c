/*
 * XREFs of Isoch_Transfer_PrepareForCompletion @ 0x1C0028174
 * Callers:
 *     Isoch_Transfer_Complete @ 0x1C0027E38 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0027EEC (Isoch_Transfer_CompleteCancelable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x1C0029170 (WPP_RECORDER_SF_DDqdDDDD.c)
 */

void __fastcall Isoch_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // edi
  __int64 v6; // r11
  _DWORD *v7; // r10
  _DWORD *v8; // rax
  int v9; // eax
  int v10; // eax
  struct _MDL *v11; // rcx

  v5 = 0;
  v6 = 0LL;
  v7 = *(_DWORD **)(a2 + 32);
  for ( v7[9] = *(_DWORD *)(a2 + 68); (unsigned int)v6 < *(_DWORD *)(a2 + 80); v6 = (unsigned int)(v6 + 1) )
  {
    v8 = &v7[2 * v6 + 37 + v6];
    if ( a3 == -1 )
    {
      if ( *v8 == -1 )
        *v8 = -1073610752;
    }
    else
    {
      *v8 = a3;
    }
    if ( *v8 )
    {
      ++v7[34];
      ++*(_DWORD *)(a1 + 252);
    }
    else
    {
      ++v5;
    }
    ++*(_DWORD *)(a1 + 248);
  }
  if ( a4 == -1 )
  {
    if ( v7[34] == *(_DWORD *)(a2 + 80) )
      v7[1] = -1073739008;
    else
      v7[1] = 0;
  }
  else
  {
    v7[1] = a4;
  }
  v9 = v7[1];
  if ( v9 <= -1073738240 )
  {
    if ( v9 == -1073738240 )
    {
      v10 = -1073741637;
      goto LABEL_32;
    }
    if ( v9 == -2147483136 || v9 == -2147482880 || v9 == -2147482112 || v9 == -1073739264 )
    {
      v10 = -1073741811;
      goto LABEL_32;
    }
LABEL_28:
    v10 = -1073741823;
    goto LABEL_32;
  }
  switch ( v9 )
  {
    case -1073737728:
      v10 = -1073741670;
      break;
    case -1073713152:
      v10 = -1073741810;
      break;
    case -1073676288:
      v10 = -1073741536;
      break;
    default:
      if ( (unsigned int)v9 <= 1 )
      {
        v10 = 0;
        break;
      }
      goto LABEL_28;
  }
LABEL_32:
  *(_DWORD *)(a2 + 52) = v10;
  ++*(_DWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 240) += *(unsigned int *)(a2 + 68);
  if ( *(int *)(a2 + 52) < 0 )
    ++*(_DWORD *)(a1 + 236);
  WPP_RECORDER_SF_DDqdDDDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    a3,
    a4);
  v11 = *(struct _MDL **)(a2 + 56);
  if ( v11 && v11 != *(struct _MDL **)(*(_QWORD *)(a2 + 32) + 48LL) )
  {
    IoFreeMdl(v11);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  *(_BYTE *)(a2 + 16) = 0;
}
