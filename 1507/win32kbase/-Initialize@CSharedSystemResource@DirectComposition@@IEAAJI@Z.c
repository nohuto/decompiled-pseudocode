/*
 * XREFs of ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0023F00
 * Callers:
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0023FB0 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 * Callees:
 *     GetSharedResourceData @ 0x1C0013E50 (GetSharedResourceData.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0022D28 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Initialize(
        DirectComposition::CSharedSystemResource *this,
        unsigned int a2)
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v5; // rsi
  unsigned int v6; // edx
  int SystemResource; // ebx
  __int64 (__fastcall *v9)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **); // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  KeEnterCriticalRegion();
  if ( GetSharedResourceData(a2, &v9) )
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
