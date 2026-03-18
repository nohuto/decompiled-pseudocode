/*
 * XREFs of ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180060418
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x1800480B8 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180048104 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x18005C06C (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1800605A0 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x180128C7C (-HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 */

__int64 __fastcall CTransform3DGroup::ProcessUpdate(
        CTransform3DGroup *this,
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
  void *v20; // r12
  __int64 v21; // rbx
  unsigned int v22; // eax
  unsigned int v23; // edi
  int v24; // eax
  WPF *v25; // rcx
  int v26; // eax
  WPF::ProcessHeapImpl *v27; // rdi
  unsigned int v28; // eax
  char *v29; // r13
  __int64 v30; // [rsp+20h] [rbp-50h]
  unsigned int v31; // [rsp+20h] [rbp-50h]
  void **v32; // [rsp+20h] [rbp-50h]
  unsigned int v33; // [rsp+50h] [rbp-20h] BYREF
  void *v34; // [rsp+58h] [rbp-18h] BYREF
  const void *v35; // [rsp+60h] [rbp-10h] BYREF
  void *Src; // [rsp+68h] [rbp-8h] BYREF
  struct CResourceTable *v37; // [rsp+B8h] [rbp+48h]
  const void *v38; // [rsp+C0h] [rbp+50h] BYREF
  struct CResource **v39; // [rsp+C8h] [rbp+58h] BYREF

  v37 = a2;
  v5 = *a3;
  v38 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CTransform3DGroup::UnRegisterNotifiers(this);
    v10 = UnmarshalResourceArray(
            (WPF *)&v38,
            &a5,
            v9,
            0x18u,
            v30,
            (unsigned int *)this + 32,
            (__int64 **)&v39,
            (__int64)v37,
            0);
    v11 = v39;
    v12 = v10;
    *((_QWORD *)this + 17) = v39;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x87Du);
LABEL_36:
      CTransform3DGroup::UnRegisterNotifiers(this);
      goto LABEL_9;
    }
    v13 = CResource::RegisterNNotifiersInternal(this, v11, *((_DWORD *)this + 32));
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x919u);
    if ( v12 < 0 )
    {
      v31 = 2176;
LABEL_35:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v31);
      goto LABEL_36;
    }
    a2 = v37;
  }
  v14 = *a3;
  v12 = 0;
  LODWORD(v39) = 0;
  v15 = 0LL;
  v33 = a5;
  v16 = 0;
  v17 = _mm_srli_si128(v14, 8);
  v35 = a4;
  v34 = 0LL;
  if ( v17.m128i_i32[1] )
  {
    v19 = UnmarshalResourceArray(
            (WPF *)&v35,
            &v33,
            _mm_cvtsi128_si32(v17),
            0x18u,
            v30,
            (unsigned int *)&v39,
            (__int64 **)&Src,
            (__int64)a2,
            0);
    v20 = Src;
    v12 = v19;
    if ( v19 >= 0 )
    {
      v21 = (unsigned int)v39;
      if ( (_DWORD)v39 )
      {
        v22 = *((_DWORD *)this + 32);
        v23 = v22 + (_DWORD)v39;
        v33 = v22 + (_DWORD)v39;
        if ( v22 + (unsigned int)v39 < v22 )
        {
          v12 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x8CAu);
LABEL_17:
          if ( v20 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v20);
          if ( v15 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v15);
          goto LABEL_8;
        }
        v24 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, (unsigned int)v39);
        v12 = v24;
        if ( v24 >= 0 )
        {
          LOBYTE(v38) = 1;
          v26 = WPF::HrMallocClear(v25, 8LL, v23, (unsigned __int64)&v34, v32);
          v12 = v26;
          if ( v26 >= 0 )
          {
            v28 = *((_DWORD *)this + 32);
            v29 = (char *)v34;
            if ( v28 )
              memcpy_0(v34, *((const void **)this + 17), 8LL * v28);
            memcpy_0(&v29[8 * *((unsigned int *)this + 32)], v20, 8 * v21);
            Src = (void *)*((_QWORD *)this + 17);
            if ( Src )
            {
              (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                Src);
              v23 = v33;
            }
            *((_DWORD *)this + 32) = v23;
            v27 = WPF::g_pProcessHeap;
            *((_QWORD *)this + 17) = v29;
            v15 = 0LL;
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)v27 + 32LL))(v27, v20);
            LODWORD(v21) = (_DWORD)v39;
            v20 = 0LL;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x8D6u);
            v15 = v34;
          }
          v16 = (char)v38;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x8CDu);
          v16 = 0;
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x8C4u);
      LODWORD(v21) = (_DWORD)v39;
    }
    if ( v12 >= 0 )
      goto LABEL_9;
    if ( v16 )
      CResource::UnRegisterNNotifiersInternal(this, (struct CResource **)v20, v21);
    goto LABEL_17;
  }
LABEL_8:
  if ( v12 < 0 )
  {
    v31 = 2185;
    goto LABEL_35;
  }
LABEL_9:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v12;
}
