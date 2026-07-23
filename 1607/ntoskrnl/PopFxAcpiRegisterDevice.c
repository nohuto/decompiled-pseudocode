/*
 * XREFs of PopFxAcpiRegisterDevice @ 0x14020E570
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x14020E114 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     PopFxCreateDeviceCommon @ 0x140142760 (PopFxCreateDeviceCommon.c)
 *     PopFxDestroyDeviceCommon @ 0x140202634 (PopFxDestroyDeviceCommon.c)
 *     PopFxInsertAcpiDevice @ 0x140202B0C (PopFxInsertAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x14020E984 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiRegisterDevice(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  int v8; // eax
  __int64 v9; // rbx
  int v10; // edi
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+58h] [rbp-8h]

  v16 = 0LL;
  v8 = PopFxCreateDeviceCommon(a1, a2, a3, 4, &v16);
  v9 = v16;
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_7;
  v11 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)BugCheckParameter4 = *(_OWORD *)a3;
  v12 = *(_QWORD *)(a3 + 32);
  v19 = *((_QWORD *)&v11 + 1);
  v18 = v16;
  v20 = v12;
  PopPluginAcpiNotificationStrict(a2, 3uLL, (ULONG_PTR)BugCheckParameter4);
  if ( !v19 )
    goto LABEL_5;
  PopFxInsertAcpiDevice(v14, v13, v9);
  if ( v19 )
  {
    *(_QWORD *)(v9 + 80) = a2;
    *(_QWORD *)(v9 + 88) = v19;
    *a5 = v19;
    *a4 = v9;
  }
  else
  {
LABEL_5:
    v10 = -1073741823;
    *a4 = 0LL;
    *a5 = 0LL;
  }
  if ( v10 < 0 )
  {
LABEL_7:
    if ( v9 )
    {
      *(_QWORD *)(v9 + 80) = 0LL;
      *(_QWORD *)(v9 + 88) = 0LL;
      PopFxDestroyDeviceCommon((PVOID *)v9);
    }
  }
  return (unsigned int)v10;
}
