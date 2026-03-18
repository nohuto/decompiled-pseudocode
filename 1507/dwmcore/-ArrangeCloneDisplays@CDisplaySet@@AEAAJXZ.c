/*
 * XREFs of ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x180055580
 * Callers:
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800556B4 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18008DFB0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008320C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDisplaySet::ArrangeCloneDisplays(CDisplaySet *this)
{
  unsigned int v1; // r11d
  unsigned int v2; // ebx
  CDisplaySet *v3; // r10
  unsigned int i; // esi
  __int64 v5; // r15
  __int64 v6; // rdi
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v12; // ebp
  __int64 v13; // r14
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 18);
  v2 = 0;
  v3 = this;
  for ( i = 0; i < v1; ++i )
  {
    v5 = *((_QWORD *)v3 + 6);
    v6 = *(_QWORD *)(v5 + 8LL * i);
    if ( *(_BYTE *)(v6 + 145) )
    {
      *(_QWORD *)(v6 + 152) = v6;
    }
    else
    {
      v12 = 0;
      if ( v1 )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v5 + 8LL * v12);
          if ( *(_BYTE *)(v13 + 145) )
          {
            if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                    v6 + 112,
                                    v13 + 112) )
              break;
          }
          if ( ++v12 >= v1 )
            goto LABEL_4;
        }
        *(_QWORD *)(v6 + 152) = v13;
      }
    }
LABEL_4:
    v1 = *((_DWORD *)v3 + 18);
  }
  v7 = *((_DWORD *)v3 + 18);
  v8 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)v3 + 6) + 8LL * v8);
      v10 = *(_QWORD *)(v9 + 152);
      if ( !v10 )
        break;
      if ( v10 != v9 && *(_BYTE *)(v9 + 145) )
      {
        v14 = 1191;
        goto LABEL_19;
      }
      if ( ++v8 >= v7 )
        return v2;
    }
    v14 = 1179;
LABEL_19:
    v2 = -2003304291;
    MilInstrumentationCheckHR(0x14u, &dword_18016AE4C, 1u, -2003304291, v14);
  }
  return v2;
}
