/*
 * XREFs of ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1330
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

void __fastcall FixupPrimaryGestureContact(
        struct tagPOINTERINFONODE *a1,
        unsigned int a2,
        struct tagTPSTATE *a3,
        struct tagHID_POINTER_DEVICE_INFO *a4,
        int a5)
{
  __int64 v5; // rbx
  int v6; // esi
  int v8; // ecx
  __int64 v10; // r13
  struct tagPOINT *v12; // r14
  struct tagPOINT v13; // [rsp+70h] [rbp+40h]
  struct tagPOINT v14; // [rsp+80h] [rbp+50h] BYREF

  v5 = *((_QWORD *)a1 + 12);
  v6 = 0;
  v8 = *((_DWORD *)a1 + 17);
  v10 = 176LL * a2;
  v14 = 0LL;
  if ( v8 )
  {
    if ( (*(_DWORD *)((_BYTE *)a3 + v10 + 168) & 0x400) != 0 )
    {
      if ( (v8 & 0x40000) != 0 )
        UpdateTPContactState(a2, a3, a1);
      *((_DWORD *)a1 + 17) = 0;
    }
    if ( a5 )
    {
      v12 = (struct tagPOINT *)((char *)a1 + 88);
      *((struct tagPOINT *)a1 + 11) = gptCursorAsync;
      *((_QWORD *)a3 + 138) = v5;
      *((_QWORD *)a3 + 137) = *((_QWORD *)a1 + 11);
    }
    else
    {
      v13.x = v5 - *((_DWORD *)a3 + 276);
      v13.y = HIDWORD(v5) - *((_DWORD *)a3 + 277);
      TransformHimetricDeltaToScreenDelta(a4, v13, &v14);
      v12 = (struct tagPOINT *)((char *)a1 + 88);
      *((_DWORD *)a1 + 22) = v14.x + *((_DWORD *)a3 + 274);
      *((_DWORD *)a1 + 23) = v14.y + *((_DWORD *)a3 + 275);
    }
    *(_QWORD *)((char *)a3 + v10 + 8) = v5;
    MagnifyScreenLocation(v12);
    TransformTPScreenToHimetric(a4, *v12, (struct tagPOINT *)a1 + 12);
    *((struct tagPOINT *)a1 + 13) = *v12;
    *((_QWORD *)a1 + 14) = *((_QWORD *)a1 + 12);
    if ( a5 || (*(_DWORD *)((_BYTE *)a3 + v10 + 168) & 2) != 0 )
      v6 = 1;
    FixupTPPointerFlags((unsigned int *)a1 + 17, v6);
  }
}
