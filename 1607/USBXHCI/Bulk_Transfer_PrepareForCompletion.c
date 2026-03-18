/*
 * XREFs of Bulk_Transfer_PrepareForCompletion @ 0x1C0003250
 * Callers:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0003164 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Transfer_Complete @ 0x1C002ED3C (Bulk_Transfer_Complete.c)
 * Callees:
 *     TR_ReleaseDoubleBuffer @ 0x1C0001A54 (TR_ReleaseDoubleBuffer.c)
 *     WPP_RECORDER_SF_DDDqdD @ 0x1C000C0E0 (WPP_RECORDER_SF_DDDqdD.c)
 */

void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  unsigned int v6; // eax
  _QWORD *v7; // rdx
  struct _MDL *v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // eax

  v4 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(v4 + 36) = *(_DWORD *)(a2 + 92);
  v6 = *(_DWORD *)(a2 + 52);
  if ( v6 <= 0x14 )
  {
    if ( v6 == 20 )
    {
      a3 = -1073741804;
      goto LABEL_34;
    }
    if ( !v6 )
      goto LABEL_34;
    v9 = v6 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        a3 = -1073741805;
        goto LABEL_34;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
LABEL_31:
        a3 = -1073741806;
        goto LABEL_34;
      }
      v12 = v11 - 1;
      if ( !v12 )
        goto LABEL_30;
      v13 = v12 - 2;
      if ( !v13 )
      {
        a3 = -1073741820;
        goto LABEL_34;
      }
      v14 = v13 - 4;
      if ( !v14 )
      {
        a3 = -1073741803;
        goto LABEL_34;
      }
      if ( v14 != 3 )
      {
LABEL_30:
        a3 = -1073741807;
        goto LABEL_34;
      }
    }
LABEL_18:
    a3 = 0;
    goto LABEL_34;
  }
  v15 = v6 - 23;
  if ( v15 )
  {
    v16 = v15 - 3;
    if ( !v16 )
      goto LABEL_18;
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 3;
        if ( v19 )
        {
          if ( v19 == 3 )
          {
            a3 = -1073741802;
            goto LABEL_34;
          }
          goto LABEL_30;
        }
        goto LABEL_31;
      }
      goto LABEL_18;
    }
    a3 = -1073610752;
  }
  else
  {
    a3 = -1073545216;
  }
LABEL_34:
  *(_DWORD *)(v4 + 4) = a3;
  if ( a3 <= -1073738240 )
  {
    if ( a3 == -1073738240 )
    {
      v20 = -1073741637;
      goto LABEL_3;
    }
    if ( a3 == -2147483136 || a3 == -2147482880 || a3 == -2147482112 || a3 == -1073739264 )
    {
      v20 = -1073741811;
      goto LABEL_3;
    }
LABEL_47:
    v20 = -1073741823;
    goto LABEL_3;
  }
  switch ( a3 )
  {
    case -1073737728:
      v20 = -1073741670;
      break;
    case -1073713152:
      v20 = -1073741810;
      break;
    case -1073676288:
      v20 = -1073741536;
      break;
    default:
      if ( (unsigned int)a3 <= 1 )
      {
        v20 = 0;
        break;
      }
      goto LABEL_47;
  }
LABEL_3:
  *(_DWORD *)(a2 + 56) = v20;
  ++*(_DWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 240) += *(unsigned int *)(a2 + 92);
  if ( *(int *)(a2 + 56) < 0 )
    ++*(_DWORD *)(a1 + 236);
  WPP_RECORDER_SF_DDDqdD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    a3,
    a1);
  v7 = *(_QWORD **)(a2 + 80);
  if ( v7 )
  {
    TR_ReleaseDoubleBuffer(*(_QWORD *)(a2 + 40), v7);
    *(_QWORD *)(a2 + 80) = 0LL;
  }
  v8 = *(struct _MDL **)(a2 + 64);
  if ( v8
    && v8 != *(struct _MDL **)(*(_QWORD *)(a2 + 32) + 48LL)
    && v8 != *(struct _MDL **)(*(_QWORD *)(a2 + 40) + 112LL) )
  {
    IoFreeMdl(v8);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  *(_BYTE *)(a2 + 16) = 0;
}
