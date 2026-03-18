/*
 * XREFs of ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x1800F4E50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180100D98 (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180126B3C (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
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
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int CVI; // eax
  int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x1Fu);
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
          v13 = 0x7FFFFFFF;
          v14 = 0x7FFFFFFF;
          if ( (int)CComposition::GetPrimaryDisplayDimensions((CComposition *)v8, &v13, &v14) >= 0 )
          {
            v9 = v14;
            if ( v13 > v14 )
              v9 = v13;
            v10 = v9;
            if ( *((_DWORD *)a3 + 3) < v9 )
              v10 = *((_DWORD *)a3 + 3);
            if ( *((_DWORD *)a3 + 4) < v9 )
              v9 = *((_DWORD *)a3 + 4);
            *((_DWORD *)this + 11) = v9;
            *((_DWORD *)this + 10) = v10;
            CVI = CSnapshot::CreateCVI(this, v7);
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
