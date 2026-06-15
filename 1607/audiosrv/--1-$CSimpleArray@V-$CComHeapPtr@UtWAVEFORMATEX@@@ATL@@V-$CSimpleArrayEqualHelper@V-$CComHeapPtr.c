/*
 * XREFs of ??1?$CSimpleArray@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x18008709C
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_54c77e54e42ef152cdcef462696c326e____::_1_::dtor$0 @ 0x180085C59 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_54c77e54e42ef152cdcef462696c326.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>::~CSimpleArray<ATL::CComHeapPtr<tWAVEFORMATEX>,ATL::CSimpleArrayEqualHelper<ATL::CComHeapPtr<tWAVEFORMATEX>>>(
        char **a1)
{
  int v2; // ebp
  __int64 v3; // rsi
  char *v4; // rbx

  if ( *a1 )
  {
    v2 = 0;
    if ( *((int *)a1 + 2) > 0 )
    {
      v3 = 0LL;
      do
      {
        v4 = *a1;
        CoTaskMemFree(*(LPVOID *)&(*a1)[v3]);
        *(_QWORD *)&v4[v3] = 0LL;
        ++v2;
        v3 += 8LL;
      }
      while ( v2 < *((_DWORD *)a1 + 2) );
    }
    free(*a1);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = 0;
}
