/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x18006F70C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x18005CB2C (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ @ 0x18006F360 (-UnRegisterNotifiers@CAtlasedRectsMesh@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessUpdate(
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
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-48h]
  __m128i v18; // [rsp+30h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-18h]

  v18 = *a3;
  v19 = a3[1].m128i_i64[0];
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  v9 = a5;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 12));
  *((_DWORD *)this + 36) = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
  *((_DWORD *)this + 37) = v10;
  if ( v10 )
  {
    if ( v10 > a5 || (v10 & 0xF) != 0 )
    {
      v17 = 560;
      goto LABEL_25;
    }
    v11 = WPF::HrAlloc(v7, v10, this + 19, v8);
    v12 = v11;
    if ( v11 < 0 )
    {
      v17 = 568;
LABEL_21:
      v16 = v11;
LABEL_26:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
      CAtlasedRectsMesh::UnRegisterNotifiers(this);
      goto LABEL_17;
    }
    memcpy_0(this[19], a4, *((unsigned int *)this + 37));
    v13 = *((unsigned int *)this + 37);
    v9 = a5 - v13;
    a4 += v13;
  }
  *((_DWORD *)this + 40) = v19;
  if ( !(_DWORD)v19 )
    goto LABEL_11;
  if ( (unsigned int)v19 > v9 || (v19 & 0xF) != 0 )
  {
    v17 = 593;
    goto LABEL_25;
  }
  v11 = WPF::HrAlloc(v7, (unsigned int)v19, this + 21, v8);
  v12 = v11;
  if ( v11 < 0 )
  {
    v17 = 601;
    goto LABEL_21;
  }
  memcpy_0(this[21], a4, *((unsigned int *)this + 40));
  v14 = *((unsigned int *)this + 40);
  v9 -= v14;
  a4 += v14;
LABEL_11:
  *((_DWORD *)this + 44) = HIDWORD(v19);
  if ( HIDWORD(v19) )
  {
    if ( HIDWORD(v19) <= v9 && (v19 & 0x300000000LL) == 0 )
    {
      v11 = WPF::HrAlloc(v7, HIDWORD(v19), this + 23, v8);
      v12 = v11;
      if ( v11 >= 0 )
      {
        memcpy_0(this[23], a4, *((unsigned int *)this + 44));
        goto LABEL_16;
      }
      v17 = 634;
      goto LABEL_21;
    }
    v17 = 626;
LABEL_25:
    v16 = -2003303421;
    v12 = -2003303421;
    goto LABEL_26;
  }
LABEL_16:
  v12 = 0;
LABEL_17:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return v12;
}
