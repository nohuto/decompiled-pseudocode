/*
 * XREFs of ?Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z @ 0x1C0013CD0
 * Callers:
 *     ?CreateInternalDuplicatedVisual@CApplicationChannel@DirectComposition@@QEAAJIIPEAPEAVCDuplicatedVisualMarshaler@2@@Z @ 0x1C001B6EC (-CreateInternalDuplicatedVisual@CApplicationChannel@DirectComposition@@QEAAJIIPEAPEAVCDuplicated.c)
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C00130CC (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0017340 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CDuplicatedVisualMarshaler::Initialize(
        DirectComposition::CDuplicatedVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        int a4)
{
  int v8; // edi
  __int64 v9; // rax
  unsigned int Buffer; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CDuplicatedVisualMarshaler *v12; // [rsp+28h] [rbp-10h]

  v8 = DirectComposition::CVisualMarshaler::Initialize(this);
  if ( v8 >= 0 )
  {
    if ( a4 )
    {
      *((_DWORD *)this + 4) |= 0x1000004u;
      *((_DWORD *)this + 21) = 1065353216;
      *((_DWORD *)this + 22) = 1065353216;
    }
    v8 = DirectComposition::CConnection::ReferenceSystemResource(*((DirectComposition::CConnection **)a2 + 5), a3);
    if ( v8 >= 0 )
    {
      if ( a4 )
      {
        v9 = Win32AllocPoolWithQuotaZInit(0x10uLL);
        *((_QWORD *)this + 28) = v9;
        if ( !v9 )
        {
          v8 = -1073741801;
          DirectComposition::CConnection::ReleaseSystemResource(*((DirectComposition::CConnection **)a2 + 5), a3);
          return (unsigned int)v8;
        }
        *(_DWORD *)(v9 + 12) = a4;
        *(_DWORD *)(*((_QWORD *)this + 28) + 8LL) = a3;
        *((_DWORD *)this + 4) |= 0x2000000u;
      }
      else
      {
        *((_DWORD *)this + 56) = a3;
      }
      Buffer = a3;
      v12 = this;
      return RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)a2 + 192), &Buffer, 0x10u, 0LL) == 0LL
           ? 0xC0000017
           : 0;
    }
  }
  return (unsigned int)v8;
}
