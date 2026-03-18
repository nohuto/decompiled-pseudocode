/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180036324
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800345B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180034C00 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180036324 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800363D8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180036438 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180036324 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  char v1; // al
  CVisual *j; // rax
  __int64 i; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  CVisual *v9; // rcx

  v1 = *((_BYTE *)this + 712);
  if ( (v1 & 2) != 0 )
  {
    *((_BYTE *)this + 712) = v1 | 1;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v5 = *((_QWORD *)this + 9);
      v6 = (v5 & 2) != 0 ? *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)this + 9) & 1LL;
      if ( (unsigned int)i >= v6 )
        break;
      v7 = *((_QWORD *)this + 9);
      if ( (v7 & 2) != 0 )
        v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v8 = *((_QWORD *)this + 9) & 1LL;
      if ( (unsigned int)i >= v8 )
      {
        v9 = 0LL;
      }
      else
      {
        v9 = (CVisual *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v8 != 1 )
          v9 = (CVisual *)*((_QWORD *)v9 + i + 2);
      }
      if ( v9 )
        CVisual::OnTransformChanged(v9);
    }
  }
  *((_QWORD *)this + 70) = 0LL;
  for ( j = (CVisual *)*((_QWORD *)this + 54); j != (CVisual *)((char *)this + 432); j = *(CVisual **)j )
    *((_QWORD *)j - 19) = 0LL;
}
