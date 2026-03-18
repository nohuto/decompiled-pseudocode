/*
 * XREFs of ?GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0118954
 * Callers:
 *     _GetPointerDeviceProperties @ 0x1C0118528 (_GetPointerDeviceProperties.c)
 *     ExtractPointerPropertyValues @ 0x1C01CBB80 (ExtractPointerPropertyValues.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetPreparsedData(struct tagHID_POINTER_DEVICE_INFO *a1, struct _HIDP_PREPARSED_DATA **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  struct _HIDP_PREPARSED_DATA *v6; // rcx

  v4 = 0;
  v5 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 92), 19);
  if ( v5 )
    v6 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(v5 + 400) + 16LL);
  else
    v6 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a1 + 192);
  *a2 = v6;
  if ( v6 )
    return 1;
  return v4;
}
