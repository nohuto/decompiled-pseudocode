/*
 * XREFs of ?NotifyScreenRotation@CComposition@@AEAAJXZ @ 0x1800E2F54
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800681C4 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::NotifyScreenRotation(CComposition *this)
{
  int CurrentDisplaySet; // eax
  CDisplaySet *v3; // rdi
  unsigned int v4; // ebx
  int v5; // r8d
  int v6; // r9d
  int v7; // eax
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+34h] [rbp-24h]
  __int64 v11; // [rsp+3Ch] [rbp-1Ch]
  __int64 v12; // [rsp+44h] [rbp-14h]
  CDisplaySet *v13; // [rsp+68h] [rbp+10h] BYREF

  v9 = 18;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v13);
  v3 = v13;
  v4 = CurrentDisplaySet;
  if ( CurrentDisplaySet >= 0 )
  {
    v5 = 270;
    switch ( *(_DWORD *)(**((_QWORD **)v13 + 6) + 896LL) )
    {
      case 2:
        v6 = 90;
        break;
      case 3:
        v6 = 180;
        break;
      case 4:
        v6 = 270;
        break;
      default:
        v6 = 0;
        break;
    }
    if ( *(_DWORD *)(**((_QWORD **)qword_1801930F0 + 6) + 896LL) == 2 )
    {
      v5 = 90;
    }
    else if ( *(_DWORD *)(**((_QWORD **)qword_1801930F0 + 6) + 896LL) == 3 )
    {
      v5 = 180;
    }
    else if ( *(_DWORD *)(**((_QWORD **)qword_1801930F0 + 6) + 896LL) != 4 )
    {
      v5 = 0;
    }
    HIDWORD(v10) = v5 - v6;
    LODWORD(v11) = (360 - v5) % 360;
    v7 = CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v9);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1213u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x11F7u);
  }
  if ( v3 )
    CDisplaySet::Release(v3);
  return v4;
}
