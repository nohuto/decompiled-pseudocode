/*
 * XREFs of UsbDevice_ConfigureEndpointCompletion @ 0x1C002FF60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0008F40 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_ConfigureEndpointCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v3; // edx
  unsigned __int16 v4; // r9
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rcx
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD **)(a1 + 56);
  if ( a2 == 3 )
  {
    v3 = *((unsigned __int8 *)v2 + 135);
    v4 = 66;
LABEL_6:
    v10 = v3;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v2[1] + 64LL),
      4u,
      0xBu,
      v4,
      (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
      v10,
      *v2);
    v5 = 3221225473LL;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a1 + 68) != 1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 69);
    v4 = 68;
    goto LABEL_6;
  }
  v9 = *(unsigned __int8 *)(a1 + 69);
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v2[1] + 64LL),
    4u,
    0xBu,
    0x43u,
    (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
    v9,
    *v2);
  v5 = 0LL;
LABEL_7:
  v6 = (__int64 (__fastcall *)(__int64, __int64))v2[67];
  v7 = v2[68];
  v2[67] = 0LL;
  v2[68] = 0LL;
  return v6(v7, v5);
}
