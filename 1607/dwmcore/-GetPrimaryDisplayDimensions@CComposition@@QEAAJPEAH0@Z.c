/*
 * XREFs of ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180116A7C
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x18010C0C0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800364D4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::GetPrimaryDisplayDimensions(CComposition *this, int *a2, int *a3)
{
  struct CDisplay *v4; // rbx
  int CurrentDisplaySet; // eax
  unsigned int v7; // edi
  int PrimaryDisplay; // eax
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // xmm0_8
  __int64 v12; // rdx
  CDisplaySet *v14; // [rsp+30h] [rbp-28h] BYREF
  struct CDisplay *v15; // [rsp+38h] [rbp-20h] BYREF

  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v14);
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801C7290, 2u, CurrentDisplaySet, 0xEE2u);
  }
  else
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v14, &v15);
    v7 = PrimaryDisplay;
    if ( PrimaryDisplay < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801C7290, 2u, PrimaryDisplay, 0xEE4u);
      v4 = v15;
    }
    else
    {
      v4 = v15;
      v10 = *((_QWORD *)v15 + 13);
      v11 = _mm_srli_si128(*(__m128i *)((char *)v15 + 104), 8).m128i_u64[0];
      v12 = (unsigned int)(HIDWORD(v11) - HIDWORD(v10));
      *a2 = v11 - v10;
      *a3 = v12;
    }
  }
  if ( v14 )
    CDisplaySet::Release(v14, v12, v9);
  if ( v4 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v4 + 8LL))(v4);
  return v7;
}
