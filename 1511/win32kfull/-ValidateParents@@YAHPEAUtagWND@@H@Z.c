/*
 * XREFs of ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00966C0
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00526DC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C006A260 (IntersectWithParents.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C009688C (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateParents(struct tagWND *a1, int a2)
{
  struct tagWND *v2; // rsi
  int v3; // r14d
  __int64 v4; // rdi
  int v5; // ecx
  __int64 v6; // r15
  __int64 v8; // r8
  int v9; // ebx
  HRGN v10; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v11; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF

  v2 = a1;
  v3 = 0;
  while ( (*((_BYTE *)a1 + 55) & 0x40) != 0 )
    a1 = (struct tagWND *)*((_QWORD *)a1 + 11);
  v4 = *((_QWORD *)v2 + 11);
  v5 = *((char *)a1 + 42) < 0 ? a2 : 0;
  if ( v4 )
  {
    v6 = v5;
    while ( (*(_BYTE *)(v4 + 55) & 2) == 0 )
    {
      if ( *(_QWORD *)(v4 + 160) )
      {
        if ( v6 )
          return 0LL;
        if ( !v3 )
        {
          v3 = 1;
          v12 = *((_OWORD *)v2 + 7);
          if ( !(unsigned int)IntersectWithParents((__int64)v2, (__int64)&v12) )
            return 1LL;
          SetRectRgnIndirect(ghrgnInv1, &v12);
          v8 = *((_QWORD *)v2 + 25);
          if ( v8 )
          {
            if ( !(unsigned int)GreCombineRgn(ghrgnInv1, ghrgnInv1, v8, 1LL) )
              return 1LL;
          }
        }
        v11 = *(struct tagRECT *)(v4 + 112);
        if ( !(unsigned int)IntersectWithParents(v4, (__int64)&v11) )
          return 1LL;
        v10 = (HRGN)ghrgnInv1;
        v9 = LogicalToPhysicalInPlaceRgn(v2, &v10);
        InternalInvalidate2((struct tagWND *)v4, v10, v10, &v11, 0x8048u);
        if ( v9 )
          GreDeleteObject(v10);
      }
      v4 = *(_QWORD *)(v4 + 88);
      if ( !v4 )
        return 1LL;
    }
  }
  return 1LL;
}
