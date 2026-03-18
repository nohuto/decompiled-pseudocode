/*
 * XREFs of ?ResolveSourceReference@CExpression@@UEAAJIPEAIPEAPEAVCResource@@@Z @ 0x18008B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324 (-AssertW@@YAXPEBG000K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ResolveSourceReference(
        CExpression *this,
        unsigned int a2,
        unsigned int *a3,
        struct CResource **a4)
{
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rbx
  __int64 (__fastcall *v8)(CBitmapOfDeviceBitmaps *); // rax
  __int64 result; // rax

  if ( a2 >= *((_DWORD *)this + 100) || (v6 = 2LL * a2, !*(_QWORD *)(*((_QWORD *)this + 47) + 16LL * a2 + 8)) )
  {
    *a4 = 0LL;
    goto LABEL_12;
  }
  _mm_lfence();
  v7 = **(volatile signed __int32 ***)(*((_QWORD *)this + 47) + 16LL * a2 + 8);
  *a4 = (struct CResource *)v7;
  if ( !v7 )
  {
LABEL_12:
    *a3 = 0;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x14Eu);
    return 2147500037LL;
  }
  v8 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v7 + 8LL);
  if ( (char *)v8 == (char *)CResource::AddRef )
  {
    if ( *((int *)v7 + 2) < 0 )
      AssertW(
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        0LL,
        L"CMILCOMBase::InternalAddRef",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        0x1Fu);
    _InterlockedIncrement(v7 + 2);
  }
  else if ( v8 == CBitmapOfDeviceBitmaps::AddRef )
  {
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v7);
  }
  else
  {
    v8((CBitmapOfDeviceBitmaps *)v7);
  }
  result = 0LL;
  *a3 = *(_DWORD *)(*((_QWORD *)this + 47) + 8 * v6);
  return result;
}
