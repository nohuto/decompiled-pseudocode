/*
 * XREFs of ApplyPTPTranslation @ 0x1C01D0850
 * Callers:
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C6CD8 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 * Callees:
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01D0448 (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 */

__int64 __fastcall ApplyPTPTranslation(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v5; // rsi
  unsigned int v8; // ecx
  unsigned int v9; // eax
  struct tagPOINT v11; // [rsp+58h] [rbp+38h] BYREF

  v5 = a3;
  EtwTracePointerDeviceTransformationStart(*a4);
  TransformPTPLogicalUnitsToPhysical(a1, *(struct tagPOINT *)(a4 + 1), (struct tagPOINT *)(a2 + 64));
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 64);
  TransformPTPLogicalUnitsToPhysical(
    a1,
    *(struct tagPOINT *)(a4 + 3),
    (struct tagPOINT *)(2400 * v5 + *((_QWORD *)a1 + 87) + 2316LL));
  v8 = a4[6];
  if ( v8 )
  {
    v9 = a4[7];
    if ( v9 )
    {
      v11 = 0LL;
      TransformPTPLogicalUnitsToPhysical(a1, (struct tagPOINT)__PAIR64__(v9, v8), &v11);
      *(struct tagPOINT *)(*((_QWORD *)a1 + 87) + 2400 * v5 + 2324) = v11;
    }
  }
  return EtwTracePointerDeviceTransformationStop(*a4);
}
