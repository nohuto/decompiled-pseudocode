/*
 * XREFs of Bulk_Transfer_PrepareForCompletion @ 0x1C0002898
 * Callers:
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0002708 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Transfer_Complete @ 0x1C002E7C4 (Bulk_Transfer_Complete.c)
 * Callees:
 *     TR_ReleaseDoubleBuffer @ 0x1C0004200 (TR_ReleaseDoubleBuffer.c)
 *     WPP_RECORDER_SF_DDDqdD @ 0x1C000E318 (WPP_RECORDER_SF_DDDqdD.c)
 */

void __fastcall Bulk_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  struct _MDL *v19; // rcx

  v4 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(v4 + 36) = *(_DWORD *)(a2 + 92);
  v6 = *(_DWORD *)(a2 + 52);
  if ( v6 <= 0x14 )
  {
    if ( v6 == 20 )
    {
      a3 = -1073741804;
      goto LABEL_27;
    }
    if ( !v6 )
      goto LABEL_27;
    v7 = v6 - 1;
    if ( !v7 )
      goto LABEL_11;
    v8 = v7 - 1;
    if ( !v8 )
    {
      a3 = -1073741805;
      goto LABEL_27;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 2;
        if ( !v11 )
        {
          a3 = -1073741820;
          goto LABEL_27;
        }
        v12 = v11 - 4;
        if ( !v12 )
        {
          a3 = -1073741803;
          goto LABEL_27;
        }
        if ( v12 == 3 )
        {
LABEL_11:
          a3 = 0;
          goto LABEL_27;
        }
      }
      goto LABEL_22;
    }
    goto LABEL_24;
  }
  v13 = v6 - 23;
  if ( v13 )
  {
    v14 = v13 - 3;
    if ( !v14 )
      goto LABEL_11;
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_11;
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_24:
        a3 = -1073741806;
        goto LABEL_27;
      }
      if ( v17 != 3 )
      {
LABEL_22:
        a3 = -1073741807;
        goto LABEL_27;
      }
      a3 = -1073741802;
    }
    else
    {
      a3 = -1073610752;
    }
  }
  else
  {
    a3 = -1073545216;
  }
LABEL_27:
  *(_DWORD *)(v4 + 4) = a3;
  if ( a3 <= -1073738240 )
  {
    if ( a3 == -1073738240 )
    {
      v18 = -1073741637;
      goto LABEL_44;
    }
    if ( a3 == -2147483136 || a3 == -2147482880 || a3 == -2147482112 || a3 == -1073739264 )
    {
      v18 = -1073741811;
      goto LABEL_44;
    }
LABEL_40:
    v18 = -1073741823;
    goto LABEL_44;
  }
  switch ( a3 )
  {
    case -1073737728:
      v18 = -1073741670;
      break;
    case -1073713152:
      v18 = -1073741810;
      break;
    case -1073676288:
      v18 = -1073741536;
      break;
    default:
      if ( (unsigned int)a3 <= 1 )
      {
        v18 = 0;
        break;
      }
      goto LABEL_40;
  }
LABEL_44:
  *(_DWORD *)(a2 + 56) = v18;
  ++*(_DWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 240) += *(unsigned int *)(a2 + 92);
  if ( *(int *)(a2 + 56) < 0 )
    ++*(_DWORD *)(a1 + 236);
  WPP_RECORDER_SF_DDDqdD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    a3,
    a1);
  if ( *(_QWORD *)(a2 + 80) )
  {
    TR_ReleaseDoubleBuffer(*(_QWORD *)(a2 + 40));
    *(_QWORD *)(a2 + 80) = 0LL;
  }
  v19 = *(struct _MDL **)(a2 + 64);
  if ( v19
    && v19 != *(struct _MDL **)(*(_QWORD *)(a2 + 32) + 48LL)
    && v19 != *(struct _MDL **)(*(_QWORD *)(a2 + 40) + 112LL) )
  {
    IoFreeMdl(v19);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  *(_BYTE *)(a2 + 16) = 0;
}
