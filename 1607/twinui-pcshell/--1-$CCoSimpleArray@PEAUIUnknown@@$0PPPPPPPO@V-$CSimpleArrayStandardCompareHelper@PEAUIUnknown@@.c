/*
 * XREFs of ??1?$CCoSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@@@QEAA@XZ @ 0x180005AD4
 * Callers:
 *     _CSimplePointerArray_IUnknown_CTContainer_PolicyRelease_IUnknown__CSimpleArrayStandardCompareHelper_IUnknown_____ptr64___::_CSimplePointerArray_IUnknown_CTContainer_PolicyRelease_IUnknown__CSimpleArrayStandardCompareHelper_IUnknown_____ptr64____::_1_::dtor$0 @ 0x180030942 (_CSimplePointerArray_IUnknown_CTContainer_PolicyRelease_IUnknown__CSimpleArrayStandardCompareHel.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoSimpleArray<IUnknown *,4294967294,CSimpleArrayStandardCompareHelper<IUnknown *>>::~CCoSimpleArray<IUnknown *,4294967294,CSimpleArrayStandardCompareHelper<IUnknown *>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
