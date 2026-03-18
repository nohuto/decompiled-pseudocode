/*
 * XREFs of ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x18013CAF0
 * Callers:
 *     ??1CAnalogTextureTarget@@EEAA@XZ @ 0x18013BDA0 (--1CAnalogTextureTarget@@EEAA@XZ.c)
 * Callees:
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769A0 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800AD390 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800B2854 (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800B2948 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CAnalogTextureTarget::SetVisualTree(CAnalogTextureTarget *this, struct CVisualTree *a2)
{
  __int64 v3; // rdi
  struct CVisualTree *v4; // rdx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int Bounds; // eax
  int v12; // ecx
  signed __int64 v13; // rax
  float v15[6]; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v4 = (struct CVisualTree *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    v6 = CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL), v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x41u);
      return v7;
    }
    *(_BYTE *)(*((_QWORD *)this + 7) + 32LL) = 0;
  }
  v8 = CRenderTarget::SetVisualTree(this, a2);
  v7 = v8;
  if ( v8 >= 0 )
  {
    if ( a2 )
    {
      v9 = *((_QWORD *)this + 10);
      if ( v9
        && (v10 = CMonitorTreeAssociation::AddMonitorTree(
                    *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
                    *(HMONITOR *)(*(_QWORD *)(v9 + 136) + 24LL),
                    a2),
            v7 = v10,
            v10 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x54u);
      }
      else
      {
        *((_BYTE *)a2 + 32) = 1;
        if ( *((_DWORD *)this + 24) == *((_DWORD *)this + 22) && *((_DWORD *)this + 25) == *((_DWORD *)this + 23) )
        {
          Bounds = CVisualTree::GetBounds(a2, (__int64)v15);
          v7 = Bounds;
          if ( Bounds < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x5Cu);
            return v7;
          }
          do
          {
            v12 = (int)v15[v3];
            v13 = this - (CAnalogTextureTarget *)v15 + 4 * v3++;
            *(int *)((char *)&v16 + v13) = v12;
          }
          while ( v3 < 4 );
        }
        *((_BYTE *)this + 196) = 1;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x45u);
  }
  return v7;
}
