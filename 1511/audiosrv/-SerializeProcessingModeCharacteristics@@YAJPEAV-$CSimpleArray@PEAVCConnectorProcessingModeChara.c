/*
 * XREFs of ?SerializeProcessingModeCharacteristics@@YAJPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAKPEAPEAE@Z @ 0x1800A70F0
 * Callers:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A7534 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 * Callees:
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180067A94 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x1800A4F3C (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SerializeProcessingModeCharacteristics(int *a1, unsigned int *a2, _QWORD *a3)
{
  int *v3; // r15
  unsigned int v4; // ebp
  int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // r14
  int i; // esi
  int v9; // edi
  _DWORD *v10; // rbx
  unsigned int v11; // esi
  _DWORD *v12; // r14
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r13
  unsigned int v16; // esi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  const void **v20; // r12
  int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // esi
  unsigned int v24; // esi
  unsigned int v25; // esi
  _DWORD *v26; // rax
  __int64 v28; // [rsp+20h] [rbp-58h]
  LPVOID pv; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v30; // [rsp+88h] [rbp+10h]
  _QWORD *v31; // [rsp+90h] [rbp+18h]
  int v32; // [rsp+98h] [rbp+20h]

  v31 = a3;
  v30 = a2;
  v3 = a1;
  pv = 0LL;
  v4 = 8;
  v5 = 0;
  if ( a1[2] > 0 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v6 + *(_QWORD *)v3);
      v4 += 20;
      for ( i = 0; i < *(_DWORD *)(v7 + 24); ++i )
      {
        a1 = (int *)*(unsigned __int16 *)(**(_QWORD **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                                         v7 + 16,
                                                         i)
                                        + 16LL);
        v4 += (_DWORD)a1 + 34;
      }
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < v3[2] );
  }
  v9 = CTCoAllocPolicy::Alloc(a1, 1, v4, &pv);
  v10 = pv;
  if ( v9 >= 0 )
  {
    if ( v4 >= 4 )
    {
      *(_DWORD *)pv = 8;
      if ( v4 - 4 >= 4 )
      {
        v10[1] = v3[2];
        v11 = v4 - 8;
        v12 = v10 + 2;
        v13 = 0;
        v32 = 0;
        if ( v3[2] <= 0 )
        {
LABEL_24:
          *v30 = v4;
          v26 = v10;
          v10 = 0LL;
          *v31 = v26;
          goto LABEL_25;
        }
        v14 = 0LL;
        v28 = 0LL;
        while ( 1 )
        {
          v15 = *(_QWORD *)(v14 + *(_QWORD *)v3);
          if ( v11 < 0x10 )
            break;
          *(_OWORD *)v12 = *(_OWORD *)v15;
          v16 = v11 - 16;
          if ( v16 < 4 )
            break;
          v12[4] = *(_DWORD *)(v15 + 24);
          v11 = v16 - 4;
          v12 += 5;
          v17 = 0;
          LODWORD(pv) = 0;
          if ( *(int *)(v15 + 24) > 0 )
          {
            v18 = v15 + 16;
            while ( 1 )
            {
              v19 = ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                      v18,
                      v17);
              v20 = *(const void ***)v19;
              v21 = *(_DWORD *)(*(_QWORD *)v19 + 8LL);
              if ( v11 < 4 )
                goto LABEL_8;
              *v12 = v21;
              v22 = v11 - 4;
              if ( v22 < 4 )
                goto LABEL_8;
              v12[1] = *((_DWORD *)v20 + 3);
              v23 = v22 - 4;
              if ( v23 < 4 )
                goto LABEL_8;
              v12[2] = *((_DWORD *)v20 + 4);
              v24 = v23 - 4;
              if ( v24 < 4 )
                goto LABEL_8;
              v12[3] = *((_DWORD *)v20 + 5);
              v25 = v24 - 4;
              if ( v25 < (unsigned __int64)*((unsigned __int16 *)*v20 + 8) + 18 )
                goto LABEL_8;
              memcpy_0(v12 + 4, *v20, *((unsigned __int16 *)*v20 + 8) + 18LL);
              v11 = -18 - *((unsigned __int16 *)*v20 + 8) + v25;
              v12 = (_DWORD *)((char *)v12 + *((unsigned __int16 *)*v20 + 8) + 34);
              v17 = (_DWORD)pv + 1;
              LODWORD(pv) = v17;
              v18 = v15 + 16;
              if ( v17 >= *(_DWORD *)(v15 + 24) )
              {
                v14 = v28;
                v13 = v32;
                break;
              }
            }
          }
          v32 = ++v13;
          v14 += 8LL;
          v28 = v14;
          if ( v13 >= v3[2] )
            goto LABEL_24;
        }
      }
    }
LABEL_8:
    v9 = -2147024774;
  }
LABEL_25:
  CoTaskMemFree(v10);
  return (unsigned int)v9;
}
