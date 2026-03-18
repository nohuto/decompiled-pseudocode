/*
 * XREFs of ??$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801357F8
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180135F00 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVPropertyMapEntry@@@@QEAAPEAVPropertyMapEntry@@I@Z @ 0x180135D88 (-FindElement@-$CGenericTableMap@IVPropertyMapEntry@@@@QEAAPEAVPropertyMapEntry@@I@Z.c)
 */

__int64 __fastcall CPropertyBag::AddPropertyValue<D2DVector4>(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // esi
  int v8; // r9d
  struct _RTL_GENERIC_TABLE *v9; // rbx
  _QWORD *inserted; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-48h]
  int Buffer; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h]
  unsigned __int8 NewElement; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  Buffer = 0;
  v21 = 0LL;
  if ( a4 )
  {
    v9 = (struct _RTL_GENERIC_TABLE *)(a1 + 48);
    if ( CGenericTableMap<unsigned int,PropertyMapEntry>::FindElement(a1 + 48) )
    {
      v8 = -2147418113;
      v19 = 317;
      goto LABEL_4;
    }
    NewElement = 0;
    Buffer = a2;
    inserted = RtlInsertElementGenericTable(v9, &Buffer, 0x10u, &NewElement);
    if ( !inserted )
    {
      v8 = -2147024882;
      v19 = 327;
      goto LABEL_4;
    }
    switch ( a3 )
    {
      case 18:
        v17 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                16LL);
        v12 = v17;
        if ( v17 )
        {
          *(_QWORD *)v17 = 0LL;
          *(_DWORD *)(v17 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        *(_DWORD *)(v12 + 12) = *(_DWORD *)a4;
        break;
      case 35:
        v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                20LL);
        v12 = v16;
        if ( v16 )
        {
          *(_QWORD *)v16 = 0LL;
          *(_DWORD *)(v16 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        *(_QWORD *)(v12 + 12) = *(_QWORD *)a4;
        break;
      case 52:
        v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                24LL);
        v12 = v15;
        if ( v15 )
        {
          *(_QWORD *)v15 = 0LL;
          *(_DWORD *)(v15 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        *(_QWORD *)(v12 + 12) = *(_QWORD *)a4;
        *(_DWORD *)(v12 + 20) = *(_DWORD *)(a4 + 8);
        break;
      case 69:
      case 70:
      case 71:
        v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                28LL);
        v12 = v14;
        if ( v14 )
        {
          *(_QWORD *)v14 = 0LL;
          *(_DWORD *)(v14 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
        break;
      case 104:
        v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                36LL);
        v12 = v13;
        if ( v13 )
        {
          *(_QWORD *)v13 = 0LL;
          *(_DWORD *)(v13 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
        *(_QWORD *)(v12 + 28) = *(_QWORD *)(a4 + 16);
        break;
      case 265:
        v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                76LL);
        v12 = v11;
        if ( v11 )
        {
          *(_QWORD *)v11 = 0LL;
          *(_DWORD *)(v11 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
        *(_OWORD *)(v12 + 28) = *(_OWORD *)(a4 + 16);
        *(_OWORD *)(v12 + 44) = *(_OWORD *)(a4 + 32);
        *(_OWORD *)(v12 + 60) = *(_OWORD *)(a4 + 48);
        break;
      default:
        v19 = 407;
        goto LABEL_3;
    }
    *(_DWORD *)v12 = a3;
    *(_DWORD *)(v12 + 4) = 1;
    *(_DWORD *)(v12 + 8) = a2;
    inserted[1] = v12;
    return v4;
  }
  v19 = 305;
LABEL_3:
  v8 = -2147024809;
LABEL_4:
  v4 = v8;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v19);
  return v4;
}
