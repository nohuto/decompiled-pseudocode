/*
 * XREFs of ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01E78EC
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E6C7C (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E7000 (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01E7B6C (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 * Callees:
 *     ?FixupTPPointerFlags@@YAXPEAIH@Z @ 0x1C01E7B50 (-FixupTPPointerFlags@@YAXPEAIH@Z.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01E80FC (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 *     ?TransformHimetricDeltaToScreenDelta@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01E8BDC (-TransformHimetricDeltaToScreenDelta@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     ?TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01E8D18 (-TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01E961C (-UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z.c)
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
  __int64 v8; // r13
  struct tagPOINT *v11; // r14
  struct tagPOINT v12; // [rsp+70h] [rbp+40h]
  struct tagPOINT v13; // [rsp+80h] [rbp+50h] BYREF

  v5 = *((_QWORD *)a1 + 12);
  v6 = 0;
  v8 = 272LL * a2;
  v13 = 0LL;
  if ( (*(_DWORD *)((_BYTE *)a3 + v8 + 264) & 0x400) != 0 )
  {
    if ( (*((_DWORD *)a1 + 17) & 0x40000) != 0 )
      UpdateTPContactState(a2, a3, a1);
    *((_DWORD *)a1 + 17) = 0;
  }
  if ( *((_DWORD *)a1 + 17) )
  {
    if ( a5 )
    {
      v11 = (struct tagPOINT *)((char *)a1 + 88);
      *((struct tagPOINT *)a1 + 11) = gptCursorAsync;
      *((_QWORD *)a3 + 211) = v5;
      *((_QWORD *)a3 + 210) = *((_QWORD *)a1 + 11);
    }
    else
    {
      v12.x = v5 - *((_DWORD *)a3 + 422);
      v12.y = HIDWORD(v5) - *((_DWORD *)a3 + 423);
      TransformHimetricDeltaToScreenDelta(a4, v12, &v13);
      v11 = (struct tagPOINT *)((char *)a1 + 88);
      *((_DWORD *)a1 + 22) = v13.x + *((_DWORD *)a3 + 420);
      *((_DWORD *)a1 + 23) = v13.y + *((_DWORD *)a3 + 421);
    }
    *(_QWORD *)((char *)a3 + v8 + 8) = v5;
    MagnifyScreenLocation(v11);
    TransformTPScreenToHimetric(a4, *v11, (struct tagPOINT *)a1 + 12);
    *((struct tagPOINT *)a1 + 13) = *v11;
    *((_QWORD *)a1 + 14) = *((_QWORD *)a1 + 12);
    if ( a5 || (*(_DWORD *)((_BYTE *)a3 + v8 + 264) & 2) != 0 )
      v6 = 1;
    FixupTPPointerFlags((unsigned int *)a1 + 17, v6);
  }
}
