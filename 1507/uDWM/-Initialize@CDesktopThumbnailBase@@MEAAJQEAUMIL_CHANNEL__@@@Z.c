/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180098E20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::Initialize(CBaseObject **this, struct MIL_CHANNEL__ *const a2)
{
  int v3; // eax
  unsigned int v4; // edi
  CDesktopManager *v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  int v10; // eax
  CBaseObject **v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = CDesktopManager::s_pDesktopManagerInstance;
    v11 = this;
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 408);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v4 = -2147024362;
LABEL_12:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x28u);
      return v4;
    }
    v4 = 0;
    if ( v7 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 407) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 1608, 8u, 1, &v11);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xC0u);
      v4 = v8;
      if ( v8 < 0 )
        goto LABEL_12;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 201)
                + 8LL * *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 408)) = v11;
      *((_DWORD *)v5 + 408) = v7;
    }
    *((_BYTE *)this + 84) |= 8u;
    return v4;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x27u);
  return v4;
}
