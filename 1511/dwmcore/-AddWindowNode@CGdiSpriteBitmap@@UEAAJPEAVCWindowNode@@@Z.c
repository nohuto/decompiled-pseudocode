/*
 * XREFs of ?AddWindowNode@CGdiSpriteBitmap@@UEAAJPEAVCWindowNode@@@Z @ 0x180087410
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddWindowNode(CGdiSpriteBitmap *this, struct CWindowNode *a2)
{
  int v2; // r8d
  char *v3; // r10
  struct CWindowNode **v4; // rcx
  unsigned int v5; // edi
  unsigned int i; // eax
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  int v10; // ebx
  struct CWindowNode *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
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
  if ( v2 != i )
    return v5;
  v7 = *((_DWORD *)v3 + 6);
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v5 = -2147024362;
    goto LABEL_13;
  }
  if ( v8 <= *((_DWORD *)v3 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)v3 + 8LL * *((unsigned int *)v3 + 6)) = v12;
    *((_DWORD *)v3 + 6) = v8;
    return v5;
  }
  v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8, 1, &v12);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  v5 = v10;
  if ( v10 < 0 )
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xD1u);
  return v5;
}
