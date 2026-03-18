/*
 * XREFs of ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x18010C0C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180116A7C (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180143348 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CSnapshot::ProcessUpdate(
        CSnapshot *this,
        const struct CResourceTable *a2,
        const struct MILCMD_SNAPSHOT *a3)
{
  unsigned int v5; // edi
  __int64 Resource; // rax
  __int64 v7; // rcx
  struct CVisual *v8; // rbp
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int CVI; // eax
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x20u);
  v7 = *((_QWORD *)this + 16);
  v8 = (struct CVisual *)Resource;
  if ( v7 )
  {
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v7 + 16));
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( v8 )
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( *((_DWORD *)a3 + 4) )
      {
        v13 = 0x7FFFFFFF;
        v14 = 0x7FFFFFFF;
        if ( (int)CComposition::GetPrimaryDisplayDimensions((CComposition *)v7, &v13, &v14) >= 0 )
        {
          v9 = v14;
          if ( v13 > v14 )
            v9 = v13;
          v10 = v9;
          if ( *((_DWORD *)a3 + 3) < v9 )
            v10 = *((_DWORD *)a3 + 3);
          if ( *((_DWORD *)a3 + 4) < v9 )
            v9 = *((_DWORD *)a3 + 4);
          *((_DWORD *)this + 28) = v10;
          *((_DWORD *)this + 29) = v9;
          *((_BYTE *)this + 120) = *((_DWORD *)a3 + 5) != 0;
          CVI = CSnapshot::CreateCVI(this, v8);
          v5 = CVI;
          if ( CVI < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, CVI, 0xC2u);
        }
      }
    }
  }
  return v5;
}
