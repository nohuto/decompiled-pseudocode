/*
 * XREFs of ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00A3398
 * Callers:
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A3480 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 * Callees:
 *     ??_G?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00A351C (--_G-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::moveElements(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned int v6; // r14d
  int v8; // r15d
  unsigned int v9; // edi
  __int64 i; // rdx
  __int64 v11; // r8
  __int64 *v12; // r9
  unsigned int v13; // edi
  __int64 result; // rax
  __int64 v15; // r12
  __int64 *v16; // r8
  unsigned int v17; // edi
  unsigned int v18; // ebx
  int v19; // r12d
  __int64 v20; // r8
  unsigned int v21; // r13d
  __int64 v22; // rsi
  __int64 v23; // r15
  int v24; // ecx
  __int64 v25; // rdi
  __int64 v26; // rbx

  if ( (_DWORD)a2 != a3 )
  {
    v6 = a2;
    if ( a4 )
    {
      if ( (unsigned int)a2 >= a3 )
      {
        v18 = a3;
        v19 = a2 - a3;
        if ( a3 < (unsigned int)a2 )
        {
          a2 = 8LL * a3;
          do
          {
            v20 = *(_QWORD *)(a1 + 16);
            if ( a2 + v20 )
            {
              result = *(_QWORD *)(v20 + 8LL * (v18 + v19));
              *(_QWORD *)(v20 + 8LL * (v18 + v19)) = 0LL;
              *(_QWORD *)(a2 + v20) = result;
            }
            ++v18;
            a2 += 8LL;
          }
          while ( v18 < v6 );
        }
        v21 = a3 + a4;
        if ( v18 < a3 + a4 )
        {
          v22 = 8LL * v18;
          v23 = v22;
          do
          {
            result = KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
                       v23 + *(_QWORD *)(a1 + 16),
                       a2);
            a2 = *(_QWORD *)(a1 + 16);
            if ( v22 + a2 )
            {
              result = *(_QWORD *)(a2 + 8LL * (v18 + v19));
              *(_QWORD *)(a2 + 8LL * (v18 + v19)) = 0LL;
              *(_QWORD *)(v22 + a2) = result;
            }
            ++v18;
            v23 += 8LL;
            v22 += 8LL;
          }
          while ( v18 < v21 );
        }
        v24 = v6 + a4;
        if ( v18 < v6 + a4 )
        {
          v25 = 8LL * v18;
          v26 = v24 - v18;
          do
          {
            result = KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
                       v25 + *(_QWORD *)(a1 + 16),
                       a2);
            v25 += 8LL;
            --v26;
          }
          while ( v26 );
        }
      }
      else
      {
        v8 = a3 - a2;
        v9 = a3 + a4;
        for ( i = a3 + a4 - 1; (unsigned int)i >= *(_DWORD *)(a1 + 8); i = (unsigned int)(i - 1) )
        {
          v11 = *(_QWORD *)(a1 + 16);
          v12 = (__int64 *)(v11 + 8 * i);
          if ( v12 )
          {
            v13 = v9 - v8 - 1;
            result = *(_QWORD *)(v11 + 8LL * v13);
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
            result = KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
                       *(_QWORD *)(a1 + 16) + 8 * v15,
                       i);
            i = *(_QWORD *)(a1 + 16);
            v16 = (__int64 *)(i + 8 * v15);
            if ( v16 )
            {
              v17 = v9 - v8 - 1;
              result = *(_QWORD *)(i + 8LL * v17);
              *(_QWORD *)(i + 8LL * v17) = 0LL;
              *v16 = result;
            }
            v9 = v15;
          }
          while ( (unsigned int)v15 > a3 );
        }
        while ( v9 > v6 )
          result = KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
                     *(_QWORD *)(a1 + 16) + 8LL * --v9,
                     i);
      }
    }
  }
  return result;
}
