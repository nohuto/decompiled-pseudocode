/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800163F4
 * Callers:
 *     ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18000D908 (-ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char_tr.c)
 *     ?ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18000DA34 (-ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char.c)
 *     ?GetImpressionEventExpirationTime@?A0x15bf3041@@YA_KPEBG0_K@Z @ 0x18000DE38 (-GetImpressionEventExpirationTime@-A0x15bf3041@@YA_KPEBG0_K@Z.c)
 *     ?do_falsename@?$numpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180015FB0 (-do_falsename@-$numpunct@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2.c)
 *     ?do_truename@?$numpunct@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180016010 (-do_truename@-$numpunct@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@.c)
 *     ??0?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18001A078 (--0-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18001A2D0 (--0-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18001A3FC (--0-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180004B0C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800162C4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800182C4 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

void **__fastcall std::wstring::assign(void **a1, char *Src, unsigned __int64 a3)
{
  void **v5; // rbx
  char *v6; // rax
  char *v7; // rax
  bool v9; // cf
  _WORD *v10; // rax
  void *v11; // rcx
  _WORD *v12; // rax

  v5 = a1;
  if ( !Src )
    goto LABEL_13;
  v6 = (unsigned __int64)a1[3] < 8 ? (char *)a1 : (char *)*a1;
  if ( Src < v6 )
    goto LABEL_13;
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (void **)*a1;
  if ( (char *)a1 + 2 * (_QWORD)v5[2] > Src )
  {
    if ( (unsigned __int64)v5[3] < 8 )
      v7 = (char *)v5;
    else
      v7 = (char *)*v5;
    return std::wstring::assign(v5, v5, (Src - v7) >> 1, a3);
  }
  else
  {
LABEL_13:
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( (unsigned __int64)v5[3] >= a3 )
    {
      if ( !a3 )
      {
        v9 = (unsigned __int64)v5[3] < 8;
        v5[2] = 0LL;
        if ( v9 )
          v10 = v5;
        else
          v10 = *v5;
        *v10 = 0;
      }
    }
    else
    {
      std::wstring::_Copy(v5);
    }
    if ( a3 )
    {
      if ( (unsigned __int64)v5[3] < 8 )
        v11 = v5;
      else
        v11 = *v5;
      memcpy_0(v11, Src, 2 * a3);
      v9 = (unsigned __int64)v5[3] < 8;
      v5[2] = (void *)a3;
      if ( v9 )
        v12 = v5;
      else
        v12 = *v5;
      v12[a3] = 0;
    }
    return v5;
  }
}
