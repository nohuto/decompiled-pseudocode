/*
 * XREFs of ?ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1800F7298
 * Callers:
 *     ?DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ @ 0x180123620 (-DiscardOutdatedFlipExImages@CWindowNode@@AEAAXXZ.c)
 * Callees:
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C0D0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWindowNode::ProcessReadyFlipExImages(CWindowNode *this, struct CCompositionSurfaceBitmap **a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 i; // r15
  __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int v9; // ebx

  if ( a2 )
    *a2 = 0LL;
  v4 = (unsigned int)(*((_DWORD *)this + 296) - 1);
  v5 = (int)v4;
  if ( (int)v4 >= 0 )
  {
    while ( !CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 145)
                                                                                           + 8 * v5)
                                                                               + 48LL)) )
    {
      v4 = (unsigned int)(v4 - 1);
      if ( --v5 < 0 )
        return;
    }
    if ( a2 )
      *a2 = *(struct CCompositionSurfaceBitmap **)(*((_QWORD *)this + 145) + 8 * v4);
    for ( i = 0LL; i < v5; ++i )
    {
      v7 = *((_QWORD *)this + 145);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v7 + 8 * i));
      *(_QWORD *)(v7 + 8 * i) = 0LL;
    }
    if ( a2 )
      v4 = (unsigned int)(v4 + 1);
    if ( (_DWORD)v4 )
    {
      v8 = *((_DWORD *)this + 296);
      if ( (unsigned int)v4 > v8 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x236u);
      }
      else
      {
        v9 = v8 - v4;
        if ( v9 )
          memmove(*((void **)this + 145), (const void *)(*((_QWORD *)this + 145) + 8 * v4), 8LL * v9);
        *((_DWORD *)this + 296) = v9;
      }
    }
  }
}
