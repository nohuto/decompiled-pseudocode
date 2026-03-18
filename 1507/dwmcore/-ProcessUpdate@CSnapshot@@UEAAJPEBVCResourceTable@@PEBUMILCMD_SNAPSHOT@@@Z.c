/*
 * XREFs of ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x18010B3D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x1800E29DC (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x18010B19C (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CSnapshot::ProcessUpdate(
        CSnapshot *this,
        const struct CResourceTable *a2,
        const struct MILCMD_SNAPSHOT *a3)
{
  unsigned int v5; // ebx
  __int64 Resource; // rax
  struct CVisual *v7; // rbp
  __int64 v8; // rcx
  CComposition *v9; // rcx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int CVI; // eax
  int v14; // [rsp+60h] [rbp+18h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 31LL);
  v7 = (struct CVisual *)Resource;
  if ( !*((_DWORD *)a3 + 2) || Resource )
  {
    v8 = *((_QWORD *)this + 6);
    if ( v8 )
    {
      CMILCOMBase::InternalRelease((CMILCOMBase *)(v8 + 16));
      *((_QWORD *)this + 6) = 0LL;
    }
    if ( v7 )
    {
      if ( *((_DWORD *)a3 + 3) )
      {
        if ( *((_DWORD *)a3 + 4) )
        {
          v9 = (CComposition *)*((_QWORD *)this + 2);
          v14 = 0x7FFFFFFF;
          v15 = 0x7FFFFFFF;
          if ( (int)CComposition::GetPrimaryDisplayDimensions(v9, &v14, &v15) >= 0 )
          {
            v10 = v15;
            if ( v14 > v15 )
              v10 = v14;
            v11 = v10;
            if ( *((_DWORD *)a3 + 3) < v10 )
              v11 = *((_DWORD *)a3 + 3);
            if ( *((_DWORD *)a3 + 4) < v10 )
              v10 = *((_DWORD *)a3 + 4);
            *((_DWORD *)this + 11) = v10;
            *((_DWORD *)this + 10) = v11;
            CVI = CSnapshot::CreateCVI((struct CComposition **)this, v7);
            v5 = CVI;
            if ( CVI < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, CVI, 0xBCu);
          }
        }
      }
    }
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xA3u);
  }
  return v5;
}
