/*
 * XREFs of ?SetVisualTree@CAnalogRenderTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x1801276A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041100 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800585D0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18006091C (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180060A08 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C (-UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::SetVisualTree(
        struct CVisualTree **this,
        struct CVisualTree *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  struct CVisualTree *v8; // rdx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  struct CVisualTree *v13; // rax
  int v14; // eax
  int Bounds; // eax
  int v16; // ecx
  signed __int64 v17; // rax
  float v19[6]; // [rsp+30h] [rbp-38h] BYREF

  CAnalogRenderTarget::UnregisterSwapChain((CAnalogRenderTarget *)this);
  v8 = this[7];
  v9 = 0LL;
  if ( v8 )
  {
    v10 = CMonitorTreeAssociation::RemoveTree(*((CMonitorTreeAssociation **)this[2] + 3), v8);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x56u);
      return v11;
    }
    *((_BYTE *)this[7] + 32) = 0;
  }
  v12 = CRenderTarget::SetVisualTree((CRenderTarget *)this, a2);
  v11 = v12;
  if ( v12 >= 0 )
  {
    if ( a2 )
    {
      v13 = this[12];
      if ( v13
        && (v14 = CMonitorTreeAssociation::AddMonitorTree(
                    *((CMonitorTreeAssociation **)this[2] + 3),
                    *(HMONITOR *)(*((_QWORD *)v13 + 19) + 32LL),
                    a2),
            v11 = v14,
            v14 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x69u);
      }
      else
      {
        *((_BYTE *)a2 + 32) = 1;
        if ( *((_DWORD *)this + 28) == *((_DWORD *)this + 26) && *((_DWORD *)this + 29) == *((_DWORD *)this + 27) )
        {
          Bounds = CVisualTree::GetBounds(a2, (__int64)v19);
          v11 = Bounds;
          if ( Bounds < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x71u);
            return v11;
          }
          do
          {
            v16 = (int)v19[v9];
            v17 = (char *)this - (char *)v19 + 4 * v9++;
            *(int *)((char *)&a6 + v17) = v16;
          }
          while ( v9 < 4 );
        }
        *((_BYTE *)this + 212) = 1;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x5Au);
  }
  return v11;
}
