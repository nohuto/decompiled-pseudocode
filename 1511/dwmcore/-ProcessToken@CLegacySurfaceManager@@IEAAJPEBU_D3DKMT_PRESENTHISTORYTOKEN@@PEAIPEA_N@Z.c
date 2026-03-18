/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5E54
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180086800 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x180086E50 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1800A5D00 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     ?ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z @ 0x1800A5D60 (-ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z.c)
 *     ?FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z @ 0x1800A604C (-FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?FindGdiSpriteBitmapFromDxShared@CLogicalSurfaceHandleMap@@QEAAX_KPEAPEAVCGdiSpriteBitmap@@@Z @ 0x1800A6098 (-FindGdiSpriteBitmapFromDxShared@CLogicalSurfaceHandleMap@@QEAAX_KPEAPEAVCGdiSpriteBitmap@@@Z.c)
 *     Template_xxq @ 0x180109EA0 (Template_xxq.c)
 *     Template_xxqNR2 @ 0x180109F20 (Template_xxqNR2.c)
 *     Template_xxxqNR3 @ 0x180109FB8 (Template_xxxqNR3.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        unsigned int *a3,
        bool *a4)
{
  bool v4; // di
  int v6; // edx
  unsigned int v10; // esi
  int v11; // edx
  PVOID v12; // rax
  CGdiSpriteBitmap *v13; // rcx
  int v14; // eax
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  CResponseItem *v20; // rcx
  union _ULARGE_INTEGER v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  _QWORD Buffer[4]; // [rsp+40h] [rbp-38h] BYREF
  struct CGdiSpriteBitmap *v26; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0;
  v6 = *(_DWORD *)a2;
  *a4 = 0;
  v10 = 0;
  v11 = v6 - 1;
  if ( !v11 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xxqNR2((_DWORD)this, 0, *((_QWORD *)a2 + 2), *((_QWORD *)a2 + 3), *((_DWORD *)a2 + 14));
    Buffer[0] = *((_QWORD *)a2 + 2);
    v12 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v12 )
    {
      v13 = (CGdiSpriteBitmap *)*((_QWORD *)v12 + 2);
      if ( v13 )
      {
        v14 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v13, a2);
        v10 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x128u);
          return v10;
        }
      }
    }
    goto LABEL_7;
  }
  v16 = v11 - 1;
  if ( !v16 )
  {
LABEL_34:
    *a4 = 1;
    return v10;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xxxqNR3(
        (_DWORD)this,
        0,
        *((_QWORD *)a2 + 2),
        *((_QWORD *)a2 + 3),
        *((_QWORD *)a2 + 4),
        *((_DWORD *)a2 + 10));
    CLogicalSurfaceHandleMap::FindGdiSpriteBitmapFromDxShared(this, *((_QWORD *)a2 + 3), &v26);
    if ( v26 )
    {
      v22 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v26, a2);
      v10 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x13Eu);
        return v10;
      }
    }
    else
    {
      v23 = *((_QWORD *)a2 + 4);
      if ( v23 )
      {
        v24 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(this, v23);
        v10 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x149u);
          return v10;
        }
      }
    }
    goto LABEL_7;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxq(
            (_DWORD)this,
            (unsigned int)&EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDISYSMEM,
            *((_QWORD *)a2 + 2),
            *((_QWORD *)a2 + 4),
            *((_DWORD *)a2 + 6));
        CLogicalSurfaceHandleMap::FindBitmapNoRef(this, *((void **)a2 + 2), &v26);
        if ( v26 )
          CGdiSpriteBitmap::NotifyDirty(
            (struct CGdiSpriteBitmap *)((char *)v26 + 72),
            0LL,
            *((_DWORD *)a2 + 6),
            *((_QWORD *)a2 + 4));
LABEL_7:
        *a4 = 1;
        return v10;
      }
      goto LABEL_34;
    }
    v20 = (CResponseItem *)*((_QWORD *)this + 35);
    if ( v20 && *((_QWORD *)v20 + 7) == *((_QWORD *)a2 + 2) && *((_BYTE *)this + 292) )
    {
      CResponseItem::ReleaseResponseRef(v20);
      *((_BYTE *)this + 292) = 0;
      v4 = 1;
    }
    *a4 = v4;
  }
  else
  {
    v21 = *(union _ULARGE_INTEGER *)((char *)a2 + 16);
    LOBYTE(v26) = 0;
    *a4 = CLegacySurfaceManager::ProcessVistaBltToken(this, v21, (bool *)&v26);
    if ( (_BYTE)v26 )
      ++*a3;
  }
  return v10;
}
