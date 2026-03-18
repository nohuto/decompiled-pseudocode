/*
 * XREFs of ??$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18008CE70
 * Callers:
 *     ??$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x18008D2E0 (--$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D.c)
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008D340 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1CAnimationSourceMapEntry@@QEAA@XZ @ 0x18011E2B0 (--1CAnimationSourceMapEntry@@QEAA@XZ.c)
 */

__int64 __fastcall CPropertyBag::ChangePropertyValue<D2D_MATRIX_3X2_F>(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v6; // esi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  _QWORD *v22; // rcx
  unsigned int v24; // [rsp+20h] [rbp-28h]
  int Buffer; // [rsp+30h] [rbp-18h] BYREF
  __int64 v26; // [rsp+38h] [rbp-10h]

  Buffer = a2;
  v6 = 0;
  v26 = 0LL;
  v9 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 120), &Buffer);
  if ( !v9 )
  {
    v6 = -2147023728;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x258u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x1E2u);
    return v6;
  }
  v10 = v9[1];
  if ( a2 != *(_DWORD *)(v10 + 8) || a3 != *(_DWORD *)v10 )
  {
    v24 = 492;
    goto LABEL_29;
  }
  v11 = a3 - 17;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 17;
      if ( v13 )
      {
        v14 = v13 - 17;
        if ( v14 )
        {
          v15 = v14 - 17;
          if ( v15 && (v16 = v15 - 1) != 0 && (v17 = v16 - 1) != 0 )
          {
            v18 = v17 - 33;
            if ( v18 )
            {
              if ( v18 != 161 )
              {
                v24 = 566;
LABEL_29:
                v6 = -2147024809;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v24);
                return v6;
              }
              *(_OWORD *)(v10 + 12) = *(_OWORD *)a4;
              *(_OWORD *)(v10 + 28) = *(_OWORD *)(a4 + 16);
              *(_OWORD *)(v10 + 44) = *(_OWORD *)(a4 + 32);
              *(_OWORD *)(v10 + 60) = *(_OWORD *)(a4 + 48);
            }
            else
            {
              *(_OWORD *)(v10 + 12) = *(_OWORD *)a4;
              *(_QWORD *)(v10 + 28) = *(_QWORD *)(a4 + 16);
            }
          }
          else
          {
            *(_OWORD *)(v10 + 12) = *(_OWORD *)a4;
          }
        }
        else
        {
          *(_QWORD *)(v10 + 12) = *(_QWORD *)a4;
          *(_DWORD *)(v10 + 20) = *(_DWORD *)(a4 + 8);
        }
      }
      else
      {
        *(_QWORD *)(v10 + 12) = *(_QWORD *)a4;
      }
    }
    else
    {
      *(_DWORD *)(v10 + 12) = *(_DWORD *)a4;
    }
  }
  else
  {
    *(_BYTE *)(v10 + 12) = *(_BYTE *)a4;
  }
  v19 = *(_QWORD *)(a1 + 16);
  v26 = 0LL;
  Buffer = a2;
  v20 = *(_QWORD *)(v19 + 352);
  v21 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 40), &Buffer);
  CAnimationSourceMapEntry::~CAnimationSourceMapEntry((CAnimationSourceMapEntry *)&Buffer);
  if ( v21 )
    v22 = (_QWORD *)v21[1];
  else
    v22 = 0LL;
  while ( v22 )
  {
    *(_QWORD *)(*v22 + 280LL) = v20;
    v22 = (_QWORD *)v22[1];
  }
  return v6;
}
