/*
 * XREFs of ?Initialize@CDuplicatedVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@II@Z @ 0x1C00238C4
 * Callers:
 *     ?CreateInternalDuplicatedVisual@CApplicationChannel@DirectComposition@@QEAAJIIPEAPEAVCDuplicatedVisualMarshaler@2@@Z @ 0x1C002E4C8 (-CreateInternalDuplicatedVisual@CApplicationChannel@DirectComposition@@QEAAJIIPEAPEAVCDuplicated.c)
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022C34 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022CC0 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
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

  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 23) = 1065353216;
  *((_DWORD *)this + 46) = -1;
  *((_DWORD *)this + 47) = -1;
  *((_DWORD *)this + 48) = -1;
  *((_DWORD *)this + 49) = -1;
  *((_DWORD *)this + 50) = -1;
  *((_DWORD *)this + 51) = -1;
  if ( a4 )
  {
    *((_DWORD *)this + 4) |= 0x2000004u;
    *((_DWORD *)this + 21) = 1065353216;
    *((_DWORD *)this + 22) = 1065353216;
  }
  v8 = DirectComposition::CConnection::ReferenceSystemResource(*((DirectComposition::CConnection **)a2 + 5), a3);
  if ( v8 >= 0 )
  {
    if ( a4 )
    {
      v9 = Win32AllocPoolWithQuotaZInit(0x10uLL);
      *((_QWORD *)this + 29) = v9;
      if ( !v9 )
      {
        v8 = -1073741801;
        DirectComposition::CConnection::ReleaseSystemResource(*((DirectComposition::CConnection **)a2 + 5), a3);
        return (unsigned int)v8;
      }
      *(_DWORD *)(v9 + 12) = a4;
      *(_DWORD *)(*((_QWORD *)this + 29) + 8LL) = a3;
      *((_DWORD *)this + 4) |= 0x4000000u;
    }
    else
    {
      *((_DWORD *)this + 58) = a3;
    }
    Buffer = a3;
    v12 = this;
    return RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)a2 + 192), &Buffer, 0x10u, 0LL) == 0LL
         ? 0xC0000017
         : 0;
  }
  return (unsigned int)v8;
}
