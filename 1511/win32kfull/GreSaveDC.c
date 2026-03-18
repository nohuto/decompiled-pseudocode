/*
 * XREFs of GreSaveDC @ 0x1C00CC540
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00CB970 (-UT_InvertCaret@@YAXXZ.c)
 *     NtGdiSaveDC @ 0x1C00CC530 (NtGdiSaveDC.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00CCAFC (xxxClientGetTextExtentPointW.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013EC54 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxClientExtTextOutW @ 0x1C014C20C (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214C20 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0214F8C (xxxClientPSMTextOut.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00DB300 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C00E4EC4 (-bSavePath@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x1C027B660 (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 */

__int64 __fastcall GreSaveDC(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  DC *v3; // rbx
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rbx
  int v7; // r14d
  __int64 v8; // r12
  int v9; // r13d
  unsigned int v10; // r15d
  __int64 v11; // rsi
  int v12; // eax
  DC *v13; // rdx
  __int64 v14; // rcx
  DC *v16[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp-28h]

  v2 = 0;
  LOBYTE(a2) = 1;
  v16[1] = 0LL;
  v16[0] = (DC *)HmgLockEx(a1, a2, 0LL);
  v3 = v16[0];
  if ( v16[0] )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v16) )
    {
      v3 = v16[0];
    }
    else
    {
      v3 = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)v16[0] + 3);
      v16[0] = 0LL;
    }
  }
  if ( !v3 )
  {
    EngSetLastError(6u);
    goto LABEL_39;
  }
  v4 = *((_QWORD *)v3 + 10);
  v5 = *(_DWORD *)(v4 + 8);
  if ( (v5 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v3, *(_QWORD *)(v4 + 16));
    v3 = v16[0];
  }
  if ( (v5 & 0x2000) != 0 )
  {
    GreDCSelectPen(v3, *(_QWORD *)(*((_QWORD *)v3 + 10) + 24LL));
    v3 = v16[0];
  }
  v6 = *((_QWORD *)v3 + 6);
  if ( (*(_DWORD *)(v6 + 56) & 1) != 0 )
    GreLockVisRgn(v6);
  GreAcquireSemaphore(ghsemPalette);
  v7 = *((_DWORD *)v16[0] + 9) & 0x800;
  if ( v7 )
    DC::bMakeInfoDC(v16[0], 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v17, (struct DCOBJ *)v16);
  if ( v17[0] )
  {
    v8 = *((_QWORD *)v16[0] + 16);
    *((_QWORD *)v16[0] + 16) = *(_QWORD *)v17[0];
    v9 = *(_DWORD *)(v17[0] + 116LL);
    if ( (unsigned int)bSavePath((struct XDCOBJ *)v16, v9 + 1) )
    {
      v10 = *(_DWORD *)(v17[0] + 116LL);
      if ( (unsigned int)bSaveRegion((struct DCOBJ *)v16, v10 + 1) )
      {
        if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)v17[0], 2147483666LL, 0LL, 1LL) )
        {
          v18 = 1;
          if ( (*((_DWORD *)v16[0] + 9) & 0x4000) != 0 )
            *(_DWORD *)(v17[0] + 36LL) |= 0x4000u;
          v11 = *(_QWORD *)(v17[0] + 512LL);
          if ( v11 )
          {
            v12 = *(_DWORD *)(v11 + 112);
            if ( (v12 & 0x800) != 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v17[0] + 512LL));
            }
            else if ( v12 >= 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v17[0] + 512LL));
              ++*(_DWORD *)(v11 + 160);
            }
          }
          INC_SHARE_REF_CNT(*((_QWORD *)v16[0] + 18));
          INC_SHARE_REF_CNT(*((_QWORD *)v16[0] + 19));
          INC_SHARE_REF_CNT(*((_QWORD *)v16[0] + 20));
          INC_SHARE_REF_CNT(*((_QWORD *)v16[0] + 13));
          v13 = v16[0];
          v14 = *((_QWORD *)v16[0] + 12);
          if ( (struct PALETTE *)v14 != ppalDefault )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 56));
            v13 = v16[0];
          }
          v2 = *((_DWORD *)v13 + 29);
          *((_DWORD *)v13 + 29) = v2 + 1;
          goto LABEL_33;
        }
        vRestoreRegion(v16, v10);
      }
      vRestorePath((struct XDCOBJ *)v16, v9);
    }
    *((_QWORD *)v16[0] + 16) = v8;
  }
  else
  {
    EngSetLastError(8u);
  }
LABEL_33:
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v17);
  if ( v7 )
    DC::bMakeInfoDC(v16[0], 1);
  if ( (*(_DWORD *)(v6 + 56) & 1) != 0 )
    GreUnlockVisRgn(v6);
  if ( ghsemPalette )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
    GreReleaseSemaphoreInternal(ghsemPalette);
  }
LABEL_39:
  if ( v16[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v16);
    _InterlockedDecrement((volatile signed __int32 *)v16[0] + 3);
  }
  return v2;
}
