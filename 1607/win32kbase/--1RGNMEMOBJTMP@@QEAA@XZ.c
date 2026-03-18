/*
 * XREFs of ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C001EAC8 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C001EC8C (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C002DD1C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002E0A0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C002E150 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0036790 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0036830 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     GreExtCreateRegion @ 0x1C006EC30 (GreExtCreateRegion.c)
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00839B0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00BF090 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall RGNMEMOBJTMP::~RGNMEMOBJTMP(__int16 **this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int16 *v5; // rbx

  if ( *this )
  {
    v2 = *this + 24;
    if ( *this != (__int16 *)-48LL )
    {
      KeEnterCriticalRegion();
      v3 = *v2;
      v4 = (_QWORD *)v2[1];
      if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      v2[1] = v2;
      *v2 = v2;
      KeLeaveCriticalRegion();
    }
  }
  v5 = *this;
  if ( *this && v5 != (__int16 *)prgnDefault )
  {
    if ( v5[7] >= 0 )
    {
      Win32FreePool(*this);
    }
    else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
    {
      Win32FreeToPagedLookasideListImpl_0();
    }
  }
  *this = 0LL;
  if ( *((_DWORD *)this + 2) == 1 )
    RGNOBJ::vDeleteRGNOBJ(this);
}
