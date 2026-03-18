/*
 * XREFs of ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800135C4
 * Callers:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800137B0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800137B0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x180013808 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
        CRenderTargetBitmapCache *this,
        struct CScratchRenderTargetBitmap *a2)
{
  char *v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rsi
  __int64 i; // rdi
  __int64 v10; // rcx
  struct CScratchRenderTargetBitmap *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  if ( *((_BYTE *)a2 + 265) )
    --*((_DWORD *)this + 10);
  if ( this )
    v3 = (char *)this - 472;
  else
    v3 = 0LL;
  *((_QWORD *)a2 + 32) = *((_QWORD *)v3 + 132);
  if ( *((_DWORD *)this + 6) >= 0x20u )
  {
    v8 = *((_QWORD *)this + 73);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
      if ( (unsigned __int64)(v8 - *(_QWORD *)(v10 + 256)) > 1 )
      {
        *(_BYTE *)(v10 + 264) = 0;
        CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v10);
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, (unsigned int)i);
      }
    }
  }
  if ( *((int *)this + 88) >= 0 )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v5 <= *((_DWORD *)this + 5) )
      {
        *(_QWORD *)(*(_QWORD *)this + 8LL * v4) = v11;
        *((_DWORD *)this + 6) = v5;
LABEL_10:
        CBitmapOfDeviceBitmaps::AddRef((struct CScratchRenderTargetBitmap *)((char *)v11 + 128));
        return;
      }
      v6 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v11);
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_10;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
    }
    if ( v7 >= 0 )
      goto LABEL_10;
  }
}
