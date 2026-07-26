/*
 * XREFs of ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00E2F80
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A0B40 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 * Callees:
 *     ??_G?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00C550C (--_G-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z.c)
 */

__int64 *__fastcall Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::moveElements(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  unsigned int v8; // edi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // r9
  __int64 **v13; // r10
  __int64 *result; // rax
  int v15; // r15d
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 **v18; // r8
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
      v8 = a3 + a4;
      v9 = a3 - a2;
      v10 = a3 + a4 - 1;
      if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 8) )
      {
        v11 = v8 - v9;
        do
        {
          v12 = *(_QWORD *)(a1 + 16);
          v13 = (__int64 **)(v12 + 8 * v10);
          if ( v13 )
          {
            result = *(__int64 **)(v12 + 8LL * (v11 - 1));
            *(_QWORD *)(v12 + 8LL * (v11 - 1)) = 0LL;
            *v13 = result;
          }
          v8 = v10;
          --v11;
          v10 = (unsigned int)(v10 - 1);
        }
        while ( (unsigned int)v10 >= *(_DWORD *)(a1 + 8) );
      }
      if ( v8 > a3 )
      {
        v15 = -v9;
        do
        {
          v16 = v8 - 1;
          result = KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 16) + 8 * v16));
          v17 = *(_QWORD *)(a1 + 16);
          v18 = (__int64 **)(v17 + 8 * v16);
          if ( v18 )
          {
            result = *(__int64 **)(v17 + 8LL * (v8 + v15 - 1));
            *(_QWORD *)(v17 + 8LL * (v8 + v15 - 1)) = 0LL;
            *v18 = result;
          }
          --v8;
        }
        while ( (unsigned int)v16 > a3 );
      }
      while ( v8 > a2 )
        result = KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * --v8));
    }
  }
  return result;
}
