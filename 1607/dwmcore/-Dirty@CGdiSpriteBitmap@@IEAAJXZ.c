/*
 * XREFs of ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002A280
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?ForceDirty@CGdiSpriteBitmap@@UEAAJXZ @ 0x18002AF90 (-ForceDirty@CGdiSpriteBitmap@@UEAAJXZ.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800B1754 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800BA560 (-RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 * Callees:
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18002A51C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800B12E4 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::Dirty(CGdiSpriteBitmap *this)
{
  unsigned int v2; // ebx
  struct _RGNDATA *v3; // rsi
  __int64 v4; // rcx
  int Information; // eax
  unsigned int *v6; // r8
  int v7; // eax
  DWORD v8; // r12d
  DWORD nCount; // eax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // r15d
  char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // eax
  unsigned __int64 v18; // r9
  int v19; // eax
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  struct _RGNDATA *v21; // [rsp+38h] [rbp-C8h] BYREF
  HGDIOBJ ho; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[7]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v24[6]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h]
  unsigned int v26; // [rsp+B8h] [rbp-48h]
  char v27; // [rsp+BCh] [rbp-44h] BYREF

  v2 = 0;
  memset_0(v24, 0, 0x438uLL);
  memset_0(v23, 0, sizeof(v23));
  ho = 0LL;
  v20 = 56;
  v3 = 0LL;
  v21 = 0LL;
  if ( *((_DWORD *)this + 128) || *((_BYTE *)this + 248) )
  {
    v4 = *((_QWORD *)this + 79);
    v23[0] = 0LL;
    v23[1] = 0LL;
    v23[2] = &ho;
    v24[0] = 1;
    Information = CRedirectedGDISurface::GetInformation(v4, 0LL, &v20, v23);
    v2 = Information;
    if ( Information < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Information, 0x4F8u);
    }
    else
    {
      v7 = HrgnToRgnData((HRGN)ho, &v21, v6);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x4FAu);
        v3 = v21;
      }
      else
      {
        v3 = v21;
        v8 = 0;
        nCount = v21->rdh.nCount;
        if ( nCount )
        {
          while ( 1 )
          {
            v10 = nCount - v8;
            v11 = 16;
            if ( v10 < 0x10 )
              v11 = v10;
            v12 = 0;
            if ( v11 )
            {
              v13 = &v27;
              do
              {
                v14 = v12 + v8;
                ++v12;
                *(_OWORD *)v13 = *(_OWORD *)&v3->Buffer[16 * v14];
                v13 += 16;
              }
              while ( v12 < v11 );
            }
            v15 = 0LL;
            v26 = v12;
            if ( *((_DWORD *)this + 128) )
              break;
LABEL_13:
            nCount = v3->rdh.nCount;
            v8 += v12;
            if ( v8 >= nCount )
              goto LABEL_14;
          }
          while ( 1 )
          {
            v25 = *((_QWORD *)this + v15 + 32);
            v16 = CGdiSpriteBitmap::ProcessPresentHistoryToken(this, (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v24);
            v2 = v16;
            if ( v16 < 0 )
              break;
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= *((_DWORD *)this + 128) )
              goto LABEL_13;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x514u);
        }
      }
    }
LABEL_14:
    if ( v3 )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v3);
  }
  else
  {
    if ( !*((_QWORD *)this + 81) )
      return v2;
    v18 = *((_QWORD *)this + 28);
    v24[0] = 6;
    v19 = CGdiSpriteBitmap::NotifyDirty((CGdiSpriteBitmap *)((char *)this + 144), 0LL, 7u, v18);
    v2 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x51Eu);
  }
  if ( ho )
    DeleteObject(ho);
  return v2;
}
