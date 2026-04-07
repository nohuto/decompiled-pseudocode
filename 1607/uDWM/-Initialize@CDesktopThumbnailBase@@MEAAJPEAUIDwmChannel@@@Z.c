/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJPEAUIDwmChannel@@@Z @ 0x180097270
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::Initialize(CDesktopThumbnailBase *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  CDesktopManager *v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ebx
  int v10; // eax
  CDesktopThumbnailBase *v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x27u);
    return v4;
  }
  v5 = CDesktopManager::s_pDesktopManagerInstance;
  v11 = this;
  v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 404);
  v7 = v6 + 1;
  if ( v6 + 1 < v6 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v4 = -2147024362;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x28u);
    return v4;
  }
  v4 = 0;
  if ( v7 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 403) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 1592, 8u, 1, &v11);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xC0u);
    v4 = v8;
    if ( v8 < 0 )
      goto LABEL_13;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 199)
              + 8LL * *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 404)) = v11;
    *((_DWORD *)v5 + 404) = v7;
  }
  *((_BYTE *)this + 84) |= 8u;
  return v4;
}
