/*
 * XREFs of ?AddMovedVisuals@CHwndRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18011C0B8
 * Callers:
 *     ?AddMovedVisuals@CDesktopRenderTarget@@UEAAJPEAVCVisual@@@Z @ 0x18011CFC0 (-AddMovedVisuals@CDesktopRenderTarget@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::AddMovedVisuals(CHwndRenderTarget *this, struct CVisual *a2)
{
  unsigned int v2; // ebx
  struct CVisual **v3; // r8
  unsigned int i; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  struct CVisual *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = 0;
  v3 = (struct CVisual **)*((_QWORD *)this + 83);
  for ( i = 0; i < *((_DWORD *)this + 172); ++v3 )
  {
    if ( a2 == *v3 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 172) )
  {
    v5 = *((_DWORD *)this + 172);
    v6 = v5 + 1;
    if ( (unsigned int)v6 >= v5 )
    {
      if ( (unsigned int)v6 <= *((_DWORD *)this + 171) )
      {
        *(_QWORD *)(*((_QWORD *)this + 83) + 8LL * *((unsigned int *)this + 172)) = v9;
        *((_DWORD *)this + 172) = v6;
LABEL_12:
        (*(void (__fastcall **)(struct CVisual *, __int64, struct CVisual **))(*(_QWORD *)v9 + 8LL))(v9, v6, v3);
        return v2;
      }
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 664, 8u, 1, &v9);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    }
    else
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x16Du);
      return v2;
    }
    goto LABEL_12;
  }
  return v2;
}
