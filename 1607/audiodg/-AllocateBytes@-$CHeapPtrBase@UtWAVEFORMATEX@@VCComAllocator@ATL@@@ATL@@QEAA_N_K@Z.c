/*
 * XREFs of ?AllocateBytes@?$CHeapPtrBase@UtWAVEFORMATEX@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1400254F0
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140002B20 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CHeapPtrBase<tWAVEFORMATEX,ATL::CComAllocator>::AllocateBytes(_QWORD *a1, unsigned __int64 a2)
{
  LPVOID v3; // rax

  if ( a2 <= 0x7FFFFFFF )
    v3 = CoTaskMemAlloc((unsigned int)a2);
  else
    v3 = 0LL;
  *a1 = v3;
  return v3 != 0LL;
}
