/*
 * XREFs of ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00E29F4
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00AAB1C (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 * Callees:
 *     ??_G?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00AF868 (--_G-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z.c)
 */

__int64 *__fastcall Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::moveElements(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  unsigned int v8; // r15d
  unsigned int v9; // edi
  __int64 i; // rdx
  __int64 v11; // r8
  __int64 **v12; // r9
  unsigned int v13; // edi
  __int64 *result; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 **v17; // r8
  unsigned int v18; // edi
  unsigned int v19; // ebx
  unsigned int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // r13d
  __int64 v24; // rsi
  __int64 v25; // r15
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // rbx

  if ( a2 != a3 && a4 )
  {
    if ( a2 >= a3 )
    {
      v19 = a3;
      v20 = a2 - a3;
      if ( a3 < a2 )
      {
        v21 = 8LL * a3;
        do
        {
          v22 = *(_QWORD *)(a1 + 16);
          if ( v21 + v22 )
          {
            result = *(__int64 **)(v22 + 8LL * (v19 + v20));
            *(_QWORD *)(v22 + 8LL * (v19 + v20)) = 0LL;
            *(_QWORD *)(v21 + v22) = result;
          }
          ++v19;
          v21 += 8LL;
        }
        while ( v19 < a2 );
      }
      v23 = a3 + a4;
      if ( v19 < a3 + a4 )
      {
        v24 = 8LL * v19;
        v25 = v24;
        do
        {
          result = KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((__int64 *)(v25 + *(_QWORD *)(a1 + 16)));
          v26 = *(_QWORD *)(a1 + 16);
          if ( v24 + v26 )
          {
            result = *(__int64 **)(v26 + 8LL * (v19 + v20));
            *(_QWORD *)(v26 + 8LL * (v19 + v20)) = 0LL;
            *(_QWORD *)(v24 + v26) = result;
          }
          ++v19;
          v25 += 8LL;
          v24 += 8LL;
        }
        while ( v19 < v23 );
      }
      v27 = a2 + a4;
      if ( v19 < a2 + a4 )
      {
        v28 = 8LL * v19;
        v29 = v27 - v19;
        do
        {
          result = KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((__int64 *)(v28 + *(_QWORD *)(a1 + 16)));
          v28 += 8LL;
          --v29;
        }
        while ( v29 );
      }
    }
    else
    {
      v8 = a3 - a2;
      v9 = a3 + a4;
      for ( i = a3 + a4 - 1; (unsigned int)i >= *(_DWORD *)(a1 + 8); i = (unsigned int)(i - 1) )
      {
        v11 = *(_QWORD *)(a1 + 16);
        v12 = (__int64 **)(v11 + 8 * i);
        if ( v12 )
        {
          v13 = v9 - v8 - 1;
          result = *(__int64 **)(v11 + 8LL * v13);
          *(_QWORD *)(v11 + 8LL * v13) = 0LL;
          *v12 = result;
        }
        v9 = i;
      }
      if ( v9 > a3 )
      {
        do
        {
          v15 = v9 - 1;
          result = KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 16) + 8 * v15));
          v16 = *(_QWORD *)(a1 + 16);
          v17 = (__int64 **)(v16 + 8 * v15);
          if ( v17 )
          {
            v18 = v9 - v8 - 1;
            result = *(__int64 **)(v16 + 8LL * v18);
            *(_QWORD *)(v16 + 8LL * v18) = 0LL;
            *v17 = result;
          }
          v9 = v15;
        }
        while ( (unsigned int)v15 > a3 );
      }
      while ( v9 > a2 )
        result = KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * --v9));
    }
  }
  return result;
}
