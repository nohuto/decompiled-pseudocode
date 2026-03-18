/*
 * XREFs of ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x1800666F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x1800669C0 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ?ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180066B30 (-ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008562C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800AA970 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 */

__int64 __fastcall CTransformGroup::ProcessUpdate(
        CTransformGroup *this,
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
    CTransformGroup::UnRegisterNotifiers(this);
    v11 = UnmarshalResourceArray(&v17, &a5, (unsigned int)v9, 57LL);
    v12 = v18;
    v13 = v11;
    *((_QWORD *)this + 19) = v18;
    if ( v11 < 0 )
    {
      v16 = 2482;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v16);
      goto LABEL_12;
    }
    v14 = CResource::RegisterNNotifiersInternal(this, v12, *((_DWORD *)this + 36));
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA4Eu);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x9B5u);
LABEL_12:
      CTransformGroup::UnRegisterNotifiers(this);
      goto LABEL_7;
    }
  }
  v11 = CTransformGroup::ProcessAppend(this, a2, (const struct MILCMD_TRANSFORMGROUP *)a3, a4, a5);
  v13 = v11;
  if ( v11 < 0 )
  {
    v16 = 2494;
    goto LABEL_11;
  }
LABEL_7:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v13;
}
