/*
 * XREFs of ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z @ 0x1C001D2F4
 * Callers:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0013130 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B87C (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B9E4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        int a3,
        unsigned int *a4)
{
  int InternalSharedResource; // eax
  unsigned int v6; // ecx
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CResourceMarshaler *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 )
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalSharedResource(this, a2, (PVOID *)v9);
  else
    InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalResource(this, a2, v9);
  v6 = InternalSharedResource;
  if ( InternalSharedResource >= 0 )
  {
    v7 = v9[0];
    *((_DWORD *)v9[0] + 4) |= 1u;
    *a4 = *((_DWORD *)v7 + 6);
  }
  return v6;
}
