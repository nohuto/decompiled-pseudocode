/*
 * XREFs of Template_qn @ 0x18017C794
 * Callers:
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B9058 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qn(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  int v10; // [rsp+70h] [rbp+18h] BYREF

  v10 = a3;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = a5;
  v9 = 0;
  v8 = 16;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT, 2u, &v6);
}
