/*
 * XREFs of PpDevCfgProcessDeviceOperations @ 0x14050E6F8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14050E7C8 (PiDevCfgFreeDeviceContext.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406359A8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitDeviceContext @ 0x140639568 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140641064 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceOperations(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  int inited; // ebx
  int v7; // r14d
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  int v11; // [rsp+40h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-61h] BYREF
  int v13; // [rsp+50h] [rbp-59h] BYREF
  const wchar_t *v14; // [rsp+58h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v16[28]; // [rsp+90h] [rbp-19h] BYREF
  int v17; // [rsp+110h] [rbp+67h] BYREF
  int v18; // [rsp+120h] [rbp+77h] BYREF
  int v19; // [rsp+128h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v16[0] = 0;
  memset(&v16[2], 0, 0x40uLL);
  v17 = 0;
  v19 = 0;
  v11 = 0;
  v18 = 0;
  if ( *(_QWORD *)(a1 + 48) )
  {
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
    v13 = 2752552;
    v14 = L"PendingConfiguration";
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    inited = v4;
    if ( v4 == -1073741772 )
    {
      inited = 0;
    }
    else if ( v4 >= 0 )
    {
      inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v16);
      if ( inited >= 0 )
      {
        inited = PiDevCfgConfigureDeviceKeys(a1, (unsigned int)v16, (_DWORD)KeyHandle, -1, (__int64)&v19, 0LL);
        if ( inited >= 0 )
        {
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, a2, L"PendingConfiguration");
          v7 = v19;
          if ( v19 )
          {
            v8 = *(_QWORD *)(a1 + 48);
            v18 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v8,
                        (__int64)a2,
                        11,
                        (__int64)&v11,
                        (__int64)&v17,
                        (__int64)&v18,
                        0) >= 0
              && v11 == 4
              && v18 == 4 )
            {
              v10 = v17;
            }
            else
            {
              v10 = 0;
            }
            v17 = v7 | v10;
            PiDevCfgSetDeviceRegProp(v9, (unsigned int)v16, 11, 4, (__int64)&v17, 4);
          }
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    inited = -1073741808;
  }
  PiDevCfgFreeDeviceContext(v16);
  return (unsigned int)inited;
}
