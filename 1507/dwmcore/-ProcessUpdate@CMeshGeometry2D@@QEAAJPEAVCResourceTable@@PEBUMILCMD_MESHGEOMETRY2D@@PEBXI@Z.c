/*
 * XREFs of ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x1801186C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x18005CB2C (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x1801191B0 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessUpdate(
        void **this,
        struct CResourceTable *a2,
        __m128i *a3,
        char *a4,
        unsigned int a5)
{
  WPF *v7; // rcx
  void **v8; // r9
  unsigned int v9; // esi
  unsigned int v10; // eax
  WPF *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int *v19; // rax
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  unsigned int v23; // [rsp+20h] [rbp-58h]
  __m128i v24; // [rsp+30h] [rbp-48h]
  __m128i v25; // [rsp+40h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-28h]

  v24 = *a3;
  v26 = a3[1].m128i_i64[0];
  v25 = *a3;
  CMeshGeometry2D::UnRegisterNotifiers((CMeshGeometry2D *)this);
  v9 = a5;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8));
  *((_DWORD *)this + 24) = v10;
  if ( v10 )
  {
    if ( v10 > a5 || (v11 = (WPF *)(12 * (v10 / 0xCuLL)), (WPF *)v10 != v11) )
    {
      v23 = 219;
LABEL_40:
      v14 = -2003303421;
      v13 = -2003303421;
      goto LABEL_41;
    }
    v12 = WPF::HrAlloc(v11, v10, this + 13, (void **)v10);
    v13 = v12;
    if ( v12 < 0 )
    {
      v23 = 227;
LABEL_6:
      v14 = v12;
LABEL_41:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v23);
      CMeshGeometry2D::UnRegisterNotifiers((CMeshGeometry2D *)this);
      goto LABEL_37;
    }
    memcpy_0(this[13], a4, *((unsigned int *)this + 24));
    v15 = *((unsigned int *)this + 24);
    v9 = a5 - v15;
    a4 += v15;
  }
  *((_DWORD *)this + 28) = v25.m128i_i32[3];
  if ( !v25.m128i_i32[3] )
    goto LABEL_15;
  if ( v25.m128i_i32[3] > v9 || (v25.m128i_i8[12] & 0xF) != 0 )
  {
    v23 = 252;
    goto LABEL_40;
  }
  v12 = WPF::HrAlloc(v7, v25.m128i_u32[3], this + 15, v8);
  v13 = v12;
  if ( v12 < 0 )
  {
    v23 = 260;
    goto LABEL_6;
  }
  memcpy_0(this[15], a4, *((unsigned int *)this + 28));
  v16 = *((unsigned int *)this + 28);
  v9 -= v16;
  a4 += v16;
LABEL_15:
  *((_DWORD *)this + 32) = v26;
  if ( !(_DWORD)v26 )
    goto LABEL_22;
  if ( (unsigned int)v26 > v9 || (v26 & 3) != 0 )
  {
    v23 = 285;
    goto LABEL_40;
  }
  v12 = WPF::HrAlloc(v7, (unsigned int)v26, this + 17, v8);
  v13 = v12;
  if ( v12 < 0 )
  {
    v23 = 293;
    goto LABEL_6;
  }
  memcpy_0(this[17], a4, *((unsigned int *)this + 32));
  v17 = *((unsigned int *)this + 32);
  v9 -= v17;
  a4 += v17;
LABEL_22:
  *((_DWORD *)this + 36) = HIDWORD(v26);
  if ( !HIDWORD(v26) )
    goto LABEL_29;
  if ( HIDWORD(v26) > v9 || (v26 & 0x300000000LL) != 0 )
  {
    v23 = 318;
    goto LABEL_40;
  }
  v12 = WPF::HrAlloc(v7, HIDWORD(v26), this + 19, v8);
  v13 = v12;
  if ( v12 < 0 )
  {
    v23 = 326;
    goto LABEL_6;
  }
  memcpy_0(this[19], a4, *((unsigned int *)this + 36));
LABEL_29:
  v18 = *((_DWORD *)this + 24) / 0xCu;
  if ( v18 >= *((_DWORD *)this + 32) >> 2 )
    v18 = *((_DWORD *)this + 32) >> 2;
  v19 = (unsigned int *)this[19];
  if ( v18 >= *((_DWORD *)this + 28) >> 4 )
    v18 = *((_DWORD *)this + 28) >> 4;
  v20 = *((_DWORD *)this + 36) >> 2;
  v21 = 0;
  if ( v20 )
  {
    while ( *v19 < v18 )
    {
      ++v21;
      ++v19;
      if ( v21 >= v20 )
        goto LABEL_36;
    }
    v23 = 356;
    goto LABEL_40;
  }
LABEL_36:
  v13 = 0;
LABEL_37:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return v13;
}
