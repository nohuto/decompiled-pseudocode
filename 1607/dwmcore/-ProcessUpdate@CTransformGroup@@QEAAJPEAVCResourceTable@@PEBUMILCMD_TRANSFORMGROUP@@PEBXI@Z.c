/*
 * XREFs of ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18002314C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180022C78 (-ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x180023030 (-UnRegisterNotifiers@CTransformGroup@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x18008DCF0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800ADA54 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 */

__int64 __fastcall CTransformGroup::ProcessUpdate(
        CTransformGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        int a5)
{
  __m128i v5; // xmm0
  unsigned __int64 v10; // rbx
  int v11; // eax
  struct CResource **v12; // rdx
  int v13; // ebx
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+20h] [rbp-58h]
  char *v18; // [rsp+28h] [rbp-50h]
  struct CResource ***v19; // [rsp+30h] [rbp-48h]
  struct CResourceTable *v20; // [rsp+38h] [rbp-40h]
  char v21; // [rsp+40h] [rbp-38h]
  const void *v22; // [rsp+90h] [rbp+18h] BYREF
  struct CResource **v23; // [rsp+98h] [rbp+20h] BYREF

  v5 = *a3;
  v22 = a4;
  v10 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v10) )
  {
    CTransformGroup::UnRegisterNotifiers(this);
    v21 = 0;
    v20 = a2;
    v19 = &v23;
    v18 = (char *)this + 240;
    v11 = UnmarshalResourceArray(&v22, &a5, (unsigned int)v10, 58LL);
    v12 = v23;
    v13 = v11;
    *((_QWORD *)this + 31) = v23;
    if ( v11 < 0 )
    {
      v17 = 2408;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v17);
      goto LABEL_12;
    }
    v14 = CResource::RegisterNNotifiersInternal(this, v12, *((_DWORD *)this + 60));
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA04u);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x96Bu);
LABEL_12:
      CTransformGroup::UnRegisterNotifiers(this);
      goto LABEL_7;
    }
  }
  LODWORD(v16) = a5;
  v11 = CTransformGroup::ProcessAppend(this, a2, a3, a4, v16, v18, v19, v20, v21);
  v13 = v11;
  if ( v11 < 0 )
  {
    v17 = 2420;
    goto LABEL_11;
  }
LABEL_7:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v13;
}
