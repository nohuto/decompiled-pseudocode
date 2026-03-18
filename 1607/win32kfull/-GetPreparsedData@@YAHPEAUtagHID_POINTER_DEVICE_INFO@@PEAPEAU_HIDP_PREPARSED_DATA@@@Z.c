/*
 * XREFs of ?GetPreparsedData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C00E49B4
 * Callers:
 *     _GetPointerDeviceProperties @ 0x1C00E4588 (_GetPointerDeviceProperties.c)
 *     ExtractPointerPropertyValues @ 0x1C01C734C (ExtractPointerPropertyValues.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetPreparsedData(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct _HIDP_PREPARSED_DATA **a2,
        __int64 a3,
        __int64 a4)
{
  struct _HIDP_PREPARSED_DATA **v4; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax
  struct _HIDP_PREPARSED_DATA *v8; // rcx

  v4 = a2;
  LOBYTE(a2) = 19;
  v6 = 0;
  v7 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 88), (__int64)a2, a3, a4);
  if ( v7 )
    v8 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(v7 + 464) + 16LL);
  else
    v8 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a1 + 187);
  *v4 = v8;
  if ( v8 )
    return 1;
  return v6;
}
