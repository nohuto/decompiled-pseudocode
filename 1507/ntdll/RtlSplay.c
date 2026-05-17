/*
 * XREFs of RtlSplay @ 0x180061490
 * Callers:
 *     RtlEnumerateGenericTable @ 0x1800610E0 (RtlEnumerateGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x180061280 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x1800613A0 (RtlLookupElementGenericTable.c)
 *     RtlDelete @ 0x1800616A0 (RtlDelete.c)
 *     RtlpTpIoLookup @ 0x18007E680 (RtlpTpIoLookup.c)
 *     PfxFindPrefix @ 0x1800CE3B0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1800CE4B0 (PfxInsertPrefix.c)
 *     RtlLookupElementGenericTableFull @ 0x1800DE550 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSplay(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // r8
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  _QWORD *v9; // r8
  _QWORD *v10; // r8
  _QWORD *v11; // r8
  _QWORD *v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // r8
  _QWORD *v15; // r8
  _QWORD *v16; // r8
  _QWORD *v17; // r8

  while ( *(_QWORD *)a1 != a1 )
  {
    v2 = *(_QWORD **)a1;
    v3 = **(_QWORD ***)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
    {
      if ( v3 == v2 )
      {
        v12 = *(_QWORD **)(a1 + 16);
        v2[1] = v12;
        if ( v12 )
          *v12 = v2;
        *(_QWORD *)(a1 + 16) = v2;
LABEL_8:
        *v2 = a1;
        *(_QWORD *)a1 = a1;
      }
      else if ( (_QWORD *)v3[1] == v2 )
      {
        v5 = *(_QWORD **)(a1 + 16);
        v2[1] = v5;
        if ( v5 )
          *v5 = v2;
        v6 = (_QWORD *)v2[2];
        v3[1] = v6;
        if ( v6 )
          *v6 = v3;
        if ( (_QWORD *)*v3 == v3 )
        {
          *(_QWORD *)a1 = a1;
        }
        else
        {
          *(_QWORD *)a1 = *v3;
          v13 = (_QWORD *)(*v3 + 8LL);
          if ( (_QWORD *)*v13 != v3 )
            v13 = (_QWORD *)(*v3 + 16LL);
          *v13 = a1;
        }
        *(_QWORD *)(a1 + 16) = v2;
        v2[2] = v3;
LABEL_18:
        *v2 = a1;
        *v3 = v2;
      }
      else
      {
        v9 = *(_QWORD **)(a1 + 8);
        v3[2] = v9;
        if ( v9 )
          *v9 = v3;
        v10 = *(_QWORD **)(a1 + 16);
        v2[1] = v10;
        if ( v10 )
          *v10 = v2;
        if ( (_QWORD *)*v3 == v3 )
        {
          *(_QWORD *)a1 = a1;
        }
        else
        {
          *(_QWORD *)a1 = *v3;
          v11 = (_QWORD *)(*v3 + 8LL);
          if ( (_QWORD *)*v11 != v3 )
            v11 = (_QWORD *)(*v3 + 16LL);
          *v11 = a1;
        }
        *(_QWORD *)(a1 + 8) = v3;
        *v3 = a1;
        *(_QWORD *)(a1 + 16) = v2;
        *v2 = a1;
      }
    }
    else
    {
      if ( v3 == v2 )
      {
        v4 = *(_QWORD **)(a1 + 8);
        v2[2] = v4;
        if ( v4 )
          *v4 = v2;
        *(_QWORD *)(a1 + 8) = v2;
        goto LABEL_8;
      }
      if ( (_QWORD *)v3[2] == v2 )
      {
        v7 = (_QWORD *)v2[1];
        v3[2] = v7;
        if ( v7 )
          *v7 = v3;
        v8 = *(_QWORD **)(a1 + 8);
        v2[2] = v8;
        if ( v8 )
          *v8 = v2;
        if ( (_QWORD *)*v3 == v3 )
        {
          *(_QWORD *)a1 = a1;
        }
        else
        {
          *(_QWORD *)a1 = *v3;
          v14 = (_QWORD *)(*v3 + 8LL);
          if ( (_QWORD *)*v14 != v3 )
            v14 = (_QWORD *)(*v3 + 16LL);
          *v14 = a1;
        }
        *(_QWORD *)(a1 + 8) = v2;
        v2[1] = v3;
        goto LABEL_18;
      }
      v15 = *(_QWORD **)(a1 + 8);
      v2[2] = v15;
      if ( v15 )
        *v15 = v2;
      v16 = *(_QWORD **)(a1 + 16);
      v3[1] = v16;
      if ( v16 )
        *v16 = v3;
      if ( (_QWORD *)*v3 == v3 )
      {
        *(_QWORD *)a1 = a1;
      }
      else
      {
        *(_QWORD *)a1 = *v3;
        v17 = (_QWORD *)(*v3 + 8LL);
        if ( (_QWORD *)*v17 != v3 )
          v17 = (_QWORD *)(*v3 + 16LL);
        *v17 = a1;
      }
      *(_QWORD *)(a1 + 8) = v2;
      *v2 = a1;
      *(_QWORD *)(a1 + 16) = v3;
      *v3 = a1;
    }
  }
  return a1;
}
