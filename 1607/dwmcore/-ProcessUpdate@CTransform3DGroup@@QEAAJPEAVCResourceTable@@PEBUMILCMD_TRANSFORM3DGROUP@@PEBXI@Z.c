/*
 * XREFs of ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180021C50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x180021B60 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008DCA4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008DCF0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800ADA54 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransform3DGroup::ProcessUpdate(
        CTransform3DGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  unsigned __int64 v9; // rbx
  int v10; // eax
  struct CResource **v11; // rdx
  int v12; // ebx
  int v13; // eax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  char *v16; // r15
  int v18; // eax
  struct CResource **v19; // r14
  __int64 v20; // r12
  unsigned int v21; // eax
  unsigned int v22; // r13d
  unsigned int v23; // eax
  WPF::ProcessHeapImpl *v24; // rcx
  unsigned int v25; // [rsp+20h] [rbp-50h]
  unsigned int v26; // [rsp+20h] [rbp-50h]
  unsigned int v27; // [rsp+50h] [rbp-20h] BYREF
  const void *v28; // [rsp+58h] [rbp-18h] BYREF
  void *Src; // [rsp+60h] [rbp-10h]
  const void *v30; // [rsp+C0h] [rbp+50h] BYREF
  struct CResource **v31; // [rsp+C8h] [rbp+58h]

  v5 = *a3;
  v30 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CTransform3DGroup::UnRegisterNotifiers(this);
    v10 = UnmarshalResourceArray(&v30, &a5, (unsigned int)v9, 24LL);
    v11 = v31;
    v12 = v10;
    *((_QWORD *)this + 31) = v31;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x835u);
LABEL_40:
      CTransform3DGroup::UnRegisterNotifiers(this);
      goto LABEL_8;
    }
    v13 = CResource::RegisterNNotifiersInternal(this, v11, *((_DWORD *)this + 60));
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x8D1u);
    if ( v12 < 0 )
    {
      v25 = 2104;
LABEL_39:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v25);
      goto LABEL_40;
    }
  }
  v12 = 0;
  v14 = *a3;
  LODWORD(v31) = 0;
  v27 = a5;
  v15 = _mm_srli_si128(v14, 8);
  v28 = a4;
  v16 = 0LL;
  LOBYTE(v30) = 0;
  if ( v15.m128i_i32[1] )
  {
    v18 = UnmarshalResourceArray(&v28, &v27, (unsigned int)_mm_cvtsi128_si32(v15), 24LL);
    v19 = (struct CResource **)Src;
    v12 = v18;
    v20 = (unsigned int)v31;
    if ( v18 < 0 )
    {
      v26 = 2172;
    }
    else
    {
      if ( !(_DWORD)v31 )
      {
LABEL_31:
        if ( v12 >= 0 )
          goto LABEL_8;
        if ( (_BYTE)v30 )
          CResource::UnRegisterNNotifiersInternal(this, v19, v20);
        goto LABEL_34;
      }
      v21 = *((_DWORD *)this + 60);
      v22 = v21 + (_DWORD)v31;
      if ( v21 + (unsigned int)v31 < v21 )
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x882u);
LABEL_34:
        if ( v19 )
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v19);
        if ( v16 )
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, char *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v16);
        goto LABEL_7;
      }
      v18 = CResource::RegisterNNotifiersInternal(this, (struct CResource **)Src, (unsigned int)v31);
      v12 = v18;
      if ( v18 >= 0 )
      {
        LOBYTE(v30) = 1;
        v12 = 0;
        if ( v22 && 0xFFFFFFFFFFFFFFFFuLL / v22 > 8 )
        {
          v16 = (char *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                          WPF::g_pProcessHeap,
                          8LL * v22);
          if ( !v16 )
            v12 = -2147024882;
        }
        else
        {
          v12 = -2147024809;
        }
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x88Eu);
        }
        else
        {
          v23 = *((_DWORD *)this + 60);
          if ( v23 )
            memcpy_0(v16, *((const void **)this + 31), 8LL * v23);
          memcpy_0(&v16[8 * *((unsigned int *)this + 60)], v19, 8 * v20);
          if ( *((_QWORD *)this + 31) )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
          v24 = WPF::g_pProcessHeap;
          *((_QWORD *)this + 31) = v16;
          v16 = 0LL;
          *((_DWORD *)this + 60) = v22;
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)v24 + 32LL))(v24, v19);
          v19 = 0LL;
        }
        goto LABEL_31;
      }
      v26 = 2181;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v26);
    goto LABEL_31;
  }
LABEL_7:
  if ( v12 < 0 )
  {
    v25 = 2113;
    goto LABEL_39;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v12;
}
