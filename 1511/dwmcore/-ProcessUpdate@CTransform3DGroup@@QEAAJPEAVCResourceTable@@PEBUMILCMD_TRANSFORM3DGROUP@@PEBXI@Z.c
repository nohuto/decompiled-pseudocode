/*
 * XREFs of ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180068638
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ @ 0x1800687A0 (-UnRegisterNotifiers@CTransform3DGroup@@UEAAXXZ.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1800688CC (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008562C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800AA970 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 */

__int64 __fastcall CTransform3DGroup::ProcessUpdate(
        CTransform3DGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        char a5)
{
  __m128i v5; // xmm0
  unsigned __int64 v9; // xmm0_8
  int v11; // eax
  struct CResource **v12; // rdx
  int v13; // ebx
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-58h]
  const void *v17; // [rsp+90h] [rbp+18h] BYREF
  struct CResource **v18; // [rsp+98h] [rbp+20h]

  v5 = *a3;
  v17 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CTransform3DGroup::UnRegisterNotifiers(this);
    v11 = UnmarshalResourceArray(&v17, &a5, (unsigned int)v9, 24LL);
    v12 = v18;
    v13 = v11;
    *((_QWORD *)this + 19) = v18;
    if ( v11 < 0 )
    {
      v16 = 2175;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v16);
      goto LABEL_12;
    }
    v14 = CResource::RegisterNNotifiersInternal(this, v12, *((_DWORD *)this + 36));
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x91Bu);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x882u);
LABEL_12:
      CTransform3DGroup::UnRegisterNotifiers(this);
      goto LABEL_7;
    }
  }
  v11 = CTransform3DGroup::ProcessAppend(this, a2, (const struct MILCMD_TRANSFORM3DGROUP *)a3, a4, a5);
  v13 = v11;
  if ( v11 < 0 )
  {
    v16 = 2187;
    goto LABEL_11;
  }
LABEL_7:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v13;
}
