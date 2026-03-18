/*
 * XREFs of ??$AddPropertyValue@M@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAM@Z @ 0x18008D1AC
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008D340 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBag::AddPropertyValue<float>(CResource *this, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *inserted; // r13
  LPVOID (__fastcall *v10)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _QWORD *v11; // rax
  __int64 v12; // rbx
  int v14; // r9d
  void *v15; // rax
  void *v16; // rax
  unsigned int v17; // [rsp+20h] [rbp-58h]
  unsigned int Buffer; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  unsigned int v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h]
  unsigned __int8 NewElement; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  Buffer = 0;
  v19 = 0LL;
  if ( !a4 )
  {
    v17 = 315;
    goto LABEL_18;
  }
  v20 = a2;
  v21 = 0LL;
  if ( RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 120), &v20) )
  {
    v14 = -2147418113;
    v17 = 327;
    goto LABEL_20;
  }
  NewElement = 0;
  Buffer = a2;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 120), &Buffer, 0x10u, &NewElement);
  if ( !inserted )
  {
    v14 = -2147024882;
    v17 = 337;
    goto LABEL_20;
  }
  if ( a3 == 17 )
  {
    v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            16LL);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)v12 = 0LL;
      *(_DWORD *)(v12 + 8) = 0;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      *(_BYTE *)(v12 + 12) = *(_BYTE *)a4;
      goto LABEL_12;
    }
    v14 = -2147024882;
    v17 = 355;
    goto LABEL_20;
  }
  if ( a3 != 18 )
  {
    switch ( a3 )
    {
      case 35:
        v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                20LL);
        if ( v12 )
        {
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_DWORD *)(v12 + 16) = 0;
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v12 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( v12 )
        {
          *(_QWORD *)(v12 + 12) = *(_QWORD *)a4;
          goto LABEL_12;
        }
        v14 = -2147024882;
        v17 = 373;
        goto LABEL_20;
      case 52:
        v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                24LL);
        if ( v12 )
        {
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_QWORD *)(v12 + 16) = 0LL;
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v12 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( v12 )
        {
          *(_QWORD *)(v12 + 12) = *(_QWORD *)a4;
          *(_DWORD *)(v12 + 20) = *(_DWORD *)(a4 + 8);
          goto LABEL_12;
        }
        v14 = -2147024882;
        v17 = 382;
        goto LABEL_20;
      case 69:
        v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                28LL);
        if ( v12 )
        {
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_QWORD *)(v12 + 16) = 0LL;
          *(_DWORD *)(v12 + 24) = 0;
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v12 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v14 = -2147024882;
          v17 = 391;
          goto LABEL_20;
        }
        break;
      case 70:
        v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                28LL);
        if ( v12 )
        {
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_QWORD *)(v12 + 16) = 0LL;
          *(_DWORD *)(v12 + 24) = 0;
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v12 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v14 = -2147024882;
          v17 = 400;
          goto LABEL_20;
        }
        break;
      case 71:
        v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                28LL);
        if ( v12 )
        {
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_QWORD *)(v12 + 16) = 0LL;
          *(_DWORD *)(v12 + 24) = 0;
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v12 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v14 = -2147024882;
          v17 = 409;
          goto LABEL_20;
        }
        break;
      case 104:
        v16 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        36LL);
        v12 = (__int64)v16;
        if ( v16 )
        {
          memset_0(v16, 0, 0x24uLL);
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v12 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( v12 )
        {
          *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
          *(_QWORD *)(v12 + 28) = *(_QWORD *)(a4 + 16);
          goto LABEL_12;
        }
        v14 = -2147024882;
        v17 = 418;
        goto LABEL_20;
      case 265:
        v15 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        76LL);
        v12 = (__int64)v15;
        if ( v15 )
        {
          memset_0(v15, 0, 0x4CuLL);
          *(_QWORD *)v12 = 0LL;
          *(_DWORD *)(v12 + 8) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( v12 )
        {
          *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
          *(_OWORD *)(v12 + 28) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)(v12 + 44) = *(_OWORD *)(a4 + 32);
          *(_OWORD *)(v12 + 60) = *(_OWORD *)(a4 + 48);
          goto LABEL_12;
        }
        v14 = -2147024882;
        v17 = 427;
LABEL_20:
        v4 = v14;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v17);
        return v4;
      default:
        v17 = 434;
LABEL_18:
        v14 = -2147024809;
        goto LABEL_20;
    }
    *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
    goto LABEL_12;
  }
  v10 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v10 == WPF::ProcessHeapImpl::Alloc )
    v11 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
  else
    v11 = (_QWORD *)v10(WPF::g_pProcessHeap, 16LL);
  v12 = (__int64)v11;
  if ( v11 )
  {
    v11[1] = 0LL;
    *v11 = 0LL;
    *((_DWORD *)v11 + 2) = 0;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v14 = -2147024882;
    v17 = 364;
    goto LABEL_20;
  }
  *(_DWORD *)(v12 + 12) = *(_DWORD *)a4;
LABEL_12:
  *(_DWORD *)v12 = a3;
  *(_DWORD *)(v12 + 4) = 1;
  *(_DWORD *)(v12 + 8) = a2;
  inserted[1] = v12;
  CResource::InvalidateAnimationSources(this, a2);
  return v4;
}
