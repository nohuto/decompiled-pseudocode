/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002818
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002700 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140004E28 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008DB0 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140008F04 (--0-$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CStreamGroup>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  int v5; // esi
  void *v6; // rax
  volatile signed __int32 *v7; // rdi
  __int64 (__fastcall *v8)(volatile signed __int32 *, __int64, _QWORD *); // rsi
  int Interface; // eax
  volatile signed __int32 *v13; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  try
  {
    v6 = operator new(0x130uLL);
    if ( v6 )
      v7 = (volatile signed __int32 *)ATL::CComObject<CStreamGroup>::CComObject<CStreamGroup>(v6);
    else
      v7 = 0LL;
    v13 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = v13;
  }
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 4);
    v5 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 6));
    if ( v5 >= 0 )
    {
      *((_BYTE *)v7 + 64) = 1;
      v5 = 0;
    }
    _InterlockedDecrement(v7 + 4);
    if ( v5
      || ((v8 = **(__int64 (__fastcall ***)(volatile signed __int32 *, __int64, _QWORD *))v7,
           (char *)v8 != (char *)ATL::CComObject<CStreamGroup>::QueryInterface)
        ? (Interface = v8(v7, v4, v3))
        : (Interface = ATL::CComObject<CStreamGroup>::QueryInterface(v7, v4, v3)),
          (v5 = Interface) != 0) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 96LL))(v7, 1LL);
    }
  }
  return (unsigned int)v5;
}
