/*
 * XREFs of PopFxAcpiRegisterDevice @ 0x140243010
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140242B78 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     PopFxCreateDeviceCommon @ 0x140166F8C (PopFxCreateDeviceCommon.c)
 *     PopFxDestroyDeviceCommon @ 0x1402379C8 (PopFxDestroyDeviceCommon.c)
 *     PopFxInsertAcpiDevice @ 0x14023804C (PopFxInsertAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x140243428 (PopPluginAcpiNotificationStrict.c)
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
  __int64 v15; // r9
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter4[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]

  v17 = 0LL;
  v8 = PopFxCreateDeviceCommon(a1, a2, a3, 4, &v17);
  v9 = v17;
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_7;
  v11 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)BugCheckParameter4 = *(_OWORD *)a3;
  v12 = *(_QWORD *)(a3 + 32);
  v20 = *((_QWORD *)&v11 + 1);
  v19 = v17;
  v21 = v12;
  PopPluginAcpiNotificationStrict(a2, 3uLL, (ULONG_PTR)BugCheckParameter4);
  if ( !v20 )
    goto LABEL_5;
  PopFxInsertAcpiDevice(v14, v13, v9, v15);
  if ( v20 )
  {
    *(_QWORD *)(v9 + 80) = a2;
    *(_QWORD *)(v9 + 88) = v20;
    *a5 = v20;
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
