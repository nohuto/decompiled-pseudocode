/*
 * XREFs of ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C002BCD8
 * Callers:
 *     ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C017CF70 (-FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0005240 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ??$DIFF@I@@YAIII@Z @ 0x1C000A2C4 (--$DIFF@I@@YAIII@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

const struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::FindClosestTargetMode(
        DMMVIDPNTARGETMODESET *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DDDI_RATIONAL a4,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  unsigned int v8; // ebp
  __int64 v9; // r12
  struct DMMVIDPNSOURCEMODE *v10; // rsi
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  unsigned int v14; // r14d
  struct DMMVIDPNSOURCEMODE *NextMode; // rdi
  _QWORD *v16; // rax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v17; // edx
  _QWORD *v18; // rbx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // ebx
  struct _D3DDDI_RATIONAL v26; // [rsp+68h] [rbp+20h] BYREF

  v26 = a4;
  v8 = -1;
  v9 = a3;
  v10 = 0LL;
  v11 = (_QWORD *)((char *)this + 48);
  v12 = a2;
  v14 = -1;
  if ( (_QWORD *)*v11 == v11 )
    goto LABEL_3;
  NextMode = (struct DMMVIDPNSOURCEMODE *)(*v11 - 8LL);
  if ( !NextMode )
    goto LABEL_3;
  while ( 1 )
  {
    if ( (!a7 || *((_DWORD *)NextMode + 21) == v12 && *((_DWORD *)NextMode + 22) == (_DWORD)v9)
      && (!a8 || (int)(*((_DWORD *)NextMode + 30) << 29) >> 29 == a5) )
    {
      v20 = DmmMapVSyncFromRationalToInteger(&v26, a5, 0LL);
      v21 = DmmMapVSyncFromRationalToInteger(
              (const struct _D3DDDI_RATIONAL *)((char *)NextMode + 92),
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*((_DWORD *)NextMode + 30) << 29) >> 29),
              0LL);
      DIFF<unsigned int>(v21, v20);
      v22 = DIFF<unsigned int>(*((_DWORD *)NextMode + 21) * *((_DWORD *)NextMode + 22), (unsigned int)v9 * a2);
      if ( v23 < v8 )
      {
        v8 = v23;
LABEL_15:
        v10 = NextMode;
        v14 = v22;
        goto LABEL_16;
      }
      if ( v23 == v8 && v22 < v14 )
        goto LABEL_15;
    }
LABEL_16:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode);
    if ( !NextMode )
      break;
    v12 = a2;
  }
  if ( !v10 )
  {
LABEL_3:
    v16 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v17 = a5;
    v18 = v16;
    v16[3] = a2;
    v16[4] = v9;
    v16[5] = DmmMapVSyncFromRationalToInteger(&v26, v17, 0LL);
    v18[6] = this;
    WdLogEvent5_WdDmmEvent(v18);
    return v10;
  }
  if ( !a6 )
    return v10;
  v24 = DmmMapVSyncFromRationalToInteger(
          (const struct _D3DDDI_RATIONAL *)((char *)v10 + 92),
          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*((_DWORD *)v10 + 30) << 29) >> 29),
          0LL);
  if ( v24 == DmmMapVSyncFromRationalToInteger(&v26, a5, 0LL) )
    return v10;
  return 0LL;
}
