/*
 * XREFs of ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180100D98
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x1800F4E50 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18006F8B8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::GetPrimaryDisplayDimensions(CComposition *this, int *a2, int *a3)
{
  struct CDisplay *v4; // rdi
  int CurrentDisplaySet; // eax
  unsigned int v7; // ebx
  int PrimaryDisplay; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // xmm0_8
  CDisplaySet *v12; // [rsp+30h] [rbp-28h] BYREF
  struct CDisplay *v13; // [rsp+38h] [rbp-20h] BYREF

  v12 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v12);
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet >= 0 )
  {
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v12, &v13);
    v7 = PrimaryDisplay;
    if ( PrimaryDisplay >= 0 )
    {
      v4 = v13;
      v9 = *((_QWORD *)v13 + 13);
      v10 = _mm_srli_si128(*(__m128i *)((char *)v13 + 104), 8).m128i_u64[0];
      *a2 = v10 - v9;
      *a3 = HIDWORD(v10) - HIDWORD(v9);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_180183870, 2u, PrimaryDisplay, 0x1048u);
      v4 = v13;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_180183870, 2u, CurrentDisplaySet, 0x1046u);
  }
  if ( v12 )
    CDisplaySet::Release(v12);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  return v7;
}
