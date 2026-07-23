/*
 * XREFs of IopQueryResourceHandlerInterface @ 0x140557A7C
 * Callers:
 *     IoTranslateBusAddress @ 0x1401CD4C0 (IoTranslateBusAddress.c)
 *     IopDuplicateDetection @ 0x140555998 (IopDuplicateDetection.c)
 *     IopSetupArbiterAndTranslators @ 0x1405574E8 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryResourceHandlerInterface(int a1, struct _DEVICE_OBJECT *a2, unsigned __int8 a3, _QWORD *a4)
{
  int v8; // ecx
  GUID v9; // xmm0
  unsigned __int16 v10; // bx
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rsi
  __int64 v13; // r9
  int v14; // ebx
  int v16; // ecx
  int v17; // edi
  bool v18; // zf
  _QWORD v19[9]; // [rsp+30h] [rbp-39h] BYREF
  GUID v20; // [rsp+78h] [rbp+Fh] BYREF

  if ( (struct _DRIVER_OBJECT *)*((_QWORD *)a2->DeviceObjectExtension->DeviceNode + 54) == a2->DriverObject
    || (a2->Flags & 0x1000) == 0 )
  {
    return 3221225659LL;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    v16 = v8 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        return 3221225485LL;
      v9 = GUID_LEGACY_DEVICE_DETECTION_STANDARD;
      v10 = 40;
    }
    else
    {
      v9 = GUID_ARBITER_INTERFACE_STANDARD;
      v10 = 48;
    }
  }
  else
  {
    v9 = GUID_TRANSLATOR_INTERFACE_STANDARD;
    v10 = 52;
  }
  v20 = v9;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x20207050u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    *(_WORD *)v12 = v10;
    memset(v19, 0, sizeof(v19));
    LOWORD(v19[0]) = 2075;
    LOWORD(v19[2]) = v10;
    v19[1] = &v20;
    v19[4] = a3;
    *((_WORD *)v12 + 1) = 0;
    WORD1(v19[2]) = 0;
    v19[3] = v12;
    v14 = IopSynchronousCall(a2, (__int64)v19, -1073741637, v13, 0LL);
    if ( v14 < 0 )
      goto LABEL_7;
    v17 = a1 - 1;
    if ( v17 )
    {
      if ( (unsigned int)(v17 - 1) > 1 )
      {
        v14 = -1073741811;
        goto LABEL_7;
      }
      v18 = v12[4] == 0LL;
    }
    else
    {
      if ( !v12[4] )
      {
LABEL_21:
        v14 = -1073741823;
LABEL_15:
        if ( v14 >= 0 )
        {
          *a4 = v12;
          return (unsigned int)v14;
        }
LABEL_7:
        ExFreePoolWithTag(v12, 0);
        return (unsigned int)v14;
      }
      v18 = v12[5] == 0LL;
    }
    if ( !v18 )
      goto LABEL_15;
    goto LABEL_21;
  }
  return 3221225626LL;
}
