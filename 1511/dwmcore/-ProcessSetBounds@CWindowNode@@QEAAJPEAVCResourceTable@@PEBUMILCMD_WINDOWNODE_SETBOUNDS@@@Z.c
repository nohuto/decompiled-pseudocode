/*
 * XREFs of ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18005E02C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18006459C (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800B6C28 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetBounds(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETBOUNDS *a3)
{
  int v3; // r9d
  int v7; // eax
  unsigned int v8; // ebx
  bool v9; // bp
  bool v10; // r14
  char v11; // r15
  int v12; // ecx
  int v13; // eax
  CDxAccumulationContext *v15; // rcx
  int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  int updated; // eax

  v3 = *((_DWORD *)this + 228) - *((_DWORD *)this + 226);
  if ( v3 < 0 )
    v3 = 0;
  v7 = *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10);
  v8 = 0;
  v9 = 0;
  if ( v7 < 0 )
    v7 = 0;
  v10 = 0;
  v11 = 0;
  if ( v3 != v7 )
    goto LABEL_16;
  v12 = *((_DWORD *)this + 229) - *((_DWORD *)this + 227);
  if ( v12 < 0 )
    v12 = 0;
  v13 = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  if ( v13 < 0 )
    v13 = 0;
  if ( v12 != v13 )
  {
LABEL_16:
    *((_BYTE *)this + 1224) = 1;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    v9 = *((_QWORD *)this + 124) != 0LL;
  }
  if ( *((_DWORD *)this + 226) - *((_DWORD *)this + 210) != *((_DWORD *)a3 + 10) - *((_DWORD *)a3 + 2)
    || *((_DWORD *)this + 227) - *((_DWORD *)this + 211) != *((_DWORD *)a3 + 11) - *((_DWORD *)a3 + 3) )
  {
    v9 = 1;
    v10 = 1;
    v11 = 1;
  }
  *(_OWORD *)((char *)this + 840) = *(_OWORD *)((char *)a3 + 8);
  *(_OWORD *)((char *)this + 888) = *(_OWORD *)((char *)a3 + 24);
  *(_OWORD *)((char *)this + 904) = *(_OWORD *)((char *)a3 + 40);
  if ( v11
    && *((_QWORD *)this + 129)
    && (v17 = *((_QWORD *)this + 124)) != 0
    && (v18 = (*(__int64 (__fastcall **)(_QWORD, struct CResourceTable *, __int64))(*(_QWORD *)v17 + 272LL))(
                *((_QWORD *)this + 124),
                a2,
                2LL),
        v8 = v18,
        v18 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x595u);
  }
  else if ( v9 )
  {
    if ( *((_QWORD *)this + 124) )
    {
      v16 = CDxAccumulationContext::ProcessGdiUpdate(this, v10);
      v8 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x5A0u);
    }
    else
    {
      v15 = (CDxAccumulationContext *)*((_QWORD *)this + 150);
      if ( v15 )
      {
        updated = CDxAccumulationContext::UpdateDxClipShape(v15, v10);
        v8 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x5A6u);
      }
    }
  }
  return v8;
}
