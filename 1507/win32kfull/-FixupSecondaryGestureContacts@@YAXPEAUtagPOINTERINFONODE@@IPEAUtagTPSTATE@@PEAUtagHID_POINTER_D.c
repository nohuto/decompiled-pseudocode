/*
 * XREFs of ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1474
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01F0DE4 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01F15A8 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 * Callees:
 *     ?FixupTPPointerFlags@@YAXPEAIH@Z @ 0x1C01F158C (-FixupTPPointerFlags@@YAXPEAIH@Z.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01F1CBC (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 *     ?TransformHimetricDeltaToScreenDelta@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01F25B4 (-TransformHimetricDeltaToScreenDelta@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     ?TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01F2714 (-TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01F2E7C (-UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z.c)
 */

void __fastcall FixupSecondaryGestureContacts(
        struct tagPOINTERINFONODE *a1,
        unsigned int a2,
        struct tagTPSTATE *a3,
        struct tagHID_POINTER_DEVICE_INFO *a4,
        int a5)
{
  __int64 v5; // r10
  int v6; // esi
  __int64 v8; // r15
  int v11; // [rsp+24h] [rbp-Ch]
  struct tagPOINT v12; // [rsp+60h] [rbp+30h]
  struct tagPOINT v13; // [rsp+70h] [rbp+40h] BYREF

  v5 = *((_QWORD *)a1 + 12);
  v6 = 0;
  v8 = 176LL * a2;
  v13 = 0LL;
  v11 = HIDWORD(v5);
  if ( (*(_DWORD *)((_BYTE *)a3 + v8 + 168) & 0x400) != 0 )
  {
    if ( (*((_DWORD *)a1 + 17) & 0x40000) != 0 )
      UpdateTPContactState(a2, a3, a1);
    *((_DWORD *)a1 + 17) = 0;
  }
  if ( *((_DWORD *)a1 + 17) )
  {
    v12.x = v5 - *((_DWORD *)a3 + 276);
    v12.y = v11 - *((_DWORD *)a3 + 277);
    *(_QWORD *)((char *)a3 + v8 + 8) = v5;
    TransformHimetricDeltaToScreenDelta(a4, v12, &v13);
    *((_DWORD *)a1 + 22) = v13.x + *((_DWORD *)a3 + 274);
    *((_DWORD *)a1 + 23) = v13.y + *((_DWORD *)a3 + 275);
    MagnifyScreenLocation((struct tagPOINT *)a1 + 11);
    TransformTPScreenToHimetric(a4, *(struct tagPOINT *)((char *)a1 + 88), (struct tagPOINT *)a1 + 12);
    *((_QWORD *)a1 + 13) = *((_QWORD *)a1 + 11);
    *((_QWORD *)a1 + 14) = *((_QWORD *)a1 + 12);
    if ( a5 || (*(_DWORD *)((_BYTE *)a3 + v8 + 168) & 2) != 0 )
      v6 = 1;
    FixupTPPointerFlags((unsigned int *)a1 + 17, v6);
  }
}
