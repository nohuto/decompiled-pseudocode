/*
 * XREFs of ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0012BF0
 * Callers:
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0012B60 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 * Callees:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0013130 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     GetSharedResourceData @ 0x1C00766AC (GetSharedResourceData.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Initialize(
        DirectComposition::CSharedSystemResource *this,
        unsigned int a2)
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v5; // rsi
  int SystemResource; // ebx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  KeEnterCriticalRegion();
  if ( (unsigned __int8)GetSharedResourceData(a2, v8) )
  {
    *((_DWORD *)this + 3) = a2;
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v5 = DefaultConnection;
    if ( DefaultConnection )
    {
      SystemResource = DirectComposition::CConnection::CreateSystemResource(
                         DefaultConnection,
                         *((_DWORD *)this + 3),
                         (unsigned int *)this + 5);
      if ( SystemResource >= 0 )
        *((_DWORD *)this + 4) = *(_DWORD *)(*((_QWORD *)v5 + 19) + 28LL);
      DirectComposition::CConnection::Release(v5);
    }
    else
    {
      SystemResource = -1073741790;
    }
  }
  else
  {
    SystemResource = -1073741811;
  }
  if ( SystemResource >= 0 )
    *((_BYTE *)this + 8) = 1;
  KeLeaveCriticalRegion();
  return (unsigned int)SystemResource;
}
