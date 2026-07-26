/*
 * XREFs of ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00A7030
 * Callers:
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A7130 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00AE2B4 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??_G?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00C5550 (--_G-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z.c)
 */

void __fastcall Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::moveElements(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned int v6; // esi
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // r9
  _QWORD *v13; // r10
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rdx
  _QWORD *v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // ebx
  int v23; // r12d
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // r13d
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx

  if ( (_DWORD)a2 != a3 )
  {
    v6 = a2;
    if ( a4 )
    {
      if ( (unsigned int)a2 >= a3 )
      {
        v22 = a3;
        v23 = a2 - a3;
        if ( a3 < (unsigned int)a2 )
        {
          a2 = 8LL * a3;
          do
          {
            v24 = *(_QWORD *)(a1 + 16);
            if ( a2 + v24 )
            {
              v25 = *(_QWORD *)(v24 + 8LL * (v22 + v23));
              *(_QWORD *)(v24 + 8LL * (v22 + v23)) = 0LL;
              *(_QWORD *)(a2 + v24) = v25;
            }
            ++v22;
            a2 += 8LL;
          }
          while ( v22 < v6 );
        }
        v26 = a3 + a4;
        if ( v22 < a3 + a4 )
        {
          v27 = 8LL * v22;
          v28 = v27;
          do
          {
            KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
              v28 + *(_QWORD *)(a1 + 16),
              a2);
            a2 = *(_QWORD *)(a1 + 16);
            if ( v27 + a2 )
            {
              v29 = *(_QWORD *)(a2 + 8LL * (v22 + v23));
              *(_QWORD *)(a2 + 8LL * (v22 + v23)) = 0LL;
              *(_QWORD *)(v27 + a2) = v29;
            }
            ++v22;
            v28 += 8LL;
            v27 += 8LL;
          }
          while ( v22 < v26 );
        }
        if ( v22 < v6 + a4 )
        {
          v30 = 8LL * v22;
          v31 = v6 + a4 - v22;
          do
          {
            KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
              v30 + *(_QWORD *)(a1 + 16),
              a2);
            v30 += 8LL;
            --v31;
          }
          while ( v31 );
        }
      }
      else
      {
        LODWORD(v8) = a3 + a4;
        v9 = a3 - a2;
        v10 = a3 + a4 - 1;
        if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 8) )
        {
          v11 = v8 - v9;
          do
          {
            v12 = *(_QWORD *)(a1 + 16);
            v13 = (_QWORD *)(v12 + 8 * v10);
            if ( v13 )
            {
              v14 = *(_QWORD *)(v12 + 8LL * (unsigned int)(v11 - 1));
              *(_QWORD *)(v12 + 8LL * (unsigned int)(v11 - 1)) = 0LL;
              *v13 = v14;
            }
            LODWORD(v8) = v10;
            --v11;
            v10 = (unsigned int)(v10 - 1);
          }
          while ( (unsigned int)v10 >= *(_DWORD *)(a1 + 8) );
        }
        if ( (unsigned int)v8 > a3 )
        {
          v15 = -v9;
          do
          {
            v16 = (unsigned int)(v8 - 1);
            v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v16);
            if ( v17 )
            {
              KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v17 + 104);
              NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v17 + 8));
              ExFreePoolWithTag((PVOID)v17, 0x4C745042u);
            }
            v18 = *(_QWORD *)(a1 + 16);
            v19 = (_QWORD *)(v18 + 8 * v16);
            if ( v19 )
            {
              v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)(v8 + v15 - 1));
              *(_QWORD *)(v18 + 8LL * (unsigned int)(v8 + v15 - 1)) = 0LL;
              *v19 = v20;
            }
            LODWORD(v8) = v8 - 1;
          }
          while ( (unsigned int)v16 > a3 );
        }
        while ( (unsigned int)v8 > v6 )
        {
          v8 = (unsigned int)(v8 - 1);
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v8);
          if ( v21 )
          {
            KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v21 + 104);
            NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v21 + 8));
            ExFreePoolWithTag((PVOID)v21, 0x4C745042u);
          }
        }
      }
    }
  }
}
