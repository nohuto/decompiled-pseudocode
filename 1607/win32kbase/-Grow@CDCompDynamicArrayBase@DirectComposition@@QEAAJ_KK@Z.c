/*
 * XREFs of ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C004CD34
 * Callers:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z @ 0x1C003BE64 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXI@Z.c)
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C003BF90 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z @ 0x1C003C1DC (-AddPropertyUpdate@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@@Z.c)
 *     ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C004C9CC (-EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00E4D28 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C00E5168 (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?AddSegments@CPencilMarshaler@DirectComposition@@AEAAJPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z @ 0x1C00E598C (-AddSegments@CPencilMarshaler@DirectComposition@@AEAAJPEBUD2D1_PENCIL_SEGMENT@@IPEA_N@Z.c)
 *     ?SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00E7340 (-SetRemarshalingFlags@CPropertyBagMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00E8E20 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Grow(
        DirectComposition::CDCompDynamicArrayBase *this,
        __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  int v7; // edi
  __int64 v9; // rax
  char *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // kr00_8

  v2 = *((_QWORD *)this + 4);
  v5 = v2 + a2;
  if ( v2 + a2 < v2 )
    return (unsigned int)-1073741801;
  v6 = *((_QWORD *)this + 3);
  v7 = 0;
  if ( v5 > v6 )
  {
    if ( !v6 )
      v6 = 64LL;
    while ( v6 < v5 && v6 < 0x400 )
    {
      v12 = v6;
      v6 *= 2LL;
      if ( !is_mul_ok(v12, 2uLL) )
      {
        v6 = -1LL;
        v7 = -1073741675;
        break;
      }
      v7 = 0;
    }
    if ( v7 >= 0 )
    {
      while ( v6 < v5 )
      {
        if ( v6 + 1024 < v6 )
        {
          v6 = -1LL;
          v7 = -1073741675;
          break;
        }
        v6 += 1024LL;
        v7 = 0;
      }
      if ( v7 >= 0 && is_mul_ok(v6, *((_QWORD *)this + 5)) )
      {
        v7 = 0;
        if ( *((_BYTE *)this + 16) )
          v9 = Win32AllocPoolWithQuota();
        else
          v9 = Win32AllocPool();
        v10 = (char *)v9;
        if ( !v9 )
          v7 = -1073741801;
        if ( v7 >= 0 )
        {
          v11 = *((_QWORD *)this + 4);
          if ( v11 )
            memmove(v10, *((const void **)this + 1), v11 * *((_QWORD *)this + 5));
          memset(
            &v10[*((_QWORD *)this + 4) * *((_QWORD *)this + 5)],
            0,
            *((_QWORD *)this + 5) * (v6 - *((_QWORD *)this + 4)));
          if ( *((_QWORD *)this + 1) )
            Win32FreePool();
          *((_QWORD *)this + 1) = v10;
          *((_QWORD *)this + 3) = v6;
          goto LABEL_3;
        }
      }
    }
    return (unsigned int)-1073741801;
  }
LABEL_3:
  *((_QWORD *)this + 4) += a2;
  return (unsigned int)v7;
}
