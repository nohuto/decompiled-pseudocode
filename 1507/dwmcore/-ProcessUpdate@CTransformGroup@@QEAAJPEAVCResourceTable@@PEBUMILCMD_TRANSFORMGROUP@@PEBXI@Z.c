/*
 * XREFs of ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001A0C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x18001A240 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x1800480B8 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180048104 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x18005C06C (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x180128C7C (-HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 */

__int64 __fastcall CTransformGroup::ProcessUpdate(
        CTransformGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  unsigned __int64 v9; // xmm0_8
  int v10; // eax
  struct CResource **v11; // rdx
  int v12; // esi
  int v13; // eax
  __m128i v14; // xmm0
  void *v15; // r13
  char v16; // di
  __m128i v17; // xmm0
  int v19; // eax
  struct CResource **v20; // r12
  __int64 v21; // rbx
  unsigned int v22; // eax
  unsigned int v23; // edi
  int v24; // eax
  WPF *v25; // rcx
  int v26; // eax
  WPF::ProcessHeapImpl *v27; // rdi
  unsigned int v28; // eax
  char *v29; // r13
  void **v30; // [rsp+20h] [rbp-50h]
  unsigned int v31; // [rsp+50h] [rbp-20h] BYREF
  void *v32; // [rsp+58h] [rbp-18h] BYREF
  const void *v33; // [rsp+60h] [rbp-10h] BYREF
  void *Src; // [rsp+68h] [rbp-8h]
  const void *v35; // [rsp+C0h] [rbp+50h] BYREF
  struct CResource **v36; // [rsp+C8h] [rbp+58h]

  v5 = *a3;
  v35 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( HIDWORD(v9) )
    goto LABEL_6;
  CTransformGroup::UnRegisterNotifiers(this);
  v10 = UnmarshalResourceArray(&v35, &a5, (unsigned int)v9, 53LL);
  v11 = v36;
  v12 = v10;
  *((_QWORD *)this + 17) = v36;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x9B0u);
LABEL_34:
    CTransformGroup::UnRegisterNotifiers(this);
    goto LABEL_8;
  }
  v13 = CResource::RegisterNNotifiersInternal(this, v11, *((_DWORD *)this + 32));
  v12 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA4Cu);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x9B3u);
    goto LABEL_34;
  }
LABEL_6:
  v14 = *a3;
  v12 = 0;
  LODWORD(v36) = 0;
  v15 = 0LL;
  v31 = a5;
  v16 = 0;
  v17 = _mm_srli_si128(v14, 8);
  v33 = a4;
  v32 = 0LL;
  if ( !v17.m128i_i32[1] )
    goto LABEL_7;
  v19 = UnmarshalResourceArray(&v33, &v31, (unsigned int)_mm_cvtsi128_si32(v17), 53LL);
  v20 = (struct CResource **)Src;
  v12 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x9F7u);
    LODWORD(v21) = (_DWORD)v36;
LABEL_13:
    if ( v12 >= 0 )
      goto LABEL_8;
    if ( v16 )
      CResource::UnRegisterNNotifiersInternal(this, v20, v21);
    goto LABEL_16;
  }
  v21 = (unsigned int)v36;
  if ( !(_DWORD)v36 )
    goto LABEL_13;
  v22 = *((_DWORD *)this + 32);
  v23 = v22 + (_DWORD)v36;
  v31 = v22 + (_DWORD)v36;
  if ( v22 + (unsigned int)v36 >= v22 )
  {
    v24 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, (unsigned int)v36);
    v12 = v24;
    if ( v24 >= 0 )
    {
      LOBYTE(v35) = 1;
      v26 = WPF::HrMallocClear(v25, 8LL, v23, (unsigned __int64)&v32, v30);
      v12 = v26;
      if ( v26 >= 0 )
      {
        v28 = *((_DWORD *)this + 32);
        v29 = (char *)v32;
        if ( v28 )
          memcpy_0(v32, *((const void **)this + 17), 8LL * v28);
        memcpy_0(&v29[8 * *((unsigned int *)this + 32)], v20, 8 * v21);
        Src = (void *)*((_QWORD *)this + 17);
        if ( Src )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            Src);
          v23 = v31;
        }
        *((_DWORD *)this + 32) = v23;
        v27 = WPF::g_pProcessHeap;
        *((_QWORD *)this + 17) = v29;
        v15 = 0LL;
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)v27 + 32LL))(v27, v20);
        LODWORD(v21) = (_DWORD)v36;
        v20 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xA09u);
        v15 = v32;
      }
      v16 = (char)v35;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xA00u);
      v16 = 0;
    }
    goto LABEL_13;
  }
  v12 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x9FDu);
LABEL_16:
  if ( v20 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v20);
  if ( v15 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v15);
LABEL_7:
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x9BCu);
    goto LABEL_34;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v12;
}
