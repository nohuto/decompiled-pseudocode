/*
 * XREFs of ??$AddPropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x18008CCD4
 * Callers:
 *     ??$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x18008D2E0 (--$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWindowRecord@CLegacySurfaceManager@@K@Z @ 0x1800B0CAC (-FindElement@-$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWi.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBag::AddPropertyValue<D2DMatrix>(CResource *this, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v7; // r14d
  _QWORD *inserted; // r12
  LPVOID (__fastcall *v10)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  void *v11; // rax
  __int64 v12; // rbx
  int v14; // r9d
  void *v15; // rax
  unsigned int v16; // [rsp+20h] [rbp-48h]
  unsigned int Buffer; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  unsigned __int8 NewElement; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  Buffer = 0;
  v18 = 0LL;
  v7 = a2;
  if ( !a4 )
  {
    v16 = 315;
LABEL_25:
    v14 = -2147024809;
    goto LABEL_27;
  }
  if ( CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::FindElement((char *)this + 120, a2) )
  {
    v14 = -2147418113;
    v16 = 327;
    goto LABEL_27;
  }
  NewElement = 0;
  Buffer = v7;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 120), &Buffer, 0x10u, &NewElement);
  if ( !inserted )
  {
    v14 = -2147024882;
    v16 = 337;
    goto LABEL_27;
  }
  switch ( a3 )
  {
    case 17:
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
        goto LABEL_19;
      }
      v14 = -2147024882;
      v16 = 355;
      goto LABEL_27;
    case 18:
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
        *(_DWORD *)(v12 + 12) = *(_DWORD *)a4;
        goto LABEL_19;
      }
      v14 = -2147024882;
      v16 = 364;
      goto LABEL_27;
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
        goto LABEL_19;
      }
      v14 = -2147024882;
      v16 = 373;
      goto LABEL_27;
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
        goto LABEL_19;
      }
      v14 = -2147024882;
      v16 = 382;
      goto LABEL_27;
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
        v16 = 391;
        goto LABEL_27;
      }
      goto LABEL_52;
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
        v16 = 400;
        goto LABEL_27;
      }
      goto LABEL_52;
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
        v16 = 409;
        goto LABEL_27;
      }
LABEL_52:
      *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
      goto LABEL_19;
    case 104:
      v15 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                      WPF::g_pProcessHeap,
                      36LL);
      v12 = (__int64)v15;
      if ( v15 )
      {
        memset_0(v15, 0, 0x24uLL);
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
        goto LABEL_19;
      }
      v14 = -2147024882;
      v16 = 418;
LABEL_27:
      v4 = v14;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v16);
      return v4;
  }
  if ( a3 != 265 )
  {
    v16 = 434;
    goto LABEL_25;
  }
  v10 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v10 == WPF::ProcessHeapImpl::Alloc )
    v11 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x4CuLL);
  else
    v11 = v10(WPF::g_pProcessHeap, 76LL);
  v12 = (__int64)v11;
  if ( v11 )
  {
    memset_0(v11, 0, 0x4CuLL);
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
    v16 = 427;
    goto LABEL_27;
  }
  *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
  *(_OWORD *)(v12 + 28) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v12 + 44) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(v12 + 60) = *(_OWORD *)(a4 + 48);
LABEL_19:
  *(_DWORD *)v12 = a3;
  *(_DWORD *)(v12 + 4) = 1;
  *(_DWORD *)(v12 + 8) = v7;
  inserted[1] = v12;
  CResource::InvalidateAnimationSources(this, v7);
  return v4;
}
