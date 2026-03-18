/*
 * XREFs of ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180070180
 * Callers:
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800702C4 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1800B64F0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180070438 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008C5F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::ArrangeCloneDisplays(CDisplaySet *this)
{
  unsigned int v1; // ebx
  CDisplaySet *v2; // r10
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v5; // r11
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v11; // esi
  __int64 v12; // rbp
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v1 = 0;
  v2 = this;
  v3 = 0;
  for ( *((_DWORD *)this + 10) = 0; v3 < *((_DWORD *)v2 + 18); ++v3 )
  {
    v4 = *((_QWORD *)v2 + 6);
    if ( CDisplay::IsPrimary(*(CDisplay **)(v4 + 8LL * v3)) )
      *((_DWORD *)v2 + 10) = v3;
    if ( *(_BYTE *)(v5 + 300) )
    {
      *(_QWORD *)(v5 + 136) = v5;
    }
    else
    {
      v11 = 0;
      if ( *((_DWORD *)v2 + 18) )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v4 + 8LL * v11);
          if ( *(_BYTE *)(v12 + 300) )
          {
            if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                    v5 + 104,
                                    v12 + 104) )
              break;
          }
          if ( ++v11 >= *((_DWORD *)v2 + 18) )
            goto LABEL_6;
        }
        *(_QWORD *)(v5 + 136) = v12;
      }
    }
LABEL_6:
    ;
  }
  v6 = *((_DWORD *)v2 + 18);
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)v2 + 6) + 8LL * v7);
      v9 = *(_QWORD *)(v8 + 136);
      if ( !v9 )
        break;
      if ( v9 != v8 && *(_BYTE *)(v8 + 300) )
      {
        v13 = 1190;
        goto LABEL_21;
      }
      if ( ++v7 >= v6 )
        return v1;
    }
    v13 = 1178;
LABEL_21:
    v1 = -2003304291;
    MilInstrumentationCheckHR(0x14u, &dword_1801745A8, 1u, -2003304291, v13);
  }
  return v1;
}
