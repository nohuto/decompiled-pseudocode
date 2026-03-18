/*
 * XREFs of ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1800F3274
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008562C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800AA970 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18012FC2C (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x180130060 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometryGroup::ProcessUpdate(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  unsigned __int64 v9; // xmm0_8
  int v11; // eax
  struct CResource **v12; // rdx
  int v13; // ebx
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+20h] [rbp-58h]
  const void *v18; // [rsp+90h] [rbp+18h] BYREF
  struct CResource **v19; // [rsp+98h] [rbp+20h] BYREF

  v5 = *a3;
  v18 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CGeometryGroup::UnRegisterNotifiers(this);
    v11 = UnmarshalResourceArray(
            (WPF *)&v18,
            &a5,
            v9,
            0x41u,
            v16,
            (unsigned int *)this + 30,
            (__int64 **)&v19,
            (__int64)a2,
            0);
    v12 = v19;
    v13 = v11;
    *((_QWORD *)this + 16) = v19;
    if ( v11 < 0 )
    {
      v17 = 3260;
LABEL_10:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v17);
      goto LABEL_11;
    }
    v14 = CResource::RegisterNNotifiersInternal(this, v12, *((_DWORD *)this + 30));
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xD58u);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xCBFu);
LABEL_11:
      CGeometryGroup::UnRegisterNotifiers(this);
      goto LABEL_12;
    }
  }
  v11 = CGeometryGroup::ProcessAppend(this, a2, (const struct MILCMD_GEOMETRYGROUP *)a3, a4, a5);
  v13 = v11;
  if ( v11 < 0 )
  {
    v17 = 3272;
    goto LABEL_10;
  }
LABEL_12:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v13;
}
