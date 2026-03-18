/*
 * XREFs of ??$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801582B4
 * Callers:
 *     ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801588C4 (--$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWindowRecord@CLegacySurfaceManager@@K@Z @ 0x1800B0CAC (-FindElement@-$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAPEAVTokenToWi.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBag::AddPropertyValue<D2DVector4>(CResource *this, int a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  int v9; // r9d
  _QWORD *inserted; // r13
  void *v11; // rax
  __int64 v12; // rbx
  void *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-48h]
  int Buffer; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]
  unsigned __int8 NewElement; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  Buffer = 0;
  v17 = 0LL;
  if ( a4 )
  {
    if ( CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::FindElement(
           (struct _RTL_GENERIC_TABLE *)((char *)this + 120),
           a2) )
    {
      v9 = -2147418113;
      v15 = 327;
      goto LABEL_4;
    }
    NewElement = 0;
    Buffer = a2;
    inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 120), &Buffer, 0x10u, &NewElement);
    if ( !inserted )
    {
      v9 = -2147024882;
      v15 = 337;
      goto LABEL_4;
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
        if ( !v12 )
        {
          v9 = -2147024882;
          v15 = 355;
          goto LABEL_4;
        }
        *(_BYTE *)(v12 + 12) = *(_BYTE *)a4;
        goto LABEL_71;
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
        if ( !v12 )
        {
          v9 = -2147024882;
          v15 = 364;
          goto LABEL_4;
        }
        *(_DWORD *)(v12 + 12) = *(_DWORD *)a4;
        goto LABEL_71;
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
        if ( !v12 )
        {
          v9 = -2147024882;
          v15 = 373;
          goto LABEL_4;
        }
        *(_QWORD *)(v12 + 12) = *(_QWORD *)a4;
        goto LABEL_71;
    }
    if ( a3 != 52 )
    {
      if ( a3 == 69 )
      {
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
          v9 = -2147024882;
          v15 = 391;
          goto LABEL_4;
        }
      }
      else if ( a3 == 70 )
      {
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
          v9 = -2147024882;
          v15 = 400;
          goto LABEL_4;
        }
      }
      else
      {
        if ( a3 != 71 )
        {
          if ( a3 == 104 )
          {
            v13 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            36LL);
            v12 = (__int64)v13;
            if ( v13 )
            {
              memset_0(v13, 0, 0x24uLL);
              *(_QWORD *)v12 = 0LL;
              *(_DWORD *)(v12 + 8) = 0;
            }
            else
            {
              v12 = 0LL;
            }
            if ( !v12 )
            {
              v9 = -2147024882;
              v15 = 418;
              goto LABEL_4;
            }
            *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
            *(_QWORD *)(v12 + 28) = *(_QWORD *)(a4 + 16);
          }
          else
          {
            if ( a3 != 265 )
            {
              v15 = 434;
              goto LABEL_3;
            }
            v11 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            76LL);
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
              v9 = -2147024882;
              v15 = 427;
              goto LABEL_4;
            }
            *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
            *(_OWORD *)(v12 + 28) = *(_OWORD *)(a4 + 16);
            *(_OWORD *)(v12 + 44) = *(_OWORD *)(a4 + 32);
            *(_OWORD *)(v12 + 60) = *(_OWORD *)(a4 + 48);
          }
LABEL_71:
          *(_DWORD *)v12 = a3;
          *(_DWORD *)(v12 + 4) = 1;
          *(_DWORD *)(v12 + 8) = a2;
          inserted[1] = v12;
          CResource::InvalidateAnimationSources(this, a2);
          return v4;
        }
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
          v9 = -2147024882;
          v15 = 409;
          goto LABEL_4;
        }
      }
      *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
      goto LABEL_71;
    }
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
    if ( !v12 )
    {
      v9 = -2147024882;
      v15 = 382;
      goto LABEL_4;
    }
    *(_QWORD *)(v12 + 12) = *(_QWORD *)a4;
    *(_DWORD *)(v12 + 20) = *(_DWORD *)(a4 + 8);
    goto LABEL_71;
  }
  v15 = 315;
LABEL_3:
  v9 = -2147024809;
LABEL_4:
  v4 = v9;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v15);
  return v4;
}
