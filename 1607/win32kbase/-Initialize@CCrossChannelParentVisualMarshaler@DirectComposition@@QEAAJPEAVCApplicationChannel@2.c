/*
 * XREFs of ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C007EF7C
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C003EEB8 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0018958 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0044430 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4)
{
  int v7; // edi
  _DWORD *v8; // rax

  v7 = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)a1);
  if ( v7 >= 0 )
  {
    *(_DWORD *)(a1 + 16) |= 0x800002u;
    v7 = 0;
    *(_DWORD *)(a1 + 84) = 1065353216;
    *(_DWORD *)(a1 + 88) = 1065353216;
    v8 = Win32AllocPoolWithQuotaZInit(0x10uLL);
    if ( v8 )
      v8[2] = 0;
    *(_QWORD *)(a1 + 240) = v8;
    if ( v8 )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a3);
      *(_DWORD *)(*(_QWORD *)(a1 + 240) + 12LL) = a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 240) + 8LL) = a3;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v7;
}
