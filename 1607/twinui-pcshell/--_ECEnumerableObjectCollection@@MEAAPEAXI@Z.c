/*
 * XREFs of ??_ECEnumerableObjectCollection@@MEAAPEAXI@Z @ 0x180005A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CSimplePointerArray@UIUnknown@@V?$CTContainer_PolicyRelease@UIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@@@QEAA@XZ @ 0x180008124 (--1-$CSimplePointerArray@UIUnknown@@V-$CTContainer_PolicyRelease@UIUnknown@@@@V-$CSimpleArraySta.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

CEnumerableObjectCollection *__fastcall CEnumerableObjectCollection::`vector deleting destructor'(
        CEnumerableObjectCollection *this,
        char a2)
{
  *(_QWORD *)this = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
  *((_QWORD *)this + 1) = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
  *((_QWORD *)this + 2) = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
  CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *>>::~CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *>>();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
