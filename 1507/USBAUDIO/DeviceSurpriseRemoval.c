/*
 * XREFs of DeviceSurpriseRemoval @ 0x1C0014510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     ExitIrpThreadAndQueue @ 0x1C00024F4 (ExitIrpThreadAndQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DeviceSurpriseRemoval(_QWORD *Object))(_QWORD *)
{
  __int64 v1; // rbx
  PVOID i; // rax
  struct _KSFILTER *j; // rax
  ULONG k; // esi
  PKSPIN m; // rax
  _QWORD *Context; // r15
  void (__fastcall *v8)(struct _KSPIN *); // rax
  struct _KSPIN *v9; // rdi
  struct _KSFILTER *v10; // rbx
  void *v11; // rbp
  __int64 (__fastcall *result)(_QWORD *); // rax

  v1 = Object[2];
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x12u,
    (__int64)&WPP_67bd095a70f836f2f34e78037ce373b5_Traceguids,
    Object);
  ExitIrpThreadAndQueue(v1);
  for ( i = KsGetFirstChild(Object); ; i = KsGetNextSibling(v11) )
  {
    v11 = i;
    if ( !i )
      break;
    for ( j = (struct _KSFILTER *)KsGetFirstChild(i); ; j = (struct _KSFILTER *)KsGetNextSibling(v10) )
    {
      v10 = j;
      if ( !j )
        break;
      KsAcquireControl(j);
      for ( k = 0; k < v10->Descriptor->PinDescriptorsCount; ++k )
      {
        for ( m = KsFilterGetFirstChildPin(v10, k); ; m = KsPinGetNextSiblingPin(v9) )
        {
          v9 = m;
          if ( !m )
            break;
          Context = m->Context;
          v8 = *(void (__fastcall **)(struct _KSPIN *))(*(_QWORD *)(Context[16] + 128LL) + 32LL);
          if ( v8 )
            v8(v9);
          *((_BYTE *)Context + 38) = 1;
        }
      }
      KsReleaseControl(v10);
    }
  }
  *(_BYTE *)(Object[2] + 67LL) = 1;
  result = *(__int64 (__fastcall **)(_QWORD *))(pExtBusDeviceDispatchTable + 32);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD *))result(Object);
  return result;
}
