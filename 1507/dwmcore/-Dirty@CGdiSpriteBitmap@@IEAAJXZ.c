/*
 * XREFs of ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18007DF38
 * Callers:
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800629F0 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18007E670 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?ForceDirty@CGdiSpriteBitmap@@UEAAJXZ @ 0x18007EE20 (-ForceDirty@CGdiSpriteBitmap@@UEAAJXZ.c)
 *     ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x180093A24 (-RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800622A0 (-GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18007E1E0 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18007E670 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::Dirty(CGdiSpriteBitmap *this)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // r9
  int v4; // eax
  __int64 v6; // rcx
  int Information; // eax
  unsigned int *v8; // r8
  int v9; // eax
  struct _RGNDATA *v10; // r14
  DWORD nCount; // eax
  DWORD v12; // r12d
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // r15d
  char *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  HGDIOBJ ho; // [rsp+38h] [rbp-C8h] BYREF
  struct _RGNDATA *v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[6]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v25[6]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  unsigned int v27; // [rsp+B8h] [rbp-48h]
  char v28; // [rsp+BCh] [rbp-44h] BYREF

  v2 = 0;
  memset_0(v25, 0, 0x438uLL);
  v23 = 0LL;
  memset_0(v24, 0, sizeof(v24));
  ho = 0LL;
  v22 = 0LL;
  v20 = 56;
  if ( *((_DWORD *)this + 110) || *((_BYTE *)this + 176) )
  {
    v6 = *((_QWORD *)this + 70);
    v23 = 0LL;
    v24[0] = 0LL;
    v25[0] = 1;
    v24[1] = &ho;
    Information = CRedirectedGDISurface::GetInformation(v6 + 16, 0, &v20, (__int64)&v23);
    v2 = Information;
    if ( Information < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Information, 0x4F8u);
    }
    else
    {
      v9 = HrgnToRgnData((HRGN)ho, &v22, v8);
      v10 = v22;
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x4FAu);
      }
      else
      {
        nCount = v22->rdh.nCount;
        v12 = 0;
        if ( nCount )
        {
          while ( 1 )
          {
            v13 = nCount - v12;
            v14 = 16;
            if ( v13 < 0x10 )
              v14 = v13;
            v15 = 0;
            if ( v14 )
            {
              v16 = &v28;
              do
              {
                v17 = v15 + v12;
                ++v15;
                *(_OWORD *)v16 = *(_OWORD *)&v10->Buffer[16 * v17];
                v16 += 16;
              }
              while ( v15 < v14 );
            }
            v18 = 0LL;
            v27 = v15;
            if ( *((_DWORD *)this + 110) )
              break;
LABEL_20:
            nCount = v10->rdh.nCount;
            v12 += v15;
            if ( v12 >= nCount )
              goto LABEL_21;
          }
          while ( 1 )
          {
            v26 = *((_QWORD *)this + v18 + 23);
            v19 = CGdiSpriteBitmap::ProcessPresentHistoryToken(this, (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v25);
            v2 = v19;
            if ( v19 < 0 )
              break;
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= *((_DWORD *)this + 110) )
              goto LABEL_20;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x514u);
        }
      }
LABEL_21:
      if ( v10 )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v10);
    }
  }
  else
  {
    if ( !*((_QWORD *)this + 72) )
      return v2;
    v3 = *((_QWORD *)this + 19);
    v25[0] = 6;
    v4 = CGdiSpriteBitmap::NotifyDirty((CGdiSpriteBitmap *)((char *)this + 72), 0LL, 7u, v3);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x51Eu);
  }
  if ( ho )
    DeleteObject(ho);
  return v2;
}
