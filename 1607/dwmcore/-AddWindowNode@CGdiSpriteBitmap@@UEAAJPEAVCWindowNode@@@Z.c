/*
 * XREFs of ?AddWindowNode@CGdiSpriteBitmap@@UEAAJPEAVCWindowNode@@@Z @ 0x18002ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddWindowNode(CGdiSpriteBitmap *this, struct CWindowNode *a2)
{
  int v2; // r8d
  char *v3; // r10
  struct CWindowNode **v4; // rcx
  int v5; // ebx
  unsigned int i; // eax
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  struct CWindowNode *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = *((_DWORD *)this + 112);
  v3 = (char *)this + 424;
  v4 = (struct CWindowNode **)*((_QWORD *)this + 53);
  v5 = 0;
  for ( i = 0; i < *((_DWORD *)v3 + 6); ++v4 )
  {
    if ( a2 == *v4 )
      break;
    ++i;
  }
  if ( v2 == i )
  {
    v7 = *((_DWORD *)v3 + 6);
    v8 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v8 <= *((_DWORD *)v3 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8LL * *((unsigned int *)v3 + 6)) = v11;
        *((_DWORD *)v3 + 6) = v8;
        return (unsigned int)v5;
      }
      v9 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, &v11);
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xDCu);
  }
  return (unsigned int)v5;
}
