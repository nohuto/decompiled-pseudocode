/*
 * XREFs of ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x180086554
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x180086E50 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?ForceDirty@CGdiSpriteBitmap@@UEAAJXZ @ 0x1800876D0 (-ForceDirty@CGdiSpriteBitmap@@UEAAJXZ.c)
 *     ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800A6008 (-RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800A60F8 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180086800 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x180086E50 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800A5760 (-GetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::Dirty(CGdiSpriteBitmap *this)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  int Information; // eax
  unsigned int *v5; // r8
  int v6; // eax
  struct _RGNDATA *v7; // r14
  DWORD nCount; // eax
  DWORD v9; // r12d
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // r15d
  char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // eax
  unsigned __int64 v18; // r9
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
    v3 = *((_QWORD *)this + 70);
    v23 = 0LL;
    v24[0] = 0LL;
    v25[0] = 1;
    v24[1] = &ho;
    Information = CRedirectedGDISurface::GetInformation(v3 + 16, 0LL, &v20, &v23);
    v2 = Information;
    if ( Information < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Information, 0x4F8u);
    }
    else
    {
      v6 = HrgnToRgnData((HRGN)ho, &v22, v5);
      v7 = v22;
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4FAu);
      }
      else
      {
        nCount = v22->rdh.nCount;
        v9 = 0;
        if ( nCount )
        {
          while ( 1 )
          {
            v10 = nCount - v9;
            v11 = 16;
            if ( v10 < 0x10 )
              v11 = v10;
            v12 = 0;
            if ( v11 )
            {
              v13 = &v28;
              do
              {
                v14 = v12 + v9;
                ++v12;
                *(_OWORD *)v13 = *(_OWORD *)&v7->Buffer[16 * v14];
                v13 += 16;
              }
              while ( v12 < v11 );
            }
            v15 = 0LL;
            v27 = v12;
            if ( *((_DWORD *)this + 110) )
              break;
LABEL_13:
            nCount = v7->rdh.nCount;
            v9 += v12;
            if ( v9 >= nCount )
              goto LABEL_14;
          }
          while ( 1 )
          {
            v26 = *((_QWORD *)this + v15 + 23);
            v16 = CGdiSpriteBitmap::ProcessPresentHistoryToken(this, (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v25);
            v2 = v16;
            if ( v16 < 0 )
              break;
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= *((_DWORD *)this + 110) )
              goto LABEL_13;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x514u);
        }
      }
LABEL_14:
      if ( v7 )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v7);
    }
  }
  else
  {
    if ( !*((_QWORD *)this + 72) )
      return v2;
    v18 = *((_QWORD *)this + 19);
    v25[0] = 6;
    v19 = CGdiSpriteBitmap::NotifyDirty((CGdiSpriteBitmap *)((char *)this + 72), 0LL, 7u, v18);
    v2 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x51Eu);
  }
  if ( ho )
    DeleteObject(ho);
  return v2;
}
