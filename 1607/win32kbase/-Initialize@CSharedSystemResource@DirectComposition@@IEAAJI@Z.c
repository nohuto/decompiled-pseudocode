/*
 * XREFs of ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0048798
 * Callers:
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0048580 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00189C0 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     GetSharedResourceData @ 0x1C007A060 (GetSharedResourceData.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Initialize(
        DirectComposition::CSharedSystemResource *this,
        unsigned int a2)
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v5; // rsi
  unsigned int v6; // edx
  int SystemResource; // ebx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  KeEnterCriticalRegion();
  if ( (unsigned __int8)GetSharedResourceData(a2, v9) )
  {
    *((_DWORD *)this + 3) = a2;
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v5 = DefaultConnection;
    if ( DefaultConnection )
    {
      SystemResource = DirectComposition::CConnection::CreateSystemResource(
                         DefaultConnection,
                         *((_DWORD *)this + 3),
                         (DirectComposition::CSharedSystemResource *)((char *)this + 20));
      if ( SystemResource >= 0 )
      {
        v6 = *(_DWORD *)(*((_QWORD *)v5 + 19) + 28LL);
        *((_DWORD *)this + 4) = v6;
      }
      DirectComposition::CConnection::Release(v5, v6);
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
